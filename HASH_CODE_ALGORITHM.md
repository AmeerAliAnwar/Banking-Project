# The hash-code lookup in FinVerz

FinVerz never searches for an account. The four symbols a customer types are decoded into four digits, and those digits select the account directly through a four-level `if/else` tree inside `account()`. A valid code walks the same fixed number of comparisons no matter which account it belongs to, and a code that belongs to nobody runs no account code at all.

This document covers the symbol mapping, the shape of the tree, the comparison budget of one lookup, and where each part lives in `Untitled2.cpp`. All line numbers refer to that file.

## 1. Symbols are digits in disguise

| Symbol | `<` | `>` | `~` | `!` | `@` | `#` | `$` | `^` | `&` | `*` |
|--------|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
| Digit  | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   |

Ten symbols, ten digits, four positions: the code space is exactly 10,000 values, and each value can hold one account record.

The set behaves like a substitution cipher rather than a hash function. It hides the digits from anyone glancing at the screen, and because the cipher order does not follow the keyboard order (`@` is digit 4, not 2; `!` is digit 3, not 1), the visible code does not read back as the number underneath it. Every symbol is still a single Shift combination on a US layout (`! @ # $ ^ & *` from the number row, plus `<`, `>`, `~`), which keeps the code easy to type with one Shift combination per position.

The decoding runs once, at the top of `account()` (`Untitled2.cpp:407-420`):

```cpp
	int a[4];
	for(int i=0; i<4; i++)
	{

			 if(c[i]=='*')		{a[i]=9;}
		else if (c[i]=='&')		{a[i]=8;}
		else if (c[i]=='^')		{a[i]=7;}
		else if (c[i]=='$')		{a[i]=6;}
		else if (c[i]=='#')		{a[i]=5;}
		else if (c[i]=='@')		{a[i]=4;}
		else if (c[i]=='!')		{a[i]=3;}
		else if (c[i]=='~')		{a[i]=2;}
		else if (c[i]=='>')		{a[i]=1;}
		else if (c[i]=='<')		{a[i]=0;}
	}
```

After this loop the symbols are gone. Everything below works on four `int` values, `a[0]` to `a[3]`.

## 2. A four-level tree instead of a list

`account()` (line 399) writes one `if/else` chain per digit, and nests the chains inside each other. The skeleton looks like this (`Untitled2.cpp:422-434`):

```cpp
	if (a[0]==0){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				...
```

Each digit consumes one chain, so a code travels four chains before it reaches its slot:

```
a[0] chain:   if (a[0]==0) ... else if (a[0]==9)            10 branches
a[1] chain:      if (a[1]==0) ... else if (a[1]==9)        100 branches, one chain per a[0]
a[2] chain:         if (a[2]==0) ... else if (a[2]==9)    1000 branches, one chain per a[1]
a[3] chain:            if (a[3]==0){} ... if (a[3]==9){} 10000 slots, one per code
```

A slot is either empty (`{}`, the account does not exist) or filled with one account record. The first populated slot in the file is Faiza Shahid's, at `<~>&` = `0,2,1,8` (`Untitled2.cpp:682-712`):

```cpp
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				...
				else if (a[3]==8){
					cnic=3520211111112;
					am=34000;
					name="Faiza Shahid.";
					cout<<"HELLO! "<<name<<endl;
					cout<<"PRESS an Option : "<<endl;
					cout<<"1. To an Withdraw Amount "<<endl;
					cout<<"2. To an Deposit Amount "<<endl;
					cin>>option;
					switch (option){
					case 1:
						atm(pin,am,cnic,c,name);
					break;
					case 2:
						atmdeposit(pin,am,cnic,c,name);
					break;
					default:
						return;
				}
				}
```

And a second slot, Ameer Ali at `#@$#` = `5,4,6,5`, has the same shape with the PIN set as well (`Untitled2.cpp:7198-7218`):

```cpp
			else if (a[2]==6){
				...
				else if (a[3]==5){
					cnic=3520251601571;
					am=90000;
					pin=5465;
					name="Ameer Ali.";
					cout<<"HELLO! "<<name<<endl;
					cout<<"PRESS an Option : "<<endl;
					cout<<"1. To an Withdraw Amount "<<endl;
					cout<<"2. To an Deposit Amount "<<endl;
					cin>>option;
					switch (option){
					case 1:
						atm(pin,am,cnic,c,name);
					break;
					case 2:
						atmdeposit(pin,am,cnic,c,name);
					break;
					default:
						return;
					}
				}
```

The record itself lives in the slot: CNIC, balance, PIN and name are plain assignments, so reaching the right slot is the same thing as finding the account. Nothing is loaded from a file and no array is indexed.

## 3. What the code costs to run

Every chain is written in ascending order (`a[3]==0` first, `a[3]==9` last), and the decode chain in section 1 is written in descending digit order (`*` is digit 9 and comes first, `<` is digit 0 and comes last). That gives two exact, countable facts.

Per digit position:

| Step | Symbol decode | Tree level | Sum |
|------|---------------|------------|-----|
| Digit `d` (0 to 9) | `10 - d` character comparisons | `d + 1` integer comparisons | 11 |

Per lookup, four positions: **44 comparisons for every valid hash code**, whichever account it is. A few examples:

| Hash code | Digits | Decode | Tree walk | Total |
|-----------|--------|--------|-----------|-------|
| `<~>&` | 0,2,1,8 | 29 | 15 | 44 |
| `~!@#` | 2,3,4,5 | 26 | 18 | 44 |
| `#@$#` | 5,4,6,5 | 20 | 24 | 44 |
| `***<` | 9,9,9,0 | 13 | 31 | 44 |
| `****` | 9,9,9,9 | 0 | 40 | 44 |

A code that is valid but unused (an empty slot) also costs 44 comparisons, then falls out of the tree and returns at line 13114 without executing any account code. A code that contains a symbol outside the table is a different case; see the notes in section 6.

## 4. Why this lowers the account checking conditions

The alternative, a loop over the account table, makes the cost of a login grow with the size of the bank:

```cpp
for (int i = 0; i < accounts; i++) {
    if (strcmp(hash, accounts[i].hash) == 0) { ... }
}
```

| Approach | Work per lookup | With 16 accounts | With 10,000 accounts |
|----------|-----------------|------------------|----------------------|
| Loop over the hash list | 4 comparisons per record scanned | up to 64 | up to 40,000 |
| Tree walk | 44 comparisons, fixed | 44 | 44 |

Four properties matter here.

1. **The condition count no longer depends on the number of accounts.** The tree has a slot for every possible code, so a lookup always walks 44 conditions. Adding a thousand customers does not add one comparison to somebody else's login.
2. **Only integers are compared.** The symbol compare happens once, in the decode loop, and then never again. The lookup itself is `int == int` on values the compiler can turn into jump tables, not `strcmp` on four-character strings, and not a read of any account data.
3. **A wrong code is as cheap as a right one.** An unused slot is an empty block, so a mistyped or unknown code finishes in 44 comparisons having touched no account at all. A loop has to check every record before it can report that the account does not exist.
4. **The record is the destination.** The slot body holds `cnic`, `am`, `pin` and `name` directly, so there is no separate structure to index, no hash table to size, and no collision handling: position in the tree is identity.

The price is paid in the binary and in maintenance, and it is worth stating plainly: the tree is 11,110 written conditions across 12,689 lines (`Untitled2.cpp:422-13110`), the same withdraw/deposit dialog is repeated in all 16 populated slots, and a new account means editing and recompiling the tree rather than appending a row. The class-based rewrite in `OOP/` gives that up in the other direction: it looks an account up by CNIC in a `vector`, one string comparison per stored account (`OOP/README.md`).

## 5. Counting the conditions in the source

The counts in this document come from the file itself, not from an estimate. From the repository root:

```powershell
$f = 'Untitled2.cpp'
(Select-String -LiteralPath $f -SimpleMatch 'if (a[0]==').Count   #    10
(Select-String -LiteralPath $f -SimpleMatch 'if (a[1]==').Count   #   100
(Select-String -LiteralPath $f -SimpleMatch 'if (a[2]==').Count   #  1000
(Select-String -LiteralPath $f -SimpleMatch 'if (a[3]==').Count   # 10000
(Select-String -LiteralPath $f -SimpleMatch 'cnic=').Count        #    16
```

10 + 100 + 1000 + 10000 = **11,110 conditions**, and **16 of the 10,000 slots** hold a record in this build.

## 6. The populated slots, and who checks the PIN

Sixteen slots carry a record. The hash codes below are the only valid ones in the current build:

| Hash code | Slot digits | Slot type | Holder |
|-----------|-------------|-----------|--------|
| `<~>&` | 0,2,1,8 | client | Faiza Shahid |
| `~!@#` | 2,3,4,5 | client | Absar Fatima |
| `#@$#` | 5,4,6,5 | client | Ameer Ali |
| `#$^&` | 5,6,7,8 | client | Sajida Arshad |
| `*<!>` | 9,0,3,1 | client | Zehrosh Javed |
| `*&^*` | 9,8,7,9 | client | Farhan Muhammad Khan |
| `***<` | 9,9,9,0 | employee | Ahmed Khan |
| `***>` | 9,9,9,1 | employee | Fatima Malik |
| `***~` | 9,9,9,2 | employee | Adeel Shah |
| `***!` | 9,9,9,3 | employee | Sara Ali |
| `***@` | 9,9,9,4 | employee | Hassan Raza |
| `***#` | 9,9,9,5 | employee | Zainab Bibi |
| `***$` | 9,9,9,6 | employee | Bilal Iqbal |
| `***^` | 9,9,9,7 | employee | Kiran Nasir |
| `***&` | 9,9,9,8 | employee | Sajid Tariq |
| `****` | 9,9,9,9 | employee | Muneeb Aslam |

The hash code selects the account; it is not the secret. With 10,000 possible codes and only four symbols to remember, the code works as a memorable account selector, and `atm()` and `atmdeposit()` ask for the PIN afterwards, comparing it against the `pin` stored in the slot. The employee slots sit in one contiguous family, `***<` to `****`, on purpose: the attendance feature addresses them with a short employee code instead of a full hash code (section 7).

Two honest notes about this part of the code:

- A few slots set only part of the record. The `<~>&` slot, for example, assigns `cnic`, `am` and `name` but never assigns `pin`, so the later PIN comparison reads whatever the previous call left in the local variable. The records here are hard-coded demo data, not a security model.
- The final `else` that prints `WRONG HASH Code !!` (`Untitled2.cpp:13111`) is only reachable if `a[0]` never matched 0 to 9, which cannot happen for a symbol in the table. An unrecognised symbol is the real problem case: the decode loop has no `else`, so `a[i]` keeps its previous value. A rewrite of this decode step should return a sentinel such as `-1` for an unknown symbol and reject the code before the tree is entered.

## 7. The same tree, addressed by a 2-digit employee code

`salary(char c[2])` (`Untitled2.cpp:13116`) handles employee attendance with the identical symbol table, applied to two symbols instead of four. It decodes the 2-digit employee code, maps it onto a hash code in the `***X` family, and hands that hash code to `account()`, which is why the employee slots were placed together:

```
employee code 00  ->  hash code ****  ->  slot digits 9,9,9,9
employee code 01  ->  hash code ***&  ->  slot digits 9,9,9,8
employee code 02  ->  hash code ***^  ->  slot digits 9,9,9,7
...
employee code 09  ->  hash code ***<  ->  slot digits 9,9,9,0
```

The last digit is reversed in the conversion (`hash digit = 9 - code digit`, see `Untitled2.cpp:13135-13205`), so the roster order 00 to 09 runs opposite to the slot order. `account()` receives `attendence = 'p'`, and the employee slots branch on it: when the marker is set they call `salar()` for the payroll step instead of offering the withdraw and deposit menu.

The employee tree is written for two digits, so it costs 10 + 100 = 110 conditions, and it is not finished yet. Its branch tests use `=` (assignment) where `==` (comparison) was intended (`if(employee[0]=0)`, `Untitled2.cpp:13135`), and only the `00` to `09` row assigns a hash code; the remaining rows are empty. In the current source every employee code therefore lands on the same slot. This is the part of FinVerz that is still work in progress, and it is the clearest case for the kind of rewrite in `OOP/`, where the same step becomes a lookup function over a `vector` instead of a tree.

## 8. Source map

| Part | Lines | Notes |
|------|-------|-------|
| `account()` | 399-13115 | 12,717 lines, one function |
| Symbol decode | 407-420 | 10 comparisons per symbol |
| Decision tree | 422-13110 | 11,110 conditions, 10,000 slots |
| Unknown-code `else` | 13111-13112 | last resort branch |
| `salary()` employee tree | 13116-13318 | 110 conditions, 2-digit code |
| Slot dialog (16 copies) | e.g. 692-712, 7199-7218 | one record plus the menu per slot |

Callers: the login path reads four symbols into `char c[4]` and calls `account(c, attendence)` (`Untitled2.cpp:13593-13599`), and the attendance path calls it with the hash code it derived from the employee code (`Untitled2.cpp:13316`).

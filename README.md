# FinVerz

FinVerz is a console banking system written in C++ for Windows. It is one large translation unit (`Untitled2.cpp`, 13,647 lines) that guides the customer with voice prompts, prints receipts, and identifies accounts by a four-symbol hash code instead of by a stored account number.

The lookup design is documented separately in [HASH_CODE_ALGORITHM.md](HASH_CODE_ALGORITHM.md).

## What it does

The main menu (`Untitled2.cpp:13562`) offers six operations:

| Option | Operation | Implementation |
|--------|-----------|----------------|
| 1 | Withdraw or deposit | asks for a hash code, then PIN, then amount (`account`, `atm`, `atmdeposit`) |
| 2 | Add account | CNIC check against the criminal list, name, PIN entry twice, append to `database.txt` (`addacount`) |
| 3 | Employee attendance | 2-digit employee code, marks attendance, forwards to payroll (`salary`, `salar`) |
| 4 | Add employee | CNIC, name, qualification, speciality, grade, append to `employeedatabase.txt` (`addemployee`) |
| 5 | Chatbot | keyword driven Q&A about FinVerz, plain text replies plus voice (`BOT`, `TALK`) |
| 6 | Exchange currency | 34 directional rates across 10 currencies, printed conversion (`Currency`) |

Around those, the program plays a matching `.wav` clip per step, prints a bank receipt after a withdrawal or deposit (hash code, holder, CNIC, cash before and after), and writes new accounts and employees to text files.

## The hash-code lookup in one paragraph

An account is addressed by four typed symbols. Each symbol stands for one digit (`<`=0, `>`=1, `~`=2, `!`=3, `@`=4, `#`=5, `$`=6, `^`=7, `&`=8, `*`=9), and the four digits are walked through a nested `if/else` tree that has a slot for every one of the 10,000 possible codes. The account record sits in the slot itself, so the walk is the search. Every valid code costs 44 comparisons regardless of how many accounts exist, an unused code costs the same 44 and touches nothing, and the PIN is checked afterwards as the actual secret. The full explanation, the measured condition counts and the source map are in [HASH_CODE_ALGORITHM.md](HASH_CODE_ALGORITHM.md).

## Building and running

Requirements: Windows, a MinGW-w64 based C++ compiler, and the audio files in the working directory.

With Dev-C++ (the project was built with Embarcadero Dev-C++ 6.3, TDM-GCC 64-bit):

1. Open `ChatProject.dev`.
2. Build and run (F11).

The project links `-lwinmm` for `PlaySound`, which is already set in `ChatProject.dev` and `Makefile.win`.

From a terminal with MinGW on `PATH`:

```bash
mingw32-make -f Makefile.win        # produces ChatProject.exe
./ChatProject.exe
```

The include and library paths inside `Makefile.win` point at a local Dev-C++ installation (`C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64`); change them if your compiler lives elsewhere.

Two things to keep in mind when running:

- Start the program from this folder. The audio prompts are opened by bare file name (`PlaySound(TEXT("welcome.wav"), ...)`), so the `.wav` files must sit next to the executable.
- The program restarts its own menu after each operation by calling `main()` again (`Untitled2.cpp:13645`), so it exits only through the console window being closed.

## Repository layout

```
.
├── Untitled2.cpp            main program: menu, hash-code tree, ATM, chatbot, currency
├── BANKING project.cpp      earlier iteration of the same program, kept fully commented out
├── chatbot.cpp              standalone chatbot prototype (own main, not part of the build)
├── FinVirBOT.cpp            earlier standalone chatbot prototype (own main, not part of the build)
├── ChatProject.dev          Dev-C++ 6.3 project file
├── Makefile.win             Dev-C++ generated makefile
├── database.txt             account records appended by "Add account"
├── employeedatabase.txt     employee records appended by "Add employee"
├── *.wav                    43 audio prompts, 42 of them played by the current build
├── HASH_CODE_ALGORITHM.md   how the hash-code lookup works
└── OOP/                     object-oriented rewrite of the same banking system
```

The two `*.cpp` prototypes are kept for reference. They define their own `main`, `LOWER` and `TALK`, so they are compiled separately from the main program, not together with it. Both are kept exactly as written, which includes two audio references that do not resolve: `chatbot.cpp` loads `hello.wav` and `FinVirBOT.cpp` loads `hi.wav.wav`, while this folder holds `hellouser.wav` and `hi.wav`.

## Notes on the data

- The 16 accounts reachable through the tree are hard-coded inside the source as demo records: six client accounts and ten employee accounts. There is no account file behind the login; `database.txt` only receives new records written by option 2.
- `BANKING project.cpp` (13,226 lines) is an earlier draft of the program preserved as comments. It compiles to an empty object file and is listed in the project only to keep it visible in the IDE.
- The employee attendance tree is unfinished: its branch tests use `=` where `==` was intended, and only the first row of the employee roster builds a hash code. The object-oriented version in `OOP/` drops this tree and looks accounts up by CNIC in a `vector` instead.
- Three audio files that no source file references were removed after the first import: `Cexchange (1).wav` (a byte-identical copy of `Cexchange.wav`), `currincies.wav` and `serve.wav`. The 43 files that remain are the 42 prompts `Untitled2.cpp` plays, plus `Cexchange.wav`, which no `PlaySound` call in this folder names; it is kept as it came with the project.

## Object-oriented version

`OOP/` contains a rewrite of the same system as C++ classes (`Account`, `BankSystem`, `Criminal`, `Employee`, `Transaction`), with its own project file and README. It keeps CNIC, PIN and balance as class members and finds accounts by scanning a `vector`, so the hash-code tree does not appear there: see [OOP/README.md](OOP/README.md) for what carried over and what changed.

## License

MIT, see [LICENSE](LICENSE). Copyright 2026 Ameer Ali Anwar.

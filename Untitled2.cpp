#include<iostream>
#include<windows.h>
#include <string>
#include <fstream>
using namespace std;
void report(long long int cnic,string name,string crime,string status)
{
	system("cls");
	cout << "**************************************************" <<endl;
	cout << "*                                                *" <<endl;
	cout << "*                   POLICE REPORT                *" <<endl;
	cout << "*                                                *" <<endl;
	cout << "**************************************************" <<endl;
	cout<<endl;
	cout << "---------------------------------------------" <<endl;
	cout << "| Criminal Name   : " << name <<endl;
	cout << "| Criminal CNIC   : " << cnic <<endl;
	cout << "| Criminal Crime  : " << crime <<endl;
	cout << "| Criminal Status : " << status <<endl;
	cout << "---------------------------------------------" <<endl;
	cout <<endl;
	cout << "**************************************************" <<endl;
	cout << "*                                                *" <<endl;
	cout << "*             END OF POLICE REPORT               *" <<endl;
	cout << "*                                                *" <<endl;
	cout << "**************************************************" <<endl;
	PlaySound(TEXT("report.wav"),NULL,SND_SYNC);
	Sleep(3000);
	return;
}
void criminal(long long int a,char* check)
{
	string name,crime,status;
	if (a==3520212345671){
		name="Ali Ahmed";
		crime="Murder Attempt";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520223456782){
		name="Sara Khan";
		crime="Fraud";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520234567891){
		name="Hassan Shah";
		crime="Money Laundering";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520245678902){
		name="Ayesha Malik";
		crime="Corruption";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520256789011){
		name="Bilal Tariq";
		crime="Murder";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520267890122){
		name="Fatima Raza";
		crime="Robbery";	
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520278901232){
		name="Zainab Ali";
		crime="Illegal Weapons";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520289012341){
		name="Omar Iqbal";
		crime="Organ Saling";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520290123451){
		name="Khurram Siddiqui";
		crime="Cyber crime / Hacking";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520201234561){
		name="Asad Mustafa";
		crime="Drugs Business";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520223456782){
		name="Madiha Khan";
		crime="Money Laundering";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520234567892){
		name="Samina Javed";
		crime="Fraud";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520245678901){
		name="Imran Farooq";
		crime="Corruption";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520256789012){
		name="Shazia Qureshi";
		crime="Corruption";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520267890121){
		name="Fahad Mehmood";
		crime="Kidnapping";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520278901231){
		name="Muneeb Rehman";
		crime="Kidnapping";
		status="Captured";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520289012342){
		name="Nida Khan";
		crime="Robbery";
		status="Escaped / Jail Broken";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520290123451){
		name="Junaid Butt";
		crime="Murder";
		status="Escaped / Jail Broken";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520201234562){
		name="Rubina Naz";
		crime="Robbery";
		status="Escaped / Jail Broken";
		report(a,name,crime,status);
		*check='y';
	}
	else if (a==3520223456781){
		name="Tariq Ali";
		crime="Murder";
		status="Escaped / Jail Broken";
		report(a,name,crime,status);
		*check='y';
	}
	return;
}
void addacount(long long cnic)
{
	char check='n';
	ofstream outfile("database.txt",ios::app);
	if (!outfile) {
		cout << "Error: Could not open the file for writing." << endl;
		PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
		return;
	}
	string name;
	int pina,pinb;
	criminal(cnic,&check);
	if(check=='n'){
		cout<<"No Criminal Record Found!"<<endl;
		PlaySound(TEXT("norecord.wav"),NULL,SND_SYNC);
		cin.ignore();
		PlaySound(TEXT("addaccount.wav"),NULL,SND_ASYNC);
		cout<<"Enter your name :";
		getline(cin,name);
		cout<<"Enter your  pin :";
		cin>>pina;
		cout<<"Confirm Your PIN : ";
		cin>>pinb;
		if(pinb==pina){
			PlaySound(TEXT("proceeding.wav"),NULL,SND_SYNC);
			cout<<"Proceeding to Account........ "<<endl;
			outfile << "CNIC: " << cnic << endl;
			outfile << "Name: " << name << endl;
			outfile << "PIN: " << pinb << endl;
			outfile << "-------------------------" << endl;
			
			cout << "************************************************" <<endl;
			cout << "*                                              *" <<endl;
			cout << "*           Congratulations!                   *" <<endl;
			cout << "*  Your account has been created successfully! *" <<endl;
			cout << "*                                              *" <<endl;
			cout << "************************************************" <<endl;
			cout <<endl;
			cout << "Please note:"<<endl<<" Your account will be active within 24 hours." <<endl;
			PlaySound(TEXT("done.wav"),NULL,SND_SYNC);
		}
	}
	outfile.close();
	system("cls");
	return;
}
//                                11163,2934,310,7077,12292,6816
void bill(long long int cnic,char hash[4],int amount,int loseorgainamount,string name)
{
	system("cls");
	cout << "*************************************************************" <<endl;
	cout << "*                       BANK RECEIPT                        *" <<endl;
	cout << "*************************************************************" <<endl;
	cout << "Bank Name      : FinVerz" <<endl;
	cout << "Hash Code      : " << hash <<endl;
	cout << "Account Holder : " << name <<endl;
	cout << "CNIC           : " << cnic <<endl;
	cout << "------------------------------------------------------------" <<endl;
	cout << "Cash Before    : $" << amount <<endl;
	cout << "Cash After     : $" << loseorgainamount <<endl;
	cout << "------------------------------------------------------------" <<endl;
	cout << "                  THANK YOU FOR BANKING WITH US!" <<endl;
	cout << "*************************************************************" <<endl;
	PlaySound(TEXT("bill.wav"),NULL,SND_SYNC);
	Sleep(3000);
	return;
}
void confirm(int *amountptr)
{
	int confirm;
	cout<<"Please Enter Your Amount : ";
	PlaySound(TEXT("amount.wav"),NULL,SND_SYNC);
	cin>>*amountptr;
	cout<<"Confirm Amount : "<<*amountptr<<endl;
	cout<<"Do you want to change the amount : \nPRESS 0 / 1 : ";
	PlaySound(TEXT("confirm.wav"),NULL,SND_SYNC);
	cin>>confirm;
	int time=1;
	while(confirm==1){
			cout<<"Re-Enter your Amount : ";
			PlaySound(TEXT("pin.wav"),NULL,SND_SYNC);
			cin>>*amountptr;
			cout<<"Do you want to change the amount : \nPRESS 0 / 1 : ";
			PlaySound(TEXT("confirm.wav"),NULL,SND_SYNC);
			cin>>confirm;
			time+=1;
		if(time==3){
			break;
		}
	}
	system("cls");
	return;
}
void atm(int pin,int a,long long int cnic,char hash[4],string name)
{
	system("cls");
	int withdraw,pinin,cash;
	int amount=a;
	int time=0;
	cout<<"Enter Your PIN : ";
	PlaySound(TEXT("pin.wav"),NULL,SND_SYNC);
	do{
	cash=0;
	cin>>pinin;
	if(pinin==pin){
	cout<<"Your Total BANK Balance : "<<amount<<endl;
	PlaySound(TEXT("balance.wav"),NULL,SND_SYNC);
	confirm(&withdraw);
	amount-=withdraw;
		if(amount<=a&&amount>0){
			cash=1;
			cout<<"Cash out : "<<cash<<endl;
			cout<<"Your BANK BALANCE After Withdrawal :"<<amount<<endl;
			PlaySound(TEXT("balance.wav"),NULL,SND_SYNC);
		}
		else{
			cout<<"Wrong Amount!!";
			PlaySound(TEXT("incorrect.wav"),NULL,SND_SYNC);
		}
	}
	else{
		cout<<"WRONG PIN!"<<endl;
		cout<<"AGAIN Enter Your pin : ";
		PlaySound(TEXT("incorrect.wav"),NULL,SND_SYNC);
		time+=1;
			if(time==3){
				break;
			}
	}
}while(cash==0);
	system("cls");
	bill(cnic,hash,amount,withdraw,name);
	return;
}
void atmdeposit(int pin,int a,long long int cnic,char hash[4],string name)
{
	system("cls");
	int deposit,pinin,time,cash;
	int amount=a;
	cout<<"Enter Your PIN : ";
	PlaySound(TEXT("pin.wav"),NULL,SND_SYNC);
	do{
	cash=0;
	cin>>pinin;
	if(pinin==pin){
	cout<<"Your Total BANK Balance : "<<amount<<endl;
	PlaySound(TEXT("balance.wav"),NULL,SND_SYNC);
	confirm(&deposit);
	amount+=deposit;
		if(amount>0){
		cash=1;
		cout<<"Your BANK BALANCE After Deposition :"<<amount<<endl;
		PlaySound(TEXT("balance.wav"),NULL,SND_SYNC);
		}
	}
	else{
		cout<<"WRONG PIN!"<<endl;
		cout<<"AGAIN Enter Your pin : ";
		PlaySound(TEXT("incorrect.wav"),NULL,SND_SYNC);
		time+=1;
		if(time==3){
			break;
		}
	}
	}while(cash==0);
	system("cls");
	bill(cnic,hash,amount,deposit,name);
	return;
}
void addemployee(long long cnic)
{
	char check='n';
	ofstream outfile("employeedatabase.txt" , ios::app);
	if (!outfile) {
		cout << "Error: Could not open the file for writing." << endl;
		PlaySound(TEXT("fail.wav"),NULL,SND_SYNC);
		return;
	}
	string name,study,institute,work;
	criminal(cnic,&check);
	if(check=='n'){
		cout<<"No Criminal Record Found!"<<endl;
		PlaySound(TEXT("norecord.wav"),NULL,SND_SYNC);
		cin.ignore();
		PlaySound(TEXT("addemployee.wav"),NULL,SND_ASYNC);
		cout<<"Enter your name :";
		getline(cin,name);
		cout<<"Enter your Qualification :";
		getline(cin,study);
		cout<<"Enter your Institute Name :";
		getline(cin,institute);
		cout<<"Enter your Speciality :";
		getline(cin,work);
			PlaySound(TEXT("proceeding.wav"),NULL,SND_SYNC);
			cout<<"Proceeding ........ "<<endl;
			outfile << "CNIC: " << cnic << endl;
			outfile << "Name: " << name << endl;
			outfile << "Qualification: " << study << endl;
			outfile << "Speciality: " << work << endl;
			outfile << "-------------------------" << endl;
			cout<<"Congratulations! You are Added Successfully!"<<endl;
			cout<<"Your Account will be Active in 24 Hours!";
			PlaySound(TEXT("done.wav"),NULL,SND_SYNC);
	}
	outfile.close();
	system("cls");
	return;
}

void salar(int grade,int amount,long long int cnic,char hash[4],string name)
{
	int salaryamount;
	if (grade<=17){salaryamount=5000;
	}
	else if (grade>17){salaryamount=7000;
	}
	amount+=salaryamount;
	cout<<"Your Total BANK Balance after today's Payment : "<<amount<<endl;
	PlaySound(TEXT("salary.wav"),NULL,SND_SYNC);
	Sleep(5000);
	bill(cnic,hash,amount,salaryamount,name);
	return;
}
void account(char c[4],char attendence)
{
	system("cls");
	PlaySound(TEXT("hellouser.wav"),NULL,SND_ASYNC);
	string name;
	int a[4];
	int am,pin,grade,option;
	long long int cnic;
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
	
	if (a[0]==0){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
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
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
									//END OF 1==0
	else if (a[0]==1){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==1
	else if (a[0]==2){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){
					cnic=3520222222222;
					am=38000;
					pin=2921;
					name="Absar Fatima.";
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
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==2
	else if (a[0]==3){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==3
	else if (a[0]==4){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==4
	else if (a[0]==5){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
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
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){
					cnic=3520233333334;
					am=50000;
					pin=2915;
					name="Sajida Arshad.";
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
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==5
	else if (a[0]==6){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==6
	else if (a[0]==7){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==7
	else if (a[0]==8){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==9
	}	
										//END OF 1==8
	else if (a[0]==9){
		if (a[1]==0){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){
					cnic=3520255555552;
					am=34000;
					pin=2939;
					name="Zehrosh Javed.";
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
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==0
		else if (a[1]==1){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
//							end of 2==1
		else if (a[1]==2){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==2
		else if (a[1]==3){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==3
		else if (a[1]==4){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==4
		else if (a[1]==5){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==5
		else if (a[1]==6){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==6
		else if (a[1]==7){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==7
		else if (a[1]==8){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){
					cnic=3520277777771;
					am=64000;
					pin=2818;
					name="Farhan Muhammad Khan.";
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
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
		}
									//END OF 2==8
		else if (a[1]==9){
			if (a[2]==0){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==1){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==2){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==3){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==4){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==5){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==6){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==7){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==8){
				if (a[3]==0){}
				else if (a[3]==1){}
				else if (a[3]==2){}
				else if (a[3]==3){}
				else if (a[3]==4){}
				else if (a[3]==5){}
				else if (a[3]==6){}	
				else if (a[3]==7){}
				else if (a[3]==8){}
				else if (a[3]==9){}
			}
			else if (a[2]==9){
				if (a[3]==0){
					cnic=3520251601562;
					am=64000;
					pin=2828;
					name="Ahmed Khan.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==1){
					cnic=3520251601563;
					am=6000;
					pin=2838;
					name="Fatima Malik.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==2){
					cnic=3520251601564;
					am=65600;
					pin=2848;
					name="Adeel Shah.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==3){
					cnic=3520251601565;
					am=63200;
					pin=2858;
					name="Sara Ali.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==4){
					cnic=3520251601566;
					am=600;
					pin=2868;
					name="Hassan Raza.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==5){
					cnic=3520251601567;
					am=20000;
					pin=2878;
					name="Zainab Bibi.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==6){
					cnic=3520251601568;
					am=63000;
					pin=2888;
					name="Bilal Iqbal.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==7){
					cnic=3520251601569;
					am=95600;
					pin=2898;
					name="Kiran Nasir.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==8){
					cnic=3520251601560;
					am=52100;
					pin=2819;
					name="Sajid Tariq.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
					salar(grade,am,cnic,c,name);
					return;
					}
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
				else if (a[3]==9){
					grade=16;
					cnic=3520251601561;
					am=78000;
					pin=2817;
					name="Muneeb Aslam.";
					cout<<"HELLO! "<<name<<endl;
					if(attendence=='p'){
						salar(grade,am,cnic,c,name);
					return;
					}
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
			}
		}
									//END OF 2==9
	}
	else{cout<<"WRONG HASH Code !! "<<endl;
	}
										//END OF 1==9
	return;
}
void salary(char c[2])
{
	char hash[4];
	int employee[2];
	for(int i=0; i<2; i++)
	{

			 if(c[i]=='*')		{employee[i]=9;}
		else if (c[i]=='&')		{employee[i]=8;}
		else if (c[i]=='^')		{employee[i]=7;}
		else if (c[i]=='$')		{employee[i]=6;}
		else if (c[i]=='#')		{employee[i]=5;}
		else if (c[i]=='@')		{employee[i]=4;}
		else if (c[i]=='!')		{employee[i]=3;}
		else if (c[i]=='~')		{employee[i]=2;}
		else if (c[i]=='>')		{employee[i]=1;}
		else if (c[i]=='<')		{employee[i]=0;}
	}
	char attendence='a';
	if(employee[0]=0){
		if(employee[1]=0){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'*'};
		attendence='p';
		}
		else if(employee[1]=1){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'&'};
		attendence='p';
		}
		else if(employee[1]=2){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'^'};
		attendence='p';
		}
		else if(employee[1]=3){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'$'};
		attendence='p';
		}
		else if(employee[1]=4){
		attendence='p';
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'#'};
		}
		else if(employee[1]=5){
		attendence='p';
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'@'};
		}
		else if(employee[1]=6){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'!'};
		attendence='p';
		}
		else if(employee[1]=7){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'~'};
		attendence='p';
		}
		else if(employee[1]=8){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'>'};
		attendence='p';
		}
		else if(employee[1]=9){
		hash[0]={'*'};
		hash[1]={'*'};
		hash[2]={'*'};
		hash[3]={'<'};
		attendence='p';
		}
	}
	else if(employee[0]=1){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=2){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=3){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=4){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=5){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=6){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=7){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=8){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}
	else if(employee[0]=9){
		if(employee[1]=0){}
		else if(employee[1]=1){}
		else if(employee[1]=2){}
		else if(employee[1]=3){}
		else if(employee[1]=4){}
		else if(employee[1]=5){}
		else if(employee[1]=6){}
		else if(employee[1]=7){}
		else if(employee[1]=8){}
		else if(employee[1]=9){}
	}cout<<"Your Attendance has been successfully done.";
	PlaySound(TEXT("attendance.wav"),NULL,SND_SYNC);
	account(hash,attendence);
	return;
}
string LOWER(string input){
	for(int i=0;i<=input.length();i++){
		input[i]=tolower(input[i]);
	}
	return input;
}
void TALK(string input){
	if (input == "hello" || input == "hey" || input == "hi") {
		cout << "FinVirz Bot: Hello! How can I assist you ?\n";
		PlaySound(TEXT("hi.wav"),NULL,SND_ASYNC);
    } else if (input == "help"||input=="help me") {
        cout << "FinVirz Bot: I'm here to help! Please ask your question.\n";
        PlaySound(TEXT("help.wav"),NULL,SND_ASYNC);
    } else if (input == "define finverz" || input == "explain finverz" || input == "what is finverz" ||
               input == "describe finverz" || input == "tell me about finverz" ||
               input == "how does finverz work" || input == "working of finverz" ||
               input == "finverz functionality" || input == "finverz operations" ||
               input == "who created finverz" || input == "finverz creator" || input == "who made finverz" ||
               input == "is finverz secure" || input == "finverz security" || input == "how safe is finverz" ||
               input == "features of finverz" || input == "finverz features" || input == "what can finverz do") {
		cout << "FinVerz Bot: FinVerz is a secure banking system designed for\n"
		"seamless transactions and customer satisfaction.\n"
		"It works by securely managing user accounts, processing transactions,\n"
		"and ensuring financial data safety.\n"
		"FinVerz was developed by a team dedicated to enhancing banking\n"
		"services through innovative technology.\n"
		"It employs advanced encryption and security measures to protect\n"
		"user data and offers secure transactions, easy account management,\n"
		"and real-time support.\n";
		PlaySound(TEXT("whatisfinverz.wav"),NULL,SND_ASYNC);
    } else if ( input == "login" || input == "how do i log in" || input == "login help" || input == "can't log in" ||
				input == "unable to log in" || input == "login problem" || input == "how to access my account") {
		cout << "FinVerz Bot: Imagine you want to access your FinVerz\n"
		"account. Here’s what you need to do:\n"
		"1: Enter your Username: This identifies your account.\n"
		"2: Enter your Password: This ensures only you can access\n"
		"your account. Once both are correctly provided, you're\n"
		"successfully logged in!\n";
		PlaySound(TEXT("loginguide.wav"),NULL,SND_ASYNC);
		cout << "FinVerz Bot: Redirecting you to the login page...\n";
        PlaySound(TEXT("login.wav"),NULL,SND_ASYNC); 
    }
    else if (input == "signup"||input == "how do i sign up" || input == "signup help" || input == "create account" ||
               input == "register account" || input == "how to create an account") {
        cout << "FinVerz Bot: Imagine you want to sign up for your\n"
                "FinVerz account. Here is what you need to do.\n"
                "1st: Create a Username: This will be your unique\n"
                "identifier for your account.\n2nd: Create a Password:\n"
                "This ensures only you can securely access your account.\n"
                "Once both are correctly provided, your FinVerz account\n"
                "will be successfully created!\n";

        PlaySound(TEXT("signupguide.wav"),NULL,SND_ASYNC);
        cout << "FinVerz Bot: Redirecting you to the signup page...\n";
        PlaySound(TEXT("signup.wav"),NULL,SND_ASYNC);
    } else if (input == "what is a hash code" ||input == "what is a hashcode" ||
			input == "hashcode" ||input == "hash code" || input == "how does the hash code work" || 
        	input == "why use symbols for the hash code" || input == "can i choose any symbols for my hash code" ||
        	input == "how are the symbols turned into digits" || input == "what happens if i enter the wrong hash code" ||
        	input == "is my hash code safe from hackers" || input == "can i change my hash code" || 
        	input == "why do i need a hash code if i already have a password" || input == "how do i reset my hash code" ||
        	input == "what should i do if i forget my hash code" || input == "can someone guess my hash code by knowing the symbols i use" || 
        	input == "why do i need a 4-symbol hash code" || input == "how does the hash code increase my account security") {
        
        cout << "FinVerz Bot: A hash code is a 4-digit code used to\n"
        "access your account securely. It is created using a\n"
        "combination of special symbols such as !, #, %, etc.,\n"
        "which are then converted into digits for added security.\n"
        "The hash code works by converting a 4-symbol combination\n"
        "(e.g., !#^%) into a unique 4-digit code. This numeric\n"
        "code is used for secure access to your account. Using\n"
        "symbols like !, #, %, etc., adds an extra layer of\n"
        "security, making it harder for unauthorized people to\n"
        "guess the code compared to a regular number or letter.\n"
        "You can only use specific symbols like !, #, %, &, <,\n"
        "> , ~, etc., for creating your hash code. Other symbols\n"
        "may not be valid. Each symbol has a predefined numeric\n"
        "value, and the combination of symbols you choose is\n"
        "mapped to a unique 4-digit code based on these values.\n"
        "If you enter the wrong hash code, you'll be denied\n"
        "access to your account. Please try again with the\n"
        "correct code. Your hash code is secure because the use\n"
        "of symbols and unique numeric mappings makes it very\n"
        "difficult for hackers to guess or replicate. Yes, you\n"
        "can change your hash code at any time from your account\n"
        "settings for added security. The hash code adds an\n"
        "extra layer of protection, ensuring that your account is\n"
        "secure even if someone knows your password. You can\n"
        "reset your hash code through your account settings by\n"
        "verifying your identity. If you forget your hash code,\n"
        "you can reset it from your account settings after\n"
        "confirming your identity. No, because the symbols are\n"
        "converted into a unique 4-digit code. Even if someone\n"
        "knows the symbols, they won't be able to guess the\n"
        "exact numeric code. The 4-symbol hash code strikes a\n"
        "balance between being secure and easy to remember. It is\n"
        "long enough to be secure but short enough for you to\n"
        "recall. The hash code provides an additional layer of\n"
        "security, making it difficult for unauthorized users to\n"
        "access your account even if they know your password.\n";
        PlaySound(TEXT("hashcode.wav"),NULL,SND_ASYNC);
    } 
    else if (input == "what is a transaction receipt" ||input == "transaction receipt" ||
    		input == "transaction recepit" ||input == "transaction recept" ||
			input == "what is a transaction receipt" || input == "explain transaction receipt" || 
        	input == "what does a transaction receipt contain" || input == "describe transaction receipt" || 
        	input == "tell me about transaction receipt" || input == "what is a hash code in receipt" || 
        	input == "explain hash code in receipt" || input == "what does hash code mean in receipt" || 
        	input == "what is amount in receipt" || input == "explain amount in receipt" || 
        	input == "what does amount mean in receipt" || input == "what is fee in receipt" || 
        	input == "explain fee in receipt" || input == "what does fee mean in receipt" || 
        	input == "what is balance after transaction" || input == "explain balance after transaction" || 
        	input == "what does balance after transaction mean" || input == "what is status in receipt" || 
        	input == "explain status in receipt" || input == "what does status mean in receipt" || 
        	input == "what is type in receipt" || input == "explain type in receipt" || 
        	input == "what does type mean in receipt"){
        	cout << "FinVerz Bot: A transaction receipt is an official record\n"
        "that confirms a financial transaction, whether it’s a\n"
        "deposit or withdrawal, in your FinVerz account. It includes\n"
        "important details for transparency and verification.\n"
        "1. Hash Code: A unique 4-symbol code converted into\n"
        "a secure 4-digit numeric code used for transaction\n"
        "authentication and added security.\n"
        "2. Amount: The total amount involved in the transaction,\n"
        "clearly stated for reference.\n"
        "3. Fee: Any transaction charges or service fees deducted\n"
        "during the process.\n"
        "4. Balance After Transaction: The updated account balance\n"
        "after the transaction is successfully processed.\n"
        "5. Status: Indicates whether the transaction was\n"
        "successful, pending, or failed.\n"
        "6. Type: Specifies whether the transaction was a deposit\n"
        "or withdrawal.\n"
        "This receipt ensures transparency, helps track your\n"
        "transactions, and serves as proof in case of any\n"
        "discrepancy.\n";
        PlaySound(TEXT("trecipt.wav"),NULL,SND_ASYNC);
		}
		else if(input == "what is a criminal record" || input == "explain criminal record" || 
		    input == "define criminal record" || input == "what does a criminal record include" || 
		    input == "what information is in a criminal record" || input == "how is a criminal record searched" || 
		    input == "is cnic used for criminal record search" || input == "can cnic check criminal record" || 
		    input == "why are criminal records important" ||input == "criminal record" ||
			input == "purpose of criminal record") {
    
    	cout << "FinVerz Bot: A criminal record is an official document that\n"
		"contains a person's history of criminal activity, including\n"
		"arrests, charges, and convictions. It serves as proof of\n"
		"any involvement in illegal activities and is maintained by\n"
		"law enforcement agencies. The record typically includes\n"
		"personal details such as full name, date of birth, and\n"
		"identification number, along with specific details of\n"
		"offenses committed. In many cases, a criminal record is\n"
		"searched using a unique identifier, such as a CNIC (Computerized\n"
		"National Identity Card) number. This ensures accuracy in\n"
		"retrieving the correct individual's record and prevents\n"
		"identity mix-ups. Criminal records are often checked for\n"
		"employment screening, legal investigations, or other\n"
		"verification purposes to ensure transparency and security.\n";
		PlaySound(TEXT("crecord.wav"),NULL,SND_ASYNC);
}
	else {
		cout << "FinVirz Bot: Sorry, I didn't understand that. Please try again.\n";
		PlaySound(TEXT("sorry.wav"),NULL,SND_ASYNC);
    }
}
int BOT(){
	string userinput;
	cin.ignore();
	cout<<">----------------------------------------<>Welcome to FinVerz Chatbot!<>----------------------------------------<\nFinVerz Bot: Greetings User\n";
	PlaySound(TEXT("greet.wav"),NULL,SND_ASYNC);
	while(true){
		cout<<"                                                                        You : ";
		getline(cin,userinput);
		userinput=LOWER(userinput);
		if(userinput=="exit"||userinput=="bye"||userinput=="goodbye"||userinput=="see you"||userinput=="bye bye"){
			cout<<"FinVerz Bot: GoodBye! Have a nice day.\n";
			PlaySound(TEXT("bye.wav"),NULL,SND_ASYNC);
			break;
		} else{
		TALK(userinput);
	}
	}
	return 0;
}
void Currency(){
	double amount, rate;
	string from, to;
	cout<<"Available Currencies: USD, PKR, EUR, GBP, JPY, CNY, AUD, CAD, AED, INR\n";
	PlaySound(TEXT("currency.wav"),NULL,SND_SYNC);
	PlaySound(TEXT("note.wav"),NULL,SND_SYNC);
	cout<<"Entered currency (e.g., USD): ";
	PlaySound(TEXT("from.wav"),NULL,SND_ASYNC);
	cin>>from;
	cout<<"Exchanged currency (e.g., PKR): ";
	PlaySound(TEXT("to.wav"),NULL,SND_ASYNC);
	cin>>to;
	cout<<"Enter amount: ";
	PlaySound(TEXT("amount.wav"),NULL,SND_ASYNC);
	cin>>amount;
	// Rates
	if (from == "USD" && to == "PKR") rate = 277.5;
	else if (from == "PKR" && to == "USD") rate = 0.0036;
	else if (from == "USD" && to == "EUR") rate = 0.92;
	else if (from == "EUR" && to == "USD") rate = 1.09;
	else if (from == "USD" && to == "GBP") rate = 0.76;
	else if (from == "GBP" && to == "USD") rate = 1.31;
	else if (from == "USD" && to == "JPY") rate = 145.0;
	else if (from == "JPY" && to == "USD") rate = 0.0069;
	else if (from == "USD" && to == "CNY") rate = 7.2;
	else if (from == "CNY" && to == "USD") rate = 0.14;
	else if (from == "USD" && to == "AUD") rate = 1.5;
	else if (from == "AUD" && to == "USD") rate = 0.67;
	else if (from == "USD" && to == "CAD") rate = 1.3;
	else if (from == "CAD" && to == "USD") rate = 0.77;
	else if (from == "USD" && to == "AED") rate = 3.67;
	else if (from == "AED" && to == "USD") rate = 0.27;
	else if (from == "USD" && to == "INR") rate = 83.0;
	else if (from == "INR" && to == "USD") rate = 0.012;
	else if (from == "PKR" && to == "EUR") rate = 0.0033;
	else if (from == "EUR" && to == "PKR") rate = 301.0;
	else if (from == "PKR" && to == "GBP") rate = 0.0028;
	else if (from == "GBP" && to == "PKR") rate = 355.0;
	else if (from == "PKR" && to == "JPY") rate = 0.53;
	else if (from == "JPY" && to == "PKR") rate = 1.9;
	else if (from == "PKR" && to == "CNY") rate = 0.026;
	else if (from == "CNY" && to == "PKR") rate = 38.0;
	else if (from == "PKR" && to == "AUD") rate = 0.006;
	else if (from == "AUD" && to == "PKR") rate = 162.0;
	else if (from == "PKR" && to == "CAD") rate = 0.005;
	else if (from == "CAD" && to == "PKR") rate = 186.0;
	else if (from == "PKR" && to == "AED") rate = 0.013;
	else if (from == "AED" && to == "PKR") rate = 77.0;
	else if (from == "PKR" && to == "INR") rate = 0.30;
	else if (from == "INR" && to == "PKR") rate = 3.33;
	else {
	cout<<"Invalid currency pair! Please check the codes.\n";
	PlaySound(TEXT("incorrect.wav"),NULL,SND_SYNC);
	return;
    }
    cout<<amount<<" "<<from<<" = "<<amount*rate<<" "<<to<<endl;
	PlaySound(TEXT("exchanged.wav"),NULL,SND_SYNC);
}
int main()
{
	long long int cnic;
	char attendence='a';
	int option;
	cout << "*********************************************************************************************************************************" <<endl;
	cout << "*                                                                                                                               *" <<endl;
	cout << "*  ######## ######  ##    ##  ##       ##  ########  #######      ########      #######     #######     ##    ##    ##     ##   *" <<endl;
	cout << "*  ##         ##    ###   ##  ##       ##  ##        ##     ##         ##       ##    ##   ##     ##    ###   ##    ##    ##    *" <<endl;
	cout << "*  ##         ##    ####  ##  ##       ##  ##        ##     ##        ##        ##   ##    ##     ##    ####  ##    ##   ##     *" <<endl;
	cout << "*  ######     ##    ## ## ##   ##     ##   ######    #######         ##     ==  ######     #########    ## ## ##    ######      *" <<endl;
	cout << "*  ##         ##    ##  ####    ##   ##    ##        ##   ##        ##          ##    ##   ##     ##    ##  ####    ##   ##     *" <<endl;
	cout << "*  ##         ##    ##   ###     ## ##     ##        ##    ##      ##           ##    ##   ##     ##    ##   ###    ##    ##    *" <<endl;
	cout << "*  ##       ######  ##    ##      ##       ########  ##     ##    #########     #######    ##     ##    ##    ##    ##     ##   *" <<endl;
	cout << "*                                                                                                                               *" <<endl;
	cout << "*********************************************************************************************************************************" <<endl;
	PlaySound(TEXT("finverz.wav"),NULL,SND_SYNC);
		system("cls");
		cout<<"WELCOME TO FINVERZ"<<endl;
		cout<<"Please Select your choice : "<<endl;
		cout<<"1. WithDraw Or Deposit amount."<<endl;
		cout<<"2. ADD Account."<<endl;
		cout<<"3. Employee Attendence."<<endl;
		cout<<"4. ADD Employee."<<endl;
		cout<<"5. ChatBot for Any Information."<<endl;
		cout<<"6. Exchange Currency."<<endl;
		PlaySound(TEXT("welcome.wav"),NULL,SND_ASYNC);
		cin>>option;
			switch(option){
			case 1:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				char c[4];
				cout<<"Enter Hash code : ";
				PlaySound(TEXT("hash.wav"),NULL,SND_SYNC);
				for(int i=0; i<4; i++){	
				cin>>c[i];
				}
				account(c,attendence);
				system("cls");
			break;
			case 2:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				cout<<"Enter your CNIC : ";
				PlaySound(TEXT("cnic.wav"),NULL,SND_SYNC);
				cin>>cnic;
				addacount(cnic);
				system("cls");
			break;
			case 3:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				char d[2];
				cout<<"Enter your Employee code : ";
				PlaySound(TEXT("employee.wav"),NULL,SND_SYNC);		
				for(int i=0; i<2; i++){	
				cin>>d[i];
				}
				salary(d);
				system("cls");
			break;
			case 4:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				cout<<"Enter your CNIC : ";
				PlaySound(TEXT("cnic.wav"),NULL,SND_SYNC);
				cin>>cnic;
				addemployee(cnic);
				system("cls");
			break;
			case 5:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				system("cls");
				BOT();
			break;
			case 6:
				PlaySound(TEXT("letsgo.wav"),NULL,SND_SYNC);
				system("cls");
				Currency();
			break;
			default:
				cout<<"Wrong choice!!";
				PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
				system("cls");
	}
	PlaySound(TEXT("exit.wav"),NULL,SND_SYNC);
	main();
	return 0;
}
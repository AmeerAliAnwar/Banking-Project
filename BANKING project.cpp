//#include<iostream>
//#include<windows.h>
//#include <string>
//#include <fstream>
//using namespace std;
//void report(long long int cnic,string name,string crime,string status)
//{
//	cout<<"						POLICE REPORT. "<<endl<<endl;
//	cout<<"				Criminal Name : "<<name<<endl;
//	cout<<"				Criminal CNIC : "<<cnic<<endl;
//	cout<<"				Criminal Crime : "<<crime<<endl;
//	cout<<"				Criminal Status : "<<status<<endl;
//}
//void criminal(long long int a,char* check)
//{
//	string name,crime,status;
//	if (a==3520212345671){
//		name="Ali Ahmed";
//		crime="Murder Attempt";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520223456782){
//		name="Sara Khan";
//		crime="Fraud";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520234567891){
//		name="Hassan Shah";
//		crime="Money Laundering";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520245678902){
//		name="Ayesha Malik";
//		crime="Corruption";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520256789011){
//		name="Bilal Tariq";
//		crime="Murder";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520267890122){
//		name="Fatima Raza";
//		crime="Robbery";	
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520278901232){
//		name="Zainab Ali";
//		crime="Illegal Weapons";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520289012341){
//		name="Omar Iqbal";
//		crime="Organ Saling";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520290123451){
//		name="Khurram Siddiqui";
//		crime="Cyber crime / Hacking";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520201234561){
//		name="Asad Mustafa";
//		crime="Drugs Business";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520223456782){
//		name="Madiha Khan";
//		crime="Money Laundering";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520234567892){
//		name="Samina Javed";
//		crime="Fraud";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520245678901){
//		name="Imran Farooq";
//		crime="Corruption";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520256789012){
//		name="Shazia Qureshi";
//		crime="Corruption";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520267890121){
//		name="Fahad Mehmood";
//		crime="Kidnapping";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520278901231){
//		name="Muneeb Rehman";
//		crime="Kidnapping";
//		status="Captured";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520289012342){
//		name="Nida Khan";
//		crime="Robbery";
//		status="Escaped / Jail Broken";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520290123451){
//		name="Junaid Butt";
//		crime="Murder";
//		status="Escaped / Jail Broken";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520201234562){
//		name="Rubina Naz";
//		crime="Robbery";
//		status="Escaped / Jail Broken";
//		report(a,name,crime,status);
//		*check='y';
//	}
//	else if (a==3520223456781){
//		name="Tariq Ali";
//		crime="Murder";
//		status="Escaped / Jail Broken";
//		report(a,name,crime,status);
//		*check='y';
//	}
//}
//void addacount(long long cnic)
//{
//	char check='n';
//	ofstream outfile("database.txt");
//	if (!outfile) {
//		cout << "Error: Could not open the file for writing." << endl;
//		return;
//	}
//	string name;
//	int pina,pinb;
//	criminal(cnic,&check);
//	if(check=='n'){
//		cout<<"No Criminal Record Found!"<<endl;
//		cin.ignore();
//		cout<<"Enter your name :";
//		getline(cin,name);
//		cout<<"Enter your  pin :";
//		cin>>pina;
//		cout<<"Confirm Your PIN : ";
//		cin>>pinb;
//		if(pinb==pina){
//			cout<<"Proceeding to Account........ "<<endl;
//			outfile << "CNIC: " << cnic << endl;
//			outfile << "Name: " << name << endl;
//			outfile << "PIN: " << pinb << endl;
//			outfile << "-------------------------" << endl;
//			cout<<"Congratulations! Your account is Created Successfully!"<<endl;
//			cout<<"Your Account will be Active in 24 Hours!";
//		}
//	}
//	outfile.close();
//}
////                                11163,2934,310,7077,12292,6816
//void bill(long long int cnic,char hash[4],int amount,int loseorgainamount,string name)
//{
//	cout<<"************************************************************"<<endl;
//	cout<<"    			        BANK RECEIPT"<<endl;
//	cout<<"  		       BANK NAME : FinVertz"<<endl;
//	cout<<" YOUR HASHCODE : "<<hash<<"YOUR NAME : "<<name<<endl;
//	cout<<"  	    	YOUR CNIC : "<<cnic<<endl;
//	cout<<"************************************************************"<<endl;
//	cout<<"  	    	  CASH Before : "<<amount<<endl;
//	cout<<"  	    	  CASH After : "<<loseorgainamount<<endl;
//	cout<<"       	    	  THANK YOU !!";
//}
//void confirm(int *amountptr)
//{
//	int confirm;
//	cout<<"Enter Withdrawal Amount : ";
//	cin>>*amountptr;
//	cout<<"Confirm Withdrawal Amount : "<<*amountptr<<endl;
//	cout<<"Do you want to change the amount : \nPRESS 0 / 1 : ";
//	cin>>confirm;
//	while(confirm==1){
//		cout<<"Re-Enter the Withdrawal Amount : ";
//		cin>>*amountptr;
//		cout<<"Do you want to change the amount : \nPRESS 0 / 1 : ";
//		cin>>confirm;
//	}
//	
//}
//void atm(int pin,int a,long long int cnic,char hash[4],string name)
//{
//	int withdraw,pinin,cash=0;
//	int amount=a;
//	cout<<"Enter Your PIN : ";
//	while(cash==0){
//	cin>>pinin;
//	if(pinin==pin){
//	cout<<"Your Total BANK Balance : "<<amount<<endl;
//	confirm(&withdraw);
//	amount-=withdraw;
//		if(amount!=a){
//		cash=1;
//		cout<<"Cash out : "<<cash<<endl;
//		cout<<"Your BANK BALANCE After Withdrawal :"<<amount<<endl;
//		}
//	}
//	else{cout<<"WRONG PIN!"<<endl;
//	cout<<"AGAIN Enter Your pin : ";
//	}
//}
//	bill(cnic,hash,amount,withdraw,name);
//}
//void atmdeposit(int pin,int a,long long int cnic,char hash[4],string name)
//{
//	int deposit,pinin,cash=0;
//	int amount=a;
//	cout<<"Enter Your PIN : ";
//	while(cash==0){
//	cin>>pinin;
//	if(pinin==pin){
//	cout<<"Your Total BANK Balance : "<<amount<<endl;
//	confirm(&deposit);
//	amount+=deposit;
//		if(amount!=a){
//		cash=1;
//		cout<<"Your BANK BALANCE After Deposition :"<<amount<<endl;
//		}
//	}
//	else{cout<<"WRONG PIN!"<<endl;
//	cout<<"AGAIN Enter Your pin : ";
//	}
//}
//	bill(cnic,hash,amount,deposit,name);
//}
//void addemployee(long long cnic)
//{
//	char check='n';
//	ofstream outfile("employeedatabase.txt");
//	if (!outfile) {
//		cout << "Error: Could not open the file for writing." << endl;
//		return;
//	}
//	string name,study,institute,work;
//	criminal(cnic,&check);
//	if(check=='n'){
//		cout<<"No Criminal Record Found!"<<endl;
//		cin.ignore();
//		cout<<"Enter your name :";
//		getline(cin,name);
//		cout<<"Enter your Qualification :";
//		getline(cin,study);
//		cout<<"Enter your Institute Name :";
//		getline(cin,institute);
//		cout<<"Enter your Speciality :";
//		getline(cin,work);
//			cout<<"Proceeding ........ "<<endl;
//			outfile << "CNIC: " << cnic << endl;
//			outfile << "Name: " << name << endl;
//			outfile << "Qualification: " << study << endl;
//			outfile << "Speciality: " << work << endl;
//			outfile << "-------------------------" << endl;
//			cout<<"Congratulations! You are Added Successfully!"<<endl;
//			cout<<"Your Account will be Active in 24 Hours!";
//	}
//	outfile.close();
//}
//
//void salary(int grade,int amount,long long int cnic,char hash[4],string name)
//{
//	int salaryamount;
//	if (grade<=17){salaryamount=5000;
//	}
//	else if (grade>17){salaryamount=7000;
//	}
//	amount+=salaryamount;
//	cout<<"Your Total BANK Balance after today's Payment : "<<amount<<endl;
//	bill(cnic,hash,amount,salaryamount,name);
//}
//void account(char c[4],char attendence)
//{
//	string name;
//	int a[4];
//	int am,pin,grade,option;
//	long long int cnic;
//	for(int i=0; i<4; i++)
//	{
//
//			 if(c[i]=='*')		{a[i]=9;}
//		else if (c[i]=='&')		{a[i]=8;}
//		else if (c[i]=='^')		{a[i]=7;}
//		else if (c[i]=='$')		{a[i]=6;}
//		else if (c[i]=='#')		{a[i]=5;}
//		else if (c[i]=='@')		{a[i]=4;}
//		else if (c[i]=='!')		{a[i]=3;}
//		else if (c[i]=='~')		{a[i]=2;}
//		else if (c[i]=='>')		{a[i]=1;}
//		else if (c[i]=='<')		{a[i]=0;}
//	}
//	
//	if (a[0]==0){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){
//					cnic=3520211111112;
//					am=34000;
//					name="Faiza Shahid.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//				}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//									//END OF 1==0
//	else if (a[0]==1){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==1
//	else if (a[0]==2){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){
//					cnic=3520222222222;
//					am=38000;
//					pin=2921;
//					name="Absar Fatima.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//				}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==2
//	else if (a[0]==3){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==3
//	else if (a[0]==4){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==4
//	else if (a[0]==5){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){
//					cnic=3520251601571;
//					am=90000;
//					pin=5465;
//					name="Ameer Ali.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//					}
//				}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){
//					cnic=3520233333334;
//					am=50000;
//					pin=2915;
//					name="Sajida Arshad.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//					}
//				}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==5
//	else if (a[0]==6){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==6
//	else if (a[0]==7){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==7
//	else if (a[0]==8){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==9
//	}	
//										//END OF 1==8
//	else if (a[0]==9){
//		if (a[1]==0){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){
//					cnic=3520255555552;
//					am=34000;
//					pin=2939;
//					name="Zehrosh Javed.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//					}
//				}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==0
//		else if (a[1]==1){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
////							end of 2==1
//		else if (a[1]==2){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==2
//		else if (a[1]==3){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==3
//		else if (a[1]==4){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==4
//		else if (a[1]==5){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==5
//		else if (a[1]==6){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==6
//		else if (a[1]==7){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==7
//		else if (a[1]==8){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){
//					cnic=3520277777771;
//					am=64000;
//					pin=2818;
//					name="Farhan Muhammad Khan.";
//					cout<<"HELLO! "<<name<<endl;
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//					}
//				}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//		}
//									//END OF 2==8
//		else if (a[1]==9){
//			if (a[2]==0){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==1){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==2){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==3){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==4){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==5){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==6){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==7){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==8){
//				if (a[3]==0){}
//				else if (a[3]==1){}
//				else if (a[3]==2){}
//				else if (a[3]==3){}
//				else if (a[3]==4){}
//				else if (a[3]==5){}
//				else if (a[3]==6){}	
//				else if (a[3]==7){}
//				else if (a[3]==8){}
//				else if (a[3]==9){}
//			}
//			else if (a[2]==9){
//				if (a[3]==0){
//					cnic=3520251601562;
//					am=64000;
//					pin=2828;
//					name="Ahmed Khan.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==1){
//					cnic=3520251601563;
//					am=6000;
//					pin=2838;
//					name="Fatima Malik.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==2){
//					cnic=3520251601564;
//					am=65600;
//					pin=2848;
//					name="Adeel Shah.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==3){
//					cnic=3520251601565;
//					am=63200;
//					pin=2858;
//					name="Sara Ali.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==4){
//					cnic=3520251601566;
//					am=600;
//					pin=2868;
//					name="Hassan Raza.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==5){
//					cnic=3520251601567;
//					am=20000;
//					pin=2878;
//					name="Zainab Bibi.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==6){
//					cnic=3520251601568;
//					am=63000;
//					pin=2888;
//					name="Bilal Iqbal.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}	
//			}
//				else if (a[3]==7){
//					cnic=3520251601569;
//					am=95600;
//					pin=2898;
//					name="Kiran Nasir.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==8){
//					cnic=3520251601560;
//					am=52100;
//					pin=2819;
//					name="Sajid Tariq.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:	
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:	
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}
//			}
//				else if (a[3]==9){
//					grade=16;
//					cnic=3520251601561;
//					am=78000;
//					pin=2817;
//					name="Muneeb Aslam.";
//					cout<<"HELLO! "<<name<<endl;
//					if(attendence=='p'){
//					salary(grade,am,cnic,c,name);
//					return;
//					}
//					cout<<"PRESS an Option : "<<endl;
//					cout<<"1. To an Withdraw Amount "<<endl;
//					cout<<"2. To an Deposit Amount "<<endl;
//					cin>>option;
//					switch (option){
//					case 1:
//						atm(pin,am,cnic,c,name);
//					break;
//					case 2:
//						atmdeposit(pin,am,cnic,c,name);
//					break;
//					default:
//						return;
//				}		
//				}
//			}
//		}
//									//END OF 2==9
//	}
//	else{cout<<"WRONG HASH Code !! "<<endl;
//	}
//										//END OF 1==9
//}
//void salary(int employee[2])
//{
//	char attendence='a';
//	if(employee[0]=0){
//		if(employee[1]=0){
//		char hash[4]={'*','*','*','*'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=1){
//		char hash[4]={'*','*','*','&'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=2){
//		char hash[4]={'*','*','*','^'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=3){
//		char hash[4]={'*','*','*','$'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=4){
//		attendence='p';
//		char hash[4]={'*','*','*','#'};
//		account(hash,attendence);
//		}
//		else if(employee[1]=5){
//		attendence='p';
//		char hash[4]={'*','*','*','@'};
//		account(hash,attendence);
//		}
//		else if(employee[1]=6){
//		char hash[4]={'*','*','*','!'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=7){
//		char hash[4]={'*','*','*','~'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=8){
//		char hash[4]={'*','*','*','>'};
//		attendence='p';
//		account(hash,attendence);
//		}
//		else if(employee[1]=9){
//		char hash[4]={'*','*','*','<'};
//		attendence='p';
//		account(hash,attendence);
//		}
//	}
//	if(employee[0]=1){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=2){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=3){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=4){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=5){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=6){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=7){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=8){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//	if(employee[0]=9){
//		if(employee[1]=0){}
//		else if(employee[1]=1){}
//		else if(employee[1]=2){}
//		else if(employee[1]=3){}
//		else if(employee[1]=4){}
//		else if(employee[1]=5){}
//		else if(employee[1]=6){}
//		else if(employee[1]=7){}
//		else if(employee[1]=8){}
//		else if(employee[1]=9){}
//	}
//}
//int main()
//{
//	long long int cnic;
//	char attendence='a';
//	int option;
//	cout<<"WELCOME TO FINVERTZ"<<endl;
//	cout<<"press 1 2 3 4"<<endl;
//	cin>>option;
//	switch(option){
//	case 1:
//		char c[4];
//		cout<<"Enter FOUR Digit Hash code : ";		
//		for(int i=0; i<4; i++){	
//		cin>>c[i];
//		}
//		account(c,attendence);
////	system("cls");
//	break;
//	case 2:
//		cout<<"Enter your CNIC : ";
//		cin>>cnic;
//		addacount(cnic);
//	break;
//	case 3:
//		int d[2];
//		cout<<"Enter Two Digit Employee code : ";		
//		for(int i=0; i<2; i++){	
//		cin>>d[i];
//		}
//		salary(d);
//	break;
//	case 4:
//		cout<<"Enter your CNIC : ";
//		cin>>cnic;
//		addemployee(cnic);
//	break;
//	case 5:
//		BOT();
//		return 0;
//}
//}

#include<iostream>
#include<cctype>
#include<windows.h>
#include<stdio.h>
using namespace std;


string LOWER(string input){
	for(int i=0;i<=input.length();i++){
		input[i]=tolower(input[i]);
	}
	return input;
}
void TALK(string input){
	if (input == "hello" || input == "hey" || input == "hi") {
		cout << "FinVirz Bot: Hello! How can I assist you today?\n";
		PlaySound(TEXT("hello.wav"),NULL,SND_SYNC);
    } else if (input == "help"||input=="help me") {
        cout << "FinVirz Bot: I'm here to help! Please ask your question.\n";
        PlaySound(TEXT("help.wav"),NULL,SND_SYNC);
    } else if (input == "define finverz" || input == "explain finverz" || input == "what is finverz" ||
               input == "describe finverz" || input == "tell me about finverz" ||
               input == "how does finverz work" || input == "working of finverz" ||
               input == "finverz functionality" || input == "finverz operations" ||
               input == "who created finverz" || input == "finverz creator" || input == "who made finverz" ||
               input == "is finverz secure" || input == "finverz security" || input == "how safe is finverz" ||
               input == "features of finverz" || input == "finverz features" || input == "what can finverz do") {
		cout << "FinVerz Bot: FinVerz is a secure banking system designed for seamless transactions and customer satisfaction.\n"
				"It works by securely managing user accounts, processing transactions, and ensuring financial data safety.\n"
				"FinVerz was developed by a team dedicated to enhancing banking services through innovative technology.\n"
                "It employs advanced encryption and security measures to protect user data and offers secure transactions,\neasy account management, and real-time support.\n";
				PlaySound(TEXT("whatisfinverz.wav"),NULL,SND_SYNC);
    }else if (input == "login" || input == "how do i log in" || input == "login help" || input == "can't log in" ||
               input == "unable to log in" || input == "login problem" || input == "how to access my account") {
        cout << " FinVerz Bot: Imagine you want to access your FinVerz account. Here’s what you need to do:\n 1:Enter your Username : This identifies your account.\n 2:Enter your Password: This ensures only you can access your account.Once both are correctly provided,\n you're successfully logged in!\n",
		PlaySound(TEXT("loginguide.wav"),NULL,SND_SYNC);
		cout << "FinVerz Bot: Redirecting you to the login page...\n";
        PlaySound(TEXT("login.wav"),NULL,SND_SYNC); 
    }
    else if (input == "signup"||input == "how do i sign up" || input == "signup help" || input == "create account" ||
               input == "register account" || input == "how to create an account") {
        cout << "FinVerz Bot: Imagine you want to sign up for your FinVerz account. Here’s what you need to do.\n 1st: Create a Username: This will be your unique identifier for your account.\n 2nd: Create a Password: This ensures only you can securely access your account.\n Once both are correctly provided,\n your FinVerz account will be successfully created!\n";
        PlaySound(TEXT("signupguide.wav"),NULL,SND_SYNC);
        cout << "FinVerz Bot: Redirecting you to the signup page...\n";
        PlaySound(TEXT("signup.wav"),NULL,SND_SYNC);
    } 
	else {
		cout << "FinVirz Bot: Sorry, I didn't understand that. Please try again.\n";
		PlaySound(TEXT("sorry.wav"),NULL,SND_SYNC);
    }
}

int BOT(){
	string userinput;
	cout<<">----------------------------------------<>Welcome to FinVerz Chatbot!<>----------------------------------------<\nFinVerz Bot: Greetings User\n";
	PlaySound(TEXT("greet.wav"),NULL,SND_SYNC);
	while(true){
		cout<<"                                                                        You : ";
		getline(cin,userinput);
		userinput=LOWER(userinput);
		if(userinput=="exit"||userinput=="bye"||userinput=="goodbye"||userinput=="see you"||userinput=="bye bye"){
			cout<<"FinVerz Bot: GoodBye! Have a nice day.\n";
			PlaySound(TEXT("bye.wav"),NULL,SND_SYNC);
		}
		TALK(userinput);
	}
	return 0;
}
int main(){
	BOT();
}
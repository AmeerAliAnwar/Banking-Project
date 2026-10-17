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
        PlaySound(TEXT("hi.wav.wav"),NULL,SND_SYNC);
    } else if (input == "help") {
        cout << "FinVirz Bot: I'm here to help! Please ask your question.\n";
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
                "It employs advanced encryption and security measures to protect user data and offers secure transactions, easy account management, and real-time support.\n";
    } else {
        cout << "FinVirz Bot: Sorry, I didn't understand that. Please try again.\n";
    }
}
int main(){
	string userinput;
	cout<<"Welcome to FinVerz Chatbot!\nFinVerz Bot: How may i assist you ?\n";
	while(true){
		cout<<"You : ";
		getline(cin,userinput);
		userinput=LOWER(userinput);
		if(userinput=="exit"||userinput=="bye"||userinput=="goodbye"||userinput=="see you"||userinput=="bye bye"){
			cout<<"FinVerz Bot: GoodBye! Have a nice day.\n";
			break;
		}
		TALK(userinput);
	}
	return 0;
}
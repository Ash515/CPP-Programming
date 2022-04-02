#include<iostream>
using namespace std;

struct details{
	int regno;
	char name[50];
	int pass;
}d;

void home();

void login(int regno,int pass){
	if(d.regno==regno){
		if(d.pass==pass){
			home();
		}
	}
	return;
}

void signup(int regno,int password){
	if(regno && password){
		d.regno=regno;
		d.pass=password;
		login(regno,password);
	}
	
}

void home(){
	cout<<"Your name is:"<<d.regno;
	cout<<"your password is:"<<d.pass;
	
}
int main(){
    double regnum; int passwrd;
	cout<<"Welcome to Result Generation "<<endl;
	cout<<"Enter your Register Number:"<<endl;
	cin>>regnum;
	cout<<"Enter your password:"<<endl;
	cin>>passwrd;
	signup(regnum,passwrd);
	return 0;
	
	
}

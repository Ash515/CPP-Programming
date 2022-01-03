#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string s;
    ifstream fstream("file.txt");
    ofstream filestream1("file1.txt");
    if(fstream.is_open()){
        cout<<"File Opened"<<endl;
        while(getline(fstream,s)){
            if(filestream1.is_open()){
                filestream1<<s;
                

            }
             
        }
    }else{
        cout<<"Not Opened!";
    }

    return 0;
}
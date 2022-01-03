#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream filestream("file.txt");
    if(filestream.is_open()){
   
    filestream<<"Hi Ashwin";
    filestream.close();
    }else{
        cout<<"Not Opened!";
    }
    
    return 0;
}
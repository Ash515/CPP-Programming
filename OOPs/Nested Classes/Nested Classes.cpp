#include<iostream>
using namespace std;

class A{
   
    private:
    int z=70;
    class B{
        public:
        int x;
       
        void setdata(int a){
             x=a;
        }
        void display(){
            cout<<"The Class B X's data is:"<<x<<"\n";
           
        }
    };
    
    public:
    class C{
        public:
       
        int y;
        B Obj2;
     
        void setdatatoy(int b){
            y=b;
           Obj2.setdata(y+100);
        }
        void display2(A Obj3){
            cout<<"The Class C Y's data is:"<<y<<"\n";
            cout<<"A"<<Obj3.z;
        }
    };
};

int main(){
    A Obj3;
    
    A::C obj1;
    obj1.setdatatoy(10);
    obj1.display2(Obj3);
}
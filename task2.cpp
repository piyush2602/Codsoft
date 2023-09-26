//calculator
#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    switch(ch){
        case '+':{
            cout<<"addition:"<<a+b<<endl;
            break;
        }
        case '-':{
            cout<<"subtraction:"<<a-b<<endl;
            break;
        }
        case '*':{
            cout<<"multiplication:"<<a*b<<endl;
            break;
        }
        case '/':{
            cout<<"division:"<<a/b<<endl;
            break;
        }
        default:{
            cout<<"invalid option"<<endl;
        }
    }
}
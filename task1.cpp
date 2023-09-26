//guessing the number
#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter the guess number:"<<endl;
    srand(time(0));
    int r=1+rand()%100;  //assigning random variable
    int n;
    do{
      cin>>n;  //taking input of integer from user
      if(r<n){
        cout<<"Number entered is too high than random number."<<endl;
      }
      else if(r>n){
        cout<<"Number entered is too low than random number."<<endl;
      }
      else{
        cout<<"Number entered is equal to random number."<<endl;
      }
    }
    while(n!=r);
}
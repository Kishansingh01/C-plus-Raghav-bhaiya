#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
char opp;
cout<<"Enter operator :::";
cin>>opp;
if(opp=='+') cout<<x+y;
else if(opp=='-') cout<<x-y;
else if(opp=='*') cout<<x*y;
else if(opp=='/') cout<<x/y;


}
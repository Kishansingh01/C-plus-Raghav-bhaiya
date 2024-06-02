#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number="<<endl;
    cin>>a;
    cout<<"Enter second number="<<endl;
    cin>>b;
    cout<<"Enter third number="<<endl;
    cin>>c;
    if(a<b&&a<c){
        cout<<"a is smaller";
    }
    else if(b<a&&b<c){
        cout<<"b is smaller";
    }
    else(c<a&&c<b);
        cout<<"c is smaller";
    

}

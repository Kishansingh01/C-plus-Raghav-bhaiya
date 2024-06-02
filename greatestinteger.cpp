#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greater";
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<< "is greater";
        }
    }
    else if(c>b){
        if(c>a){
            cout<<c<<" is greater";
        }


}
}

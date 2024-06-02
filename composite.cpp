#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:::";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"THE NUMBER IS COMPOSITE";
            break;

        }
        if(n%i!=0){
             cout<<"THE NUMBER IS NOT COMPOSITE";}
        break;
    }
    //     if(n==1){
    //     cout<<"1 is not composite";
    // }
    
    }

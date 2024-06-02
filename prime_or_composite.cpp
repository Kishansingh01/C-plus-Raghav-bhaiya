#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"The number is not  prime";
        }
    }
    if(n%i!=0){ 
        cout<<"The number is  prime";}
    
}
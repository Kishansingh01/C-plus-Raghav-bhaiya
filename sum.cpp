#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the digits:::";
    cin>>n;
    while(n>0){
        int ld=n%10;
         n/=10;
        sum=sum+ld;
    }
cout<<sum;
}
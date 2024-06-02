// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//     while(n>0){
//         int num=n%10;
//         n=n/10;
//         cout<<n;
//     }  
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    int r;
    int rev;
    cout<<"Enter the value of n :";
    cin>>n;
    while(n>0){
        rev=n%10;
       int r=r*10;
       r=r+rev;
       n=n/10;
    }
    cout<<r;

}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:::";
//     cin>>n;
//     if(n>99&&n<1000) cout<<"The number is a three digit number";
//     else cout<<"The number is not three digit";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:::";
//     cin>>n;
//     if(n%3==0&&n%5==0) cout<<"The number is divisible by 3 and 5 both";
//     else cout<<"The number is not divisible by 3 and 5 both";
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:::";
    cin>>n;
    if(n%3==0||n%5==0) cout<<"The number is divisible either 3 or 5";
    else cout<<"The number is  not divisible either 3 or 5";
}
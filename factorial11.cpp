// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter  the value of n";
//     cin>>n;
//    while(n>0){
// sum=(n*(n+1))/2;
// cout<<sum;
//    }

//     }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the value :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//      cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    int i;
    cout<<"Enter the value :::";
    cin>>n;
   for(int i=1;i>=n;i++){
    fact=n*fact;
   cout<<fact;}    
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the number n :::";
//     cin>>n;
//    for(int i=1;i<=n;i++){
//         sum+=i;
    
//     }
//      cout<<sum;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     int product=1;
//     for(int i=1;i<=n;i++){
//         product=product*i;  
//         //cout<<product;
//     }
//      cout<<product;

// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :::";
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++){
        cout<<"The factorial of "<<product<<" ";
        product=product*i;  
        cout<<product<<endl;
    }
}
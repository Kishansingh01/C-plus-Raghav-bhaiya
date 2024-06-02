// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int count=0;
//     cout<<"Enter the value of a :::";
//     cin>>a;
//     while(a>0){
//         a=a/10;
//         count++;
//         cout<<count;

//     }
 

    

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int count=0;
//     cout<<"Enter the value of n ::: ";
//     cin>>n;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count<<"  ";

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout<<"Enter value of i :::";
//     cin>>i;
//     int muly=1;
//     while(i>0){
//        int ld=i%10;
//        i=i/10;
//        muly=ld*muly;
//     }
//     cout<<muly;

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter value of n";
    cin>>n;
    while(n>0){
        // if(n%2==0){
            int j=n%10;
            n=n/10;
            sum=sum+j;
        }
        cout<<sum;
    }
    

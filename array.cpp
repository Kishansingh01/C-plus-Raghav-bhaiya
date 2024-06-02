// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     arr[0]=6;
//     arr[1]=2;
//     arr[2]=4;
//     arr[3]=9;
//     arr[4]=8;
// //     cout<<arr[0]<<" ";
// //     cout<<arr[1]<<" ";
// //     cout<<arr[2]<<" ";
// //     cout<<arr[3]<<" ";
// //     cout<<arr[4]<<" "; 
// for(int i=0;i<=4;i++){
//     cout<,arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     cout<<"Enter array elements";
//     for(int i=0;i<=5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=5;i++){
//         cout<<arr[i]*4<<" ";
//     }

#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter array elements:::";
    for(int i=0;i<=5;i++){
        cin>>arr[i];
    }
    arr[0]=1000;
    arr[5]=2300;
    cout<<endl;
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
        }}
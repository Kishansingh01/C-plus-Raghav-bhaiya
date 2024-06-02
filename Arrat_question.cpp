// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/4;
//     cout<<"The number greater than 4 is:-";
//     for(int i=0;i<n;i++){
//         if(arr[i]>4){
//             cout<<arr[i];
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]+10<<" ";
//         }
//         else cout<<arr[i]*2<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8};
    int n=sizeof(arr)/4;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            a=a+arr[i];
        }
        else
        b=arr[i]+b;
    }
     cout<<a<<" ";
      cout<<b<<" ";
}


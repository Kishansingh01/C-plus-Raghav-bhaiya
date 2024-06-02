#include<iostream>
using namespace std;
int main(){
       int arr[]={1,2,3,4,5,6,7,8, 34};
       int n=sizeof(arr)/4;
       int sum=0;
       for(int i=0;i<n;i++){
              if(arr[i]%2==0){
                      sum+=arr[i];
                     cout<<sum;
              }
       else if(arr[i]!=2){
       cout<<sum+=arr[i]}
       }
       cout<<sum;
}

// #include<iostream>
// using namespace std;
// int main(){
//        int arr[]={1,2,3,4,5,6};
//        int n=sizeof(arr)/4;
//        int sum=0;
//        for(int i=0;i<n;i++){  
//               sum+=arr[i];    
//        }
//        cout<<sum;
// }
  
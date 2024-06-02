#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,-5,-1,6,16};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=1;i<n;i++){
        // mx=max(mx,arr[i]);
        if(arr[i]>mx)
        mx=arr[i];
   }
     cout<<mx;}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,734,-1};
//     int n=sizeof(arr)/4;
//     int mn=arr[0];
//     for(int i=1;i<n;i++){
//         // if(arr[i]<mn)mn=arr[i];
//     mn=min(mn,arr[i]);}
//     cout<<mn;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<INT32_MIN;
// }


// int a=[-3,-2,-6,-1];
// int max=a[0],count=0;
// for(int i=0;i<4;i++)
// {
//     if(max>a[i+1])
//         max=a[i];
//     else
//     max=a[i+1];
// }
// cout<<max;
 
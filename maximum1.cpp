#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,12,23};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];
}
 int smax=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]!=mx)
    smax=max(smax,arr[i]);

// cout<<smax;
}
    cout<<smax;
    }}
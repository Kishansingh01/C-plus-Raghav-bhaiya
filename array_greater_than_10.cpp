#include<iostream>
using namespace std;
int main(){
    int x;
    int count=0;
    int arr[]={1,2,3,4,50,60,70};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
    if(arr[i]>10)
      x=arr[i];
    //count+=1;
    cout<<x<<endl;
}
 //cout<<count;
}
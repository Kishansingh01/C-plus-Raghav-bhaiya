// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[10],b[10],n,count=0;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         b[i]=a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(b[i]==a[i])
//             count++;
//         }
//     }
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if (b[i]!=b[i+1])
        {
            int count=0;
            for(int j=0;j<n;j++){
                if(b[i]==a[j])
                count++;
                if(count>1){
                    cout<<b[i]<<" ";
                    break;
                }
            }
        }
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     arr[0][0]=4;
//     arr[0][1]=3;
//     arr[0][2]=3;
//     arr[1][0]=43;
//     arr[1][1]=5;
//     arr[1][2]=31;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" "<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2];
//     arr[0][0]=12;
//     arr[0][1]=21;
//     arr[1][0]=23;
//     arr[1][1]=87;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//                 cout<<arr[i][j ]<<" ";
//     }
//     cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][2];
//     arr[0][0]=12;
//     arr[0][1]=13;
//     arr[1][0]=14;
//     arr[1][1]=15;
//     arr[2][0]=16;
//     arr[2][1]=17;
//     // for(int j=0;j<3;j++){
//     //     for(int i=0;i<2;i++){
//     //             cout<<arr[i][j ]<<" ";
//      for(int j=0;j<3;j++){
//        for(int i=0;i<2;i++){
//     cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
  int arr1[10][10],arr2[10][10],n,m;
  cout<<"enter the n and m size of array"<<endl;
  cin>>n>>m;
  cout<<"Enter the elements of array 1"<<endl;    
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    cin>>arr1[i][j];}}
  cout<<"Enter the the sieze of array 2"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr2[i][j]; }}
  cout<<"The Addition of matrix elements are:"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr1[i][j]+arr2[i][j]<<" ";
    }
    cout<<endl;
  }
}
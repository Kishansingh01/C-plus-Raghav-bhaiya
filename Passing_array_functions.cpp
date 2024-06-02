// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3]={1,2,3};
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     arr[2]=500;
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// void change(int arr1[]){
//     arr1[0]=500;
// }
// int main(){
//     int arr1[4]={1,2,3,4};
//     for(int i=0;i<4;i++){
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
//     change(arr1);
//     for(int i=0;i<4;i++){
//         cout<<arr1[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
void change(int arr[]){
    arr[1]=1234;
}
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
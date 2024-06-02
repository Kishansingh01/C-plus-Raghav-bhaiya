// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<=9;i++){
//         cout<<arr[i]*10<<" ";
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    arr[3]=0;
    arr[20]=234;
    for(int i=0;i<=20;i++){
        cout<<arr[i]<<"  ";
    }
}
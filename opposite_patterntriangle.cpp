// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n value :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//         // cout<<(char)(i+64);
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #ude<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){incl
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n+1-i;j++){
//             cout<<(char)(i+64);
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<n+1-j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i+=2){
//         for (int j=1;j<=i;j+=2){
//              cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n :::";
//     cin>>n;
//     for(int i=1;i<=n;i+=2){
//         for (int j=1;j<=i;j+=2){
//              cout<<2*j-1;
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :::";
    cin>>n;
    for(int i=1;i<=n;i+=2){
        int a=1;
        for (int j=1;j<=i;j+=2){
             cout<<a;
             a=a+2;
        }
        cout<<endl;
    }
}
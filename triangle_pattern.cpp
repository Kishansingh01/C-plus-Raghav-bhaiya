// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows :::";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows (n):::";
    cin>>n;
    int m;
    cout<<"Enter the number of columns(m) :::";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<endl<<(char)(j+64);{
                if(i%2!=0){
                    cout<<j;
                }else{
                    cout<<(char)(j+64);
                }

            }
            // cout<<(char)(j+64);
            
        }
        cout<<endl;
    }
}
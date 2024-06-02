// #include<iostream>
// using namespace std;
// int main(){
//    // char arr[6]={'k','i','s','h','a','n'};
//     string x="I am Kishan and i will earn two crore in a month";
//    // for(int i=0;i<6;i++){
//         // cout<<arr[i]<<" ";
//         cout<<x;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     string x="I will be a consistency trader";
//     cout<<x;
// }

#include<iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter string name :";
    //cin>>x;
    getline(cin,x);
    //here we have to take cin and variable.
    cout<<x;
} 
//CIN ONLY UNDERSTAND 1 WORD AT A TIME WHILE getline
//FUNCTION UNDERSTAND WHOLE SENTENCE INCLUDING GAP ALSO. 
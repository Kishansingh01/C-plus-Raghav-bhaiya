#include<iostream>
using namespace std;
int main(){
    string e=" i am a simple student";
     int count=0;
    for(int i=0;i<e.size();i++){
        if(e[i]=='a'||e[i]=='e'||e[i]=='i'||e[i]=='o'||e[i]=='u'){
count++;}
    }
    cout<<count;
}
#include<iostream>
using namespace std;
int main(){
    int Ram,Shyam,Ajay;
    cout<<"Enter Ram age:";
    cin>>Ram;
    cout<<"Enter Shyam age:";
    cin>>Shyam;
    cout<<"Enter Ajay age:";
    cin>>Ajay;
    if(Ram<Shyam && Ram<Ajay){
        cout<<"Ram is Young";
    }
    else if(Shyam<Ajay && Shyam<Ram){
        cout<<"Shyam is Young";
    }
    else{
        cout<<"Ajay is young";}
    
}
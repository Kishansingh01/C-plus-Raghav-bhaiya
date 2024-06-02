#include<iostream>
using namespace std;
int main(){
    int cp;
    int sp;
    cout<<"Enter cp="<<endl;
    cin>>cp;
    cout<<"Enter sp="<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"PROFIT"<<endl;
        cout<<sp-cp;
    }
     else if(cp>sp){
        cout<<"LOSS"<<endl;
        cout<<cp-sp;
    }
    else(sp=cp);
        cout<<"No profit no loss";
    

}
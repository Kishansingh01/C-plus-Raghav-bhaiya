#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"Enter the value of i::";
    cin>>i;
    cout<<"Enter the value of j::";
    cin>>j;
    if(i>0&&j>0){
        cout<<"THe coordinate is in the first quadradant";
    }
    else if(i<0&&j>0){
        cout<<"The coordinate is in the second quadradant";
    }
    else if(i<0&&j<0){
        cout<<"the coordinate is in the third quadradant";
    }
    else if(i>0&&j<0){
        cout<<"The coordinate is in the fourth quadradant";
    }
    else {
        cout<<"The coordinate is in the origin quadradant";
    }
}
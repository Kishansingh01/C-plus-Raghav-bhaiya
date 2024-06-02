#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks :";
    cin>>marks;
    if(marks>100){
        cout<<"Invalid marks";
    }
    else if(marks>80){
        cout<<"Very Good";
    }
    else if(marks>60){
        cout<<"Good";
    }
    else if(marks>40){
        cout<<"Average";
    }
    else if(marks<40){
        cout<<"Fail";
    }
    
}
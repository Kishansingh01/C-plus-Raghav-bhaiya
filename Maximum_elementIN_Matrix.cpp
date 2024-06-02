#include<iostream>
using namespace std;
int main(){
    int a[4][2]={{1,2},{2,3},{5,6},{8,9}};
    int mx=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;

}
// SUM of the __cpp_lib_incomplete_container_elements

// minimum of the __cpp_lib_incomplete_container_elements

// product of the __cpp_lib_incomplete_container_elements

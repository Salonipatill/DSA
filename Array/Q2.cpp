#include<iostream>
using namespace std;

int main(){

    int arr[]={12,23,34,45,56,67,78};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}
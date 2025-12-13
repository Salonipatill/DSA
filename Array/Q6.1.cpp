#include<iostream>
using namespace std;

int main(){
    int arr[]={12,34,23,12,5555};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lastelement=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];   
    }
    arr[0]=lastelement;
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;  
}
#include<iostream>
using namespace std;

int main(){
    int arr[]={12,23,45,23,12,999};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=arr[n-1];

   
  int arr1[100];
    for(int i=0; i<n-1; i++){
      
        arr1[1+i]=arr[i];
    }
    
    arr1[0]=s;
    for(int i=0; i<=n-1; i++){
    cout<<arr1[i]<<" "<<endl;
    }
    return 0;
}
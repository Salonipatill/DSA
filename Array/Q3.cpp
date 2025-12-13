#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,45,67,89,12,234,45647,0};
     int n=sizeof(arr)/sizeof(arr[0]);
     
     int longestelement=arr[0];
    for(int i=0; i<n;i++){
        if(longestelement<arr[i]){
        longestelement=arr[i];
        }  
    }
    cout<<longestelement<<endl;

    

    return 0;
}
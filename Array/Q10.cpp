#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,0,6,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++){
        if(arr[i]!=0){
            continue;
            
        }cout<<arr[i+1];
          
        
    }
    return 0;

}
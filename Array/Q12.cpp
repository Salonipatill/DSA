#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,0,0,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    cout<<"[";

    for(int i=0; i<n; i++){
        if(arr[i]!=0){
           count++;
          cout<<arr[i]<<",";
          
        }
    }
    for(int i=count; i<n; i++){
    
          arr[i]=0;
          cout<<arr[i]<<",";
    }
    cout<<"]";

    

    return 0;
}
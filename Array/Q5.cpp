#include<iostream>
using namespace std;

int main(){

int arr[]={1,23,34,23,123,23,34,1,3,4};

int n=sizeof(arr)/sizeof(arr[0]);

int largestelement=arr[0];

for(int i=0; i<n; i++){

    if(largestelement<arr[i]){
       largestelement=arr[i];
    }
}

int secondlargest=arr[0];

for(int i=0; i<n; i++){
    if(largestelement!=arr[i]&&secondlargest<arr[i]){
        secondlargest=arr[i];
    }
}

cout<<largestelement<<" "<<secondlargest<<endl;


return 0;
}
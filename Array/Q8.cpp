#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout << "Enter a position: ";
    cin >> x;
    int particularelement=arr[x-1];

    for(int i=x-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=particularelement;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
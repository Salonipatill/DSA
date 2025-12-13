#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pr=0;

    for(int i=0; i<n-2;i++){
        for(int j=1; j<n-1; j++){
            for(int k=2;k<n; k++){
            int p=arr[i]*arr[j]*arr[k];
            if(pr<p){
               pr=p;
            }
            
            }
        }
    }
    cout<<pr<<" "<<endl;

return 0;
}
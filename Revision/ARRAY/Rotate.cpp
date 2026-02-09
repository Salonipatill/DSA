#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,45,5,6};
    int n = arr.size();

    int temp = arr[n-1];

    for(int i =n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0] = temp;

cout<<"Array after rotation";

for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

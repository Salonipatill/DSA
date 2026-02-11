#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int>arr, int d){
  
    for(int j = 0; j<d; j++){
    int temp = arr[0];
    for(int i = 0; i<d; i++) {
        arr[i] = arr[i+1];

    } 
    arr[d-1] = temp;
    }

    }
 

int main(){
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int d;
    cout<<"Enter a positionn to rotate  an array:";
    cin>>d;
    rotateArr(arr,d);

    for(int i =0; i<n; i++){
    cout<<arr[i]<<",";
    }
    return 0;
}


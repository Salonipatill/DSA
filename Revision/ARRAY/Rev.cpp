#include<iostream>
#include<vector>
using namespace std;

int main(){

cout<<"Print Reverse Array"<<endl;

int empty;
vector<int>arr = {1,2,3,4,56,7};
int n = arr.size();

for(int i = 0; i<n/2;  i++){
    empty = arr[i];
    arr[i] = arr[n -i - 1];
    arr[n-i-1] = empty;
}

for(int i = 0; i<n; i++){
    cout << arr[i]<<",";
}
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
cout<<"Print Array";
vector<int>arr = {1,2,3,45,};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0; i<=n; i++){
    cout<<"["<<arr[i]<<"],";
}
return 0;
}

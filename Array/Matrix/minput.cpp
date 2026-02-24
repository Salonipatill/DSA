#include<iostream>
using namespace std;

int main(){

    int arr[2][2];

cout<<"Enter matrix elements:"<<endl;

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cin>>arr[i][j];
    }
}

cout<<"[";
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<arr[i][j]<<",";
    }
    if(i<1) cout<<endl;
}
cout<<"]";

    return 0;
}
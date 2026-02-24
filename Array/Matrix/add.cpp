#include<iostream>
using namespace std;

int main(){

int a[2][2] = {{2,2},{3,4}};
int b[2][2] = {{0,1},{8,9}};
int c[2][2];

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        c[i][j] = a[i][j]+b[i][j];
    }
}

cout<<"[";
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<c[i][j]<<",";
    }
    if(i<1) cout<<endl;
}
cout<<"]";

    return 0;
}
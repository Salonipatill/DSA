#include<iostream>
using namespace std;

int main(){

    int a[2][3] ={{1,2,3},{4,5,6}};
cout<<"["<<endl;
    for(int j=0; j<3; j++){
        for(int i=0; i<2; i++){
            cout<<a[i][j]<<",";
        }
        if(j<3) cout<<endl;
    }
cout<<"]";
    return 0;
}
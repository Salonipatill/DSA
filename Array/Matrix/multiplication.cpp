#include<iostream>
using namespace std;

int main(){

    int a[2][2]={{1,2},{1,3}};
    int b[2][2]={{3,3},{4,4}};
    int c[2][2]={0};

    cout<<"[";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<",";
        }
        if (i<1) cout<<endl;
    
    }
        cout<<"]";
  

    return 0;

}
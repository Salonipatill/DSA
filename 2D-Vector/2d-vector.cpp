#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>>arr={

        {1,2,3},
        {4,5,6}
    };

    for(auto row :arr){
        for(int x : row){
            cout<< x << " ";
        }
        cout<<endl;
    }


    return 0;
}
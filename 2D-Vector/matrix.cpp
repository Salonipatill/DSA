#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr;

    for(int i =1; i<=3; i++){

        vector<int>row;

        for(int j = 1; j<=3; j++){
            row.push_back(i*j);
        }

        arr.push_back(row);
    }

    for(auto row : arr){
        for(int x : row){
            cout<< x << " ";
        }
        cout<<endl;
    }
}
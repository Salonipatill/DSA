#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr;

    vector<int>row;

    row.push_back(10);
    row.push_back(20);

    arr.push_back(row);

    row.clear();

    row.push_back(30);
    row.push_back(40);

    arr.push_back(row);


    for(auto r : arr){
        for(int x : r){
            cout<< x << " ";
        }
        cout<<endl;
    }
}
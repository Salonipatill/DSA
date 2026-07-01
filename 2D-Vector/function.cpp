#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>>getData(){
    vector<vector<int>> ans;

    ans.push_back({1,2});
    ans.push_back({3,4});

    return ans;
}


int main(){

    vector<vector<int>> data = getData();

    for(auto row : data){
        for(int x : row){
            cout<< x << " ";
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;

void storeNumbers(int n, vector<int>& ans){
    for(int i = 1; i <= n; i++){
        ans.push_back(i);
    }
}

int main(){
    vector<int>ans;

    storeNumbers(5, ans);

    for(int x : ans)
        cout<< x << " ,";
}
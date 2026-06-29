#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>ans;

    ans.push_back(5);
    ans.push_back(10);
    ans.push_back(15);
    ans.push_back(20);

    for(int x : ans)
        cout<< x <<" ";

       //return 0;
}
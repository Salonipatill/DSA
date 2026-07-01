#include<iostream>
#include<vector>
using namespace std;

void addElement(vector<int> v){
    v.push_back(10);
}


int main(){
    vector<int>nums;

    addElement(nums);

    cout<<nums.size();
    return 0;
}

//answer will be 0
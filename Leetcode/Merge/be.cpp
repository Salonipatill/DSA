#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums = {10,20, 30,40};

    cout<<"Using begin()and end() to print all elements:\n";

    for(auto it = nums.begin(); it!= nums.end(); ++it){
        cout<<*it<<" ";

    }
    cout<<endl;

    cout<<"First element:"<<*nums.begin()<<endl;
    cout<<"Last element:"<<*(nums.end()-1)<<endl;

    return 0;
}
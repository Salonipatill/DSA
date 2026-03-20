#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<int>& v , const string& name){
    cout<<name<<":";
    for(int x : v) cout<<x<<" ";
    cout<<endl;
}

int main(){
    vector<int>merged1 = {5,6};
    vector<int>nums = {1,2,3,4};

    cout<<"====Using insert at END()(append)==="<<endl;
    printVector(merged1, "Before insert");

    merged1.insert(merged1.end(), nums.begin(), nums.end());
    printVector(merged1, "After insert(end)");

    cout<<"\n===Using insert at BEGIN() (front)==="<<endl;
    vector<int>merged2 = {5,6};
    printVector(merged2, "Before insert");

    merged2.insert(merged2.begin(), nums.begin(), nums.end());
    printVector(merged2, "After insert(begin)");

    return 0;

}
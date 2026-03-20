#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int >nums = {5,10,15};

    vector<int>::iterator it = nums.begin();

    cout<<"Iterator points to:"<<*it<<endl;

    ++it;

    cout<<"After ++it, points to:"<<*it<<endl;

    ++it;

    cout<<"After ++it again, points to:"<<*it<<endl;

    return 0;
    
}
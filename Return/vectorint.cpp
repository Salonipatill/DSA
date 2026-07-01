#include<iostream>
#include<vector>
using namespace std;

vector<int >getNumbers(){
    return{10,20,30};
}

int main(){
    vector<int> nums = getNumbers();

    for(int x : nums)
        cout<<x<<" ";

}
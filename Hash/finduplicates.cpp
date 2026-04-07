#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> seen;

    seen.insert(5);
    seen.insert(10);
    seen.insert(5);

    cout<<seen.count(5)<<endl;
    cout<<seen.count(7)<<endl;


    return 0;
}
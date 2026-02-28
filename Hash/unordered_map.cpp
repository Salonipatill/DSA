#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>ages;

    ages["Alice"] = 25;
    ages["Bob"] = 30;

    cout<<ages["Alice"]<<endl;

    return 0;
}
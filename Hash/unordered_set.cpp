#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
unordered_set<int> numbers = {10,20,30};

if (numbers.find(20) != numbers.end()){
    cout << "Found 20" << endl;
    
}

    return 0;
}
#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> numbers = {10,20,30};

    auto it = numbers.begin();

    cout<<"First element:"<< *it <<endl;

    return 0;
}
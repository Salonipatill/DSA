#include<iostream>
#include<functional>
using namespace std;

int main(){

    hash<string> hasher;

    size_t value = hasher("Hello");
    cout<<value<<endl;


    return 0;
}
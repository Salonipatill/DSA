#include<iostream>
using namespace std;

int* getpointer(){
    return nullptr;
}

int main(){
    if(getpointer() == nullptr)
    cout<<"pointer is NULL";
}
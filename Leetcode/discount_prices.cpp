#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int num = 123;

    stringstream ss;
    ss << num;

    string str = ss.str();
    
    cout<<"String:"<<str<<endl;

    return 0;
}
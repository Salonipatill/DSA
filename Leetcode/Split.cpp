#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string sentence = "I Iove C++ programming";

    stringstream ss(sentence);
    string word;

    while(ss >> word){
        cout<<word<<endl;

    }
    return 0;
}
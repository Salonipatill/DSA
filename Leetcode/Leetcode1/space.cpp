#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string sentence = "I Iove C++ programming";
    stringstream ss(sentence);
    string word;
    string result = "";

    string temp[10];
    int index = 0;

    while(ss >> word){
        temp[index++] = word;

    }

    for(int i = index-1; i >= 0; i--){
        if(!result.empty()) result += " ";
        result += temp[i];
    }

    cout<<"original Sentence:"<<sentence<<endl;
    cout<<"Reversed Sentence:"<<result<<endl;

    return 0;
}

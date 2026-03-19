#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "abcabcbb";
    int left = 0;

    for(int right = 0; right<s.length(); right++){
        cout<<"Right pointer at index"<<right<<", char:"<<s[right]<<endl;

        if(s[right]=='a'){
            left =right+1;

        }
        cout<<"Left pointer at index:"<<left<<endl;
    }

    return 0;
}
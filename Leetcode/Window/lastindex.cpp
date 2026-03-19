#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s ="abcab";
    vector<int>lastIndex(256, -1);

    for(int i=0; i<s.length(); i++){
        cout<<"Character:"<<s[i]<<",Last index:"<<lastIndex[s[i]]<<endl;

        lastIndex[s[i]] = i;
    }

cout<<"\nFinal LastIndex values:\n"<<endl;
for(char c='a'; c<='c'; c++){
    cout<<c<<":"<<lastIndex[c]<<endl;
}

return 0;
}
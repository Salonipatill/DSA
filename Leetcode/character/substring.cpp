#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s = "abcabcbb";
    vector<int>lastIndex(256, -1);
    int maxLen = 0, start = 0;
    
    for(int i =0; i<s.size(); i++){
        if(lastIndex[s[i]] >= start){
            
        }
    }
}
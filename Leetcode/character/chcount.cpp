#include<iostream>
#include<map>
using namespace std;

int main(){
    string s = "Saloni";
    map<char, int> freq;
    
    for(char ch : s){
        freq[ch]++;
    }

    for(auto [ch, count] : freq){
        cout<<ch<<"->"<<count<<"\n";
    }
    
}
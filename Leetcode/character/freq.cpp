//Count Frequency of Characters
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "hello";
    vector<int> freq(256, 0);

    for(char ch: s){
        freq[ch]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i]>=0){
            cout<<char(i)<<":"<<freq[i]<<"";

        }
    }
    cout<<endl;
    return 0;
}

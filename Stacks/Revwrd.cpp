#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str){
    stack<char> st;
    string result = "";

    for(int i = 0; i<str.length(); ++i){
        if(str[i]!= ' '){
            st.push(str[i]);
        }else{
            while (!st.empty()){
                result += st.top();
                st.pop();
            }
            result += " ";
        }
    }

    while(!st.empty()){
        result += st.top();;
        st.pop();
    }
    return result;

    }

int main(){
    string str = "Saloni Patil";
    string reversedString = reverseWords(str);
    cout << reversedString << endl;
    return 0;
}
#include<iostream>
#include<stack>
#include<string>
using namespace std;


class Solution{
    public:
    bool isValid(string s){
        stack<char> st;

        for(char c : s){
            //first check all three types
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else if( c == ')' || c == '}' || c == ']'){
                if (st.empty()) return false;

                char top = st.top();

                if((c == ')' && top != '(')|| (c == '}' && top != '{') || ( c == ']' && c == '[')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main(){
    Solution sol;

    string s;
    cout<<"Enter brackets string:";
    cin>> s;

    if(sol.isValid(s)){
        cout<<"Valid Parentheses"<<endl;
    }else{
        cout<<"Invalid Parentheses"<<endl;
    }
    return 0;
}

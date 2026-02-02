#include <iostream>
#include <stack>
#include <string>
using namespace std;

string  simplify(string s){
    int len = s.length();
    string res = "";
    stack<int>st;

    st.push(1);

    for(int i = 0; i<len; i++){
        if(s[i] == '('){
            if(i > 0 && s[i -1] == '-')
            {
                st.push(-st.top());
            }
            else
            {
                st.push(st.top());
            }
        }
        else if (s[i] == '+'){
            
        }
    }
}
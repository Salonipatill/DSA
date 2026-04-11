//stack<char> st;  it creates a stack named st that can store characters
//<char>  this tell the stack what type of data it will store
// st it is just name of the stack
// string& s    here s is a reference to a string - not a copy
//The function uses the original string , not a duplicate
//& means reference
// A reference is just another name for the same variable
// s is another name for an existing string.
// string s  ->   New copy created 
// string& s  -> Original used
//it checks whether the stack is empty and returns true or false.



#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

bool isBalanced(string& s){

    stack<char> st;

    for(char c : s){
        if(c=='(' || c== '{' || c== '['){
            st.push(c);
        }
        else if(c == ')' || c == '}' || c == ']'){

            if(st.empty()) return false;

            char top = st.top();
            if( (c == ')' && top!= '(') || (c== '}' && top!= '{') || (c == ']' && top!= '[') ){
                return false;
            }

            st.pop();
            
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter parenthesis string:-";
    cin>>s;
    cout<<(isBalanced(s)?"true":"false");
    return 0;
}
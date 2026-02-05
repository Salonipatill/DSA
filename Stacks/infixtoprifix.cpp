#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }else 
    return -1;
}

bool isRightAssociative(char c){
    return c == '^';
}

string infixToPostfix(string &s){
    stack<char> st;
    string res;


    for (int i = 0; i< s.length(); i++){
        char c = s[i];

        if ((c>= 'a' && c<= 'z') ||
           (c >= 'A' && c<= 'z') ||
           ( c >= '0' && c <= '9'))
        res += c;
    }
}
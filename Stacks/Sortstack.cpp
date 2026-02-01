//#include <bits/stdc++.h>  it includes almost all standar C++ libraries at once
//#include  tells the compiler:  I want to use code from another file.
//<bits/stdc++.h>  this is  a special header file 
// it contains most of the C++ standeard libraries, like 
//iostream , vector , stack , queue, map , algorithm and many more...
//stack<int> sortStack(stack<int> &input) it is a function declaration that:
//Takes a stack of  integers as input(by reference)
//Returns a new stack of integers(sorted)
//stack<int>  this is  the return type
//The function will return a stack that stores integers.
//(stack<int> &input)  this is the parameter
// the input is a stack of integers
// &input (reference)
// The stack is passed by reference
// No copy is created 
//Faster and memory-efficient
//input.top()  just looks at the top element of the stack without removing it.

#include <bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int> &input)
{
stack<int> tmpStack;

  while(! input.empty())
  {
    int tmp = input.top();
    input.pop();

    while(! tmpStack.empty() && tmpStack.top()<tmp){
        input.push(tmpStack.top());
        tmpStack.pop();
    }

    tmpStack.push(tmp);
}
return tmpStack;
}
int main(){
    stack<int>input;
    input.push(34);
    input.push(3);
    input.push(31);
    input.push(98);
    input.push(92);
    input.push(23);

    stack<int>tmpStack = sortStack(input);
    while (! tmpStack.empty())
    {
        cout<<tmpStack.top()<<" ";
        tmpStack.pop();
    }
}
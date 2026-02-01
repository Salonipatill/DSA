#include <iostream>
using namespace std;

int stack[5];
int top = -1;
 int main(){

    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    cout << stack[top] << "<-popped"<< endl;
    top--;

    cout << stack[top] << "<-popped" <<endl;
    top--;

    top++;
    stack[top] = 50;
    
    top++;
    stack[top] = 60;

    cout << stack[top] << "<-popped" <<endl;
    top--;

    top++;
    stack[top] = 7;

    top++;
    stack[top] = 8;

    top++;
    stack[top] = 9;

    cout<<"Remaining" <<endl;
    cout<<"Stack elements:-"<<endl;

    for (int i = top; i>= 0; i--){
        cout <<stack[i]<<"|";
    }

 
    return 0;
 }
//top keeps track of the stack
// top++ add element
// top-- remove element

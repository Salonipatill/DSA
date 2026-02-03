#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

bool checkPerm(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size())
        return false;
    queue<int> q1;
    for (int i = 0; i < a.size(); i++) 
        q1.push(a[i]);

    queue<int> q2;
    for (int i = 0; i < b.size(); i++)
        q2.push(b[i]);

    stack<int> st;
    
    // Dequeue all items one by one
    while (!q1.empty()) {
        int ele = q1.front();
        q1.pop();
       
        if (ele == q2.front()) {
            
            // If matches, dequeue from output queue
            q2.pop();
            
            // Pop from stack while top matches q2 front
            while (!st.empty() && !q2.empty() && st.top() == q2.front()) {
                st.pop();
                q2.pop();
            }
        }
        else {
            st.push(ele);
        }
    }    
    return q2.empty();
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 1};
    
    if (checkPerm(a, b))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
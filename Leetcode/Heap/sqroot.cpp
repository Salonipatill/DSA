#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int main(){
    priority_queue<int>pq;

    pq.push(25);
    pq.push(16);
    pq.push(9);
    pq.push(4);

    int k = 4;

    while(k--){
        int x = pq.top();
        pq.pop();

        x = sqrt(x);
        pq.push(x);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<pair<int,int>>pq;

    pq.push({5,100});
    pq.push({6,200});
    pq.push({1,800});

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<pair<int , int>>q;

    q.push({10,20});
    q.push({30,40});

    auto p = q.front();
    q.pop();

    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
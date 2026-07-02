#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<pair<int, int>> q;

    q.push({1,2});
    q.push({3,4});
    q.push({5,6});

    while(!q.empty()){

        auto p = q.front();
        q.pop();

        cout<<p.first<<" "<<p.second<<endl;
        
    }

    return 0;
}
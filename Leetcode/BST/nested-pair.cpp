#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<pair<int,pair<int,int>>> q;

    q.push({101,{90,80}});
    q.push({102,{95,88}});
    q.push({103,{75,92}});

    while(!q.empty()){
        int id = q.front().first;
        int math = q.front().second.first;
        int science = q.front().second.second;

        cout<<"id: "<<id<<" "
        <<"math: "<<math<<" "
        <<"science: "<<science<<endl;

        q.pop();
    }
}
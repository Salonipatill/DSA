//custom comparator
#include<iostream>
#include<queue>
using namespace std;

class Compare{
    public:
        bool operator()(pair<int,int> a, pair<int , int>b){//built in function name
            return a.second > b.second;
        }
};

int main(){
    priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>pq;

    pq.push({101,90});
    pq.push({103,45});
    pq.push({108,30});
    pq.push({107,20});

    while(!pq.empty()){
        cout<<"Roll No:"<<pq.top().first<<" "<<"Marks: "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;

}
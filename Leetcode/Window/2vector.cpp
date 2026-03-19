#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>numbers(5, -1);

    numbers[2] = 10;

    for(int i=0; i<numbers.size(); i++){
        cout<<"Element at index"<<i<<":"<<numbers[i]<<endl;
        
    }

    return 0;
}
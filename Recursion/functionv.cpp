#include<iostream>
#include<vector>
using namespace std;

vector<int>numbers(){
    return{1,2,3,4};
}

int main(){
    vector<int> v = numbers();
        
    for( int x : v){
        cout<<x<<",";
    }
    
}
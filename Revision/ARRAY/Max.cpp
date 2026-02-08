#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5,13,1,8,23,45,1,2,3};
    int n = arr.size();
    int maxval = arr[0];
    
    for(int i = 0 ; i<n; i++)
    {
        if(arr[i]>maxval){
            maxval = arr[i];
        }
    }

        cout<<"Maximum element:"<<maxval;

    
    return 0;
}
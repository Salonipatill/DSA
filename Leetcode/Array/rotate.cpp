#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        void rotate(vector<int>&nums, int k){
            int n= nums.size();

            vector<int>temp(n);

            for(int i=0; i<n; i++){
                temp[(i+k)%n]=nums[i];
            }
            nums=temp;

        }
};

int main(){
    vector<int>arr={1,2,3,4,5};
    int k=4;
    Solution obj;
    obj.rotate(arr,k);

    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
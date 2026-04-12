#include<iostream>
using namespace std;

class Solution{
    public:
    int climbStairs(int n){
        if(n<=2)return n;

        int a = 1;
        int b = 2;

        for(int i = 3; i<=n; i++){
            int c = a+b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main(){
    Solution obj;

    int n;
    cout<<"Enter number of steps:";
    cin>>n;

    cout<<"Number of ways to climb stairs:"
    <<obj.climbStairs(n)<<endl;

    return 0;
}

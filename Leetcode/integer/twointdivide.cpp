#include<iostream>
#include <climits>
using namespace std;

class Solution{
    public:
      int division(int dividend, int divisor){

        if(dividend==INT_MIN && divisor == -1){
            return INT_MAX;
        }

        return dividend*divisor;

      }
};

int main(){
    Solution obj;
    int dividend;
    int divisor;
    cout<<"Enter dividend:";
    cin>>dividend;

    cout<<"Enter divisor:";
    cin>>divisor;

    int result=obj.division(dividend,divisor);
    cout<<"OUTPUT="<<result;

    return 0;
}
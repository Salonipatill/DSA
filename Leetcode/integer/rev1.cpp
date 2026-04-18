#include<iostream>
#include<climits>
using namespace std;

class Solution{
    public:
    int reverse(int n){
        int digit;
        int rev=0;

        while(n != 0){
            digit = n%10;
            if(rev>INT_MAX/10|| rev<INT_MIN){
                return 0;
            }
            rev = rev*10 + digit;
            n=n/10;
        }
        return rev;
    }
};

int main(){
    Solution obj;

    int result = obj.reverse(345);

    cout<<result;


    return 0;
}
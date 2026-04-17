#include<iostream>
#include <climits>
using namespace std;

class Solution{
    public:
        int reverse(int x){
            int digit ;
            int rev = 0;
            
            while(x != 0){
                digit = x%10;
                if(rev < INT_MIN/10|| rev > INT_MAX/10){
                   
                    return 0;
                }
                rev = rev*10 + digit;
                x=x/10;

            }
            return rev;
        }
};

int main(){
    Solution obj;
    int result=obj.reverse(123);
    cout<<result;
    return 0;
}
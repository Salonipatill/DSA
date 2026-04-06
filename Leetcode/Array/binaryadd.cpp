#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
    string addBinary(string a, string b){
        string result = "";
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry){
            int sum = carry;

            if( i >= 0){
                sum += a[i] - '0';
                i--;
            }
            if(j >= 0){
                sum += b[j] - '0';
                j--;
            }

            carry = sum/2;
            result = char((sum%2) + '0' ) + result;

        }
        return result;
    }
};

int main(){
    Solution sol;

    string a1 = "11";
    string b1 = "1";

    cout<<"Sum of"<<a1<<"+"<<b1<<"="<<sol.addBinary(a1,b1)<<endl;

    string a2 = "1010";
    string b2 = "1011";
    cout<<"Sum of"<<a2<<"+"<<b2<<"="<<sol.addBinary(a2,b2)<<endl;

    return 0;
}
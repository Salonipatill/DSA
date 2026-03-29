#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
    string multiply(string num1, string num2)
    {
        int n = num1.size();
        int m = num2.size();

        vector<int>result(n+m,0);

        for(int i = n-1; i>=0; i--){
            for(int j = m-1; j>= 0; j--){
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';

                int mul = digit1*digit2;
                int sum = mul + result[i+j+1];

                result[i+j+1] = sum%10;
                result[i+j] += sum/10;

        }
        }

    string ans="";

    for(int i =0; i<= result.size(); i++){
        if(!(ans.empty()&&result[i]==0)){
            ans += to_string(result[i]);
        }

        return ans.empty() ? "0" : ans;
    
    }
};

int main(){
    string num1, num2;
    cout<<"Enter first number:";
    cin>>num1;

    cout<<"Enter secong number:";
    cin>>num2;

    Solution obj;
    string result = obj.multiply(num1 , num2);

    cout<<"Result:"<<result<<endl;

    return 0;
}

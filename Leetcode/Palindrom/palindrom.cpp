#include<iostream>
using namespace std;


class Solution{
public:


 bool palindrome(int x){
    int original = x;
    long reveresed = 0;
    if(x<0){
        return false;
    }

    while(x != 0){
        int digit;
        digit = x%10;
        reveresed = reveresed*10 + digit;
        x /=10;
        

    }
   return  original == reveresed;
    



 }

};

int main(){
   int x;
    cout<<"Enter number:";
    cin>>x;

    Solution obj;
    if(obj.palindrome(x)){
        cout<<"True";
    }else{
        cout<<"False";
    }


    return 0;
}
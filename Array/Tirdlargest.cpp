#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;

 int gtl(vector<int>&arr){
   int n=arr.size();
   sort(arr.begin(),arr.end());
     
 for(int i=n-3; i>=0; i--){
    if(arr[i]!=arr[n-2]){
        return arr[i];
    }

 }
 return -1;
 }

 int main(){
     vector<int>arr={12,45,67,8,19,19,19,19};
     cout<<gtl(arr);
     return 0;
 }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdlargestele(vector<int>&arr)
{
int n = arr.size();
sort(arr.begin(), arr.end());

  for(int i = n-3; i>=0; i--)
  {
       if(arr[i]!=arr[n-2])
       {
          return arr[i];
       } 
   }
return -1;
}

int main(){

vector<int>arr = {12,13,14,12,12,19,19,19};
cout<<thirdlargestele(arr);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>arr = {1,2,3,4,5};
     int n = arr.size();
     int sum =0;

     for(int i =0 ; i<n; i++)
     {
        sum+=arr[i];
     }
     
     cout<<"Sum of elements:"<<sum;

    return 0;
}

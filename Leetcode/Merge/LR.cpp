#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int>nums2={2,4,6,8};
    int n = nums2.size();

    cout<<"Array: ";
    for(int x : nums2)cout<<x<<" ";
    cout<<"\n\n";

    for(int j = 0; j<=n; j++){
        int minRight2 = (j == n) ? INT_MAX : nums2[j];
          
        cout<<"Partition j ="<<j<<":";
        if(j == 0)cout<<"Left = []";
        else cout << "Left = [";
        for(int k = 0; k<j; k++) cout<<nums2[k]<<(k<j-1 ? ",": "");
        if(j!=0)cout<<"]";

        if(j==n)cout<<"Right = []";
        else cout<<"Right = [";
        for (int k =j; k<n; k++) cout<<nums2[k]<<(k<n-1 ? "," : "");
        if(j != n)cout<<"]";

        cout<<" ->minRight2="<<minRight2<<endl;
        }
        return 0;
}

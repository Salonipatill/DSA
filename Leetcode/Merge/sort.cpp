#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianMerged(vector<int>&nums1, vector<int>&nums2){
    vector<int>merged;

    merged.insert(merged.end(), nums1.begin(), nums1.end());
    merged.insert(merged.end(), nums2.begin(), nums2.end());

    sort(merged.begin(), merged.end());

    int n = merged.size();

    if(n % 2 == 0)
        return (merged[n/2 - 1] + merged[n/2]) / 2.0;
    else
       return merged[n/2];

}

int main(){
    vector<int>nums1 = {16,14};
    vector<int>nums2 = {18,41};

    cout<<"Median"<<findMedianMerged(nums1,nums2);

}
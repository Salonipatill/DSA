#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int maxProduct(vector<int>arr){
    int maxProduct = -1e9;
    int n = arr.size();
    for(int i = 0; i<n-2; i++){
        for(int j = 0; j<n-1; j++){
            for(int k = 0; k<n; k++){
                maxProduct = max(maxProduct, arr[i]*arr[j]*arr[k]);

            }
        }
    }
    return maxProduct;
}


int main(){
    vector<int>arr = {10,10,2,1,10,1};
    cout<<maxProduct(arr)<<endl;

    return 0;
}
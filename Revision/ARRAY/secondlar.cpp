#include<iostream>
#include<climits>
#include<vector>

using namespace std;
int main(){
    int small1 = INT_MIN;
    int vsmall2 = INT_MIN;
    vector<int>arr = {1,2,3,41,2,37,856};
    int n = arr.size();
    for(int i = 0; i<n; i++)
     {
        if(arr[i]>small1)
        {
            vsmall2 = small1;
            small1 = arr[i];
        }else if(arr[i]>vsmall2||arr[i]!=small1){
            vsmall2 = arr[i];
        }
    }
    cout<<"Second Largest Element:"<<vsmall2;


    return 0;

}

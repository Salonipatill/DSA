#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gsl(vector<int> &arr){
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            return arr[i];
        }
    }

    return -1;
}


int main()
{
    vector<int> arr = {12, 34, 54, 34, 2};
    cout<<gsl(arr);
    return 0;
}

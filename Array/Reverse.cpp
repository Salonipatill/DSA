#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();

    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    vector<int> arr = {12, 534, 2, 3, 45, 23, 4};
    reverseArray(arr);
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";}
    return 0;
}

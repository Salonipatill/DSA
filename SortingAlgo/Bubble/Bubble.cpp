#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,3,1,5};
    
    for(int j = 0; j<5; j++)
    {
        for(int i = 0; i<5-j-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                 int temp;
                 temp = arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
            }
        }
    }

for(int i=0; i<5; i++)
{
    cout<<arr[i]<<",";
}
return 0;

}


#include<iostream>
using namespace std;

int main(){
    int count=1;
    int count1=0;
    int count2=0;
    int count3=0;

int arr[]={1,1,1,0,0,1,1,1,1,};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n; i++)
{
    if(arr[i]==1)
    { 
         if(arr[i]==arr[i+1]==1)
         {
        count++;
         }else
         {
            if(count2<count)
             {
             count2=count;
              }else 
              {
              count=1;
              }
         }
    }else if(arr[i]==0)
        {
        count1++;

            if(arr[i]==arr[i+1]==0)
            {
               count1++;
            }else
            {
              if(count3<count)
              {
                 count3=count1;
              }else
              {
                count1=1;
              }
            }
      }

    if(count2>count3)
    {
        cout<<"1"<<count3;
    }else
    {
        cout<<"0"<<count3;
    }

}
    return 0;
 }


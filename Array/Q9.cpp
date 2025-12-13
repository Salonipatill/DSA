#include<iostream>
using namespace std;

int main(){
    char arr[]={1,1,0,0,0,0,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1};
    int count=0;
    int count1=0;
    int count2=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;)
    {
        if(arr[i]==0)
        {
         count++;
           if(count>count1)
           {
             count2=count;
           }else{
             count2=count1;
           }
        }else{
            count1++;
            if(count>count1)
            {
             count2=count;
            }else{
            count2=count1;
            }
        }
    }
    if(count>count1){
        count2=count;
        cout<<"Longest sequence of 0="<<count2<<endl;
    }else{
        count2=count1;
          cout<<"Longest sequence of 1="<<count2<<endl;
    }
    
    return 0;
}
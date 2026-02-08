#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {1,2,3,4,56,4,4,};
    int n = arr.size();
    int evencount=0;
    int oddcount=0;
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            evencount++; 
        }else{
            oddcount++;
        }
    }
    cout<<"Event count:"<<evencount<<endl;
    cout<<"Odd count:"<<oddcount<<endl;
    
    return 0;
}

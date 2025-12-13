#include<iostream>
#include<array>
using namespace std;
int main(){

array<int,10>arr = {1,2,3,4,5,6,7,8,9,0};  
int n=arr.size();

for(int i=0; i<=n-1; i++){

cout<<arr[i]<<endl;

}
return 0;
}

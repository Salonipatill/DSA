#include<iostream>
#include<vector>
using namespace std;

vector<string>makepaths(int n){

    if(n == 1)
    return{"1"};



      vector<string> prev = makepaths(n-1);

      vector<string> ans;

      for(string s : prev)
         ans.push_back(to_string(n) + "->" + s);

      return ans;
}

int main(){
    vector<string> v = makepaths(4);

    for(string s : v)
      cout<<s<<endl;
}
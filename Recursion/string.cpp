#include<iostream>
#include<vector>
using namespace std;

vector<string>fruit(){
    return{"Apple","Mango","Orange"};

}

int main(){

    vector<string>f =fruit();

    for(string x : f){
        cout<<x<<",";
    }
}
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    cout<<"original list";

    list<int>::iterator it;

    for(it = numbers.begin(); it!= numbers.end(); it++){
        cout<<*it<<" ";

    }

    cout<<endl;

    for(it = numbers.begin(); it != numbers.end(); it++){
        if(*it == 30){
            numbers.erase(it);
            break;
        }
    }

    cout <<"Sfter Deleting 30";

    for (it = numbers.begin(); it != numbers.end(); it++){
        cout<<*it <<" ";

    }

    return 0;
    

}
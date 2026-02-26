#include<iostream>
#include<vector>
#include<list>
using namespace std;
//HashTable class
class HashTable{
    vector<list<int>> table;
    int size;

public:

   HashTable(int s){
        size = s;
        table.resize(size);

   }

   int hashFunction(int key){
       return key % size;
   }

   void insert(int key){
       int index = hashFunction(key);
       table[index].push_back(key);
   }

   bool search(int key){

    int index = hashFunction(key);

    for (int value : table[index]){
        if(value == key)
           return true;
    }

    return false;
   }

   void display() {
    for (int i = 0; i<size; i++){
        cout<< i <<":";


    for(int value : table[i])
        cout<< value<<" ";

    
    cout<<endl;
    }
   }


};

int main() {

    HashTable h(5);

    h.insert(10);
    h.insert(15);
    h.insert(7);

    h.display();

    if(h.search(15)){
        cout<< "15 Found\n";
    }else{
        cout<< "15 not found\n";
    }

    return 0;
}
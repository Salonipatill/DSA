#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<algorithm>   // Required for find()

class Hashing{

    vector<list<int>> hashtable;//list
    //hashtable → A vector (array) of lists
    int buckets;//size of hash table



public:

    Hashing(int size){//constructor
        buckets = size;//variable size 
        hashtable.resize(size);//list resize function 
    //Resizes vector to create empty lists
    }

    int hashvalue(int key){//function
        //This is Division Method:
        //index=key%table_size

        return key % buckets; // division method
    }

    void add(int key){//function
        int idx = hashvalue(key);//variable
        hashtable[idx].push_back(key);//array also a function
    }

    list<int>::iterator search(int key){//a list with that have scope resolution  also use here iterator
       //Finds correct index
       //Uses find() to search in that list
       //Returns iterator (position)
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);// a function that returns something based on comparision
    }

    void deleteKey(int key){// delete function
        int idx = hashvalue(key);// hashvalue function to perform operation
//Finds index
        auto it = search(key);//search function
//Searches key
        if(it != hashtable[idx].end()){// end method 
            //f found → erase it
            hashtable[idx].erase(it);// erase method 
            cout << key << " is deleted" << endl;    
        }
        //If not found → print message
        else{
            cout << "Key is not present in the hashtable" << endl;
        }
    }
};

int main(){

    Hashing h(10); // hashing class  with object 
//It creates a hash table of size 10.
//When two numbers go to the same index, they are stored in a list at that index.
    h.add(5);
    h.add(9);
    h.add(3);

    h.deleteKey(3);
    h.deleteKey(3);

    return 0;
}
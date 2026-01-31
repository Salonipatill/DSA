//this is professional C++ Way
class Node{
    public:
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
//This is called a constructor initializer list.
// instead of writing:
// Node(int x){
//     data = x;
//     next = nullptr;
// }

};

//Features
//Faster:- Variables are initialized directly, not first crreated then
//Clean and short code:-less lines , more readable.

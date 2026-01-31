//Generic Node
template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    //this node points to another node of the same type T

    Node(T x) : data(x), next(nullptr) {}

};

//Templates are powerful because there is no need to rewrite linked list for int , char, float, etc.
#include<iostream>
using namespace std;

#define SIZE 5

class CircularQueue{
private:
    int arr[SIZE];
    int front, rear;

public:
   CircularQueue(){
       front = -1;
       rear = -1;
   }

   void enqueue(int value){
    if(front == (rear+1)% SIZE){
        cout<<"Queue is Full";
        return;
    }
    if(front == -1){
        front, rear = 0;
     }else{
        rear = (rear + 1)% SIZE;
        }
   

   arr[rear] = value;
   cout<<value<<" ";
}

  void dequeue(){
    if(front == -1){
        cout<<"Queue is empty\n";
        return;
    }
    cout<<arr[front]<<"deleted\n";

    if(front == rear){
        front = rear = -1;
    }else{
        front = (front +1)%SIZE;
    }
  }
  void dispaly(){
    if(front == -1){
        cout<<"Queue is Empty\n";
        return;
    }
    cout<<"Queue elements:";
    int i =front;

    while(true){
        cout<<arr[i]<<" ";
        if(i == rear)
            break;
        i = (i + 1)%SIZE;
    }
    cout<<endl;
  }
};

int main(){
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
     

    return 0;

}
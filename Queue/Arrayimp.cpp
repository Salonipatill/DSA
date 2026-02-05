#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1 , rear = -1;

void enqueue(int value){
    if(rear == SIZE - 1){
        cout << "Queue is Full\n";

    }else{
        if (front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout<<value<<"inserted into queue\n";
    }
}

void dequeue(){
    if(front == -1 || front>rear){
        cout << "Queue is Empty\n";
    }else{
        cout<< queue[front]<< "remove from queue\n";
        front++;
    }
}

void display(){
    if(front == -1 || front >rear){
        cout << "Queue is Empty\n";

    }else{
        cout<< "Queue elements:";
        for(int i = front; i<= rear; i++){
            cout << queue[i] <<" ";
        }
        cout << endl;
    }
}

void peek(){
    if(front == -1 || front >rear){
        cout << "Queue is Empty\n";

    }else{
        cout << "Front element is :" << queue[front] <<endl;
        
    }
}

int main(){
    int choice, value;

    while(true){
        cout << "\n---QUEUE---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4.Display\n";
        cout << "5.Exit\n";
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Enter value to Insert:";
            cin >> value;
            enqueue(value);
            break;

            case 2:
                dequeue();
                break;
            
            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting program\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
return 0 ;
}
#include<iostream>
using namespace std;
# define SIZE 10
class circular_q{
    int front;
    int rear;
    int arr[SIZE];
     public:
        circular_q(){
            front=-1;
            rear=-1;
        }
     bool isfull(){
        if((rear+1)%SIZE==front){
            cout<<"queue overflow\n";
            return true;
        }
        else 
           return false;
    }
     bool isempty(){
        if(rear==-1 && front==-1){
            cout<<"queue underflow\n";
            return true;
        }
        else
           return false;
     }
     void enqueue(int x){
        if(isfull()){
            return;
        }
        if(isempty()){
            rear=0;
            front-0;
        }
        else{
            rear=(rear+1)%SIZE;
            arr[rear]=x;
            cout<<"enqueued :"<<arr[rear]<<endl;
        }
     }
     void dequeue(){
        if(isempty()){
            return;
        }
        else if(rear==front){
            int y=arr[front];
            cout<<"dequeued:"<<y<<endl;
            front=-1;
            rear=-1;
            return;
        }
        else{
            int x=arr[front];
            arr[front]=0;
            front=(front+1)%SIZE;
            cout<<"dequeued:"<<x<<endl;
        }
     }
     void display(){
       if(isempty()){
      cout<<"queue underflow"<<endl;
      return;
     }
      cout << "Elements in the queue are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        }
        else {
            for (int i = front; i < SIZE; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
   }
};
int main(){
    circular_q cq;
    cq.enqueue(20);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(50);
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cq.display();
    return 0;
}



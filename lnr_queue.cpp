#include<iostream>
using namespace std;
# define SIZE 10
 
class queue{
    int front,rear;
     int arr[SIZE];
    public:
     queue(){
         front=-1;
         rear=-1;
      }
      void enqueue(int x){
         if(rear>=SIZE-1)
               cout<<"queue overflow"<<endl;
         else{
            arr[++rear]=x;
             cout<<"inserted:"<<x<<endl;
         }
      }
      void dequeue(){
         if(rear==-1 && front==-1)
                   cout<<"queue underflow"<<endl;
         else{
            cout<<"deleted:"<<arr[front++]<<endl;
         }
      }
      void display(){
              if(rear==-1 && front==-1)
                   cout<<"queue underflow"<<endl;
              else{
                 cout<<"the elements are:";
                 for(int i=front;i<=rear;i++)
                        cout<<arr[i]<<" ";
              }
              cout<<endl;
      }      
};
int main(){
    queue q;
    int num,c;
    do{
       cout<<"1->insertion"<<endl;
       cout<<"2->deletion"<<endl;
       cout<<"3->display"<<endl;
       cout<<"4->exit"<<endl;
         cout<<"the choice is:";
        cin>>c;
         switch(c){
            case 1:
              cout<<"the elements:";
              cin>>num;
               q.enqueue(num);
               break;
            case 2:
               q.dequeue();
                break;
            case 3:
               q.display();
                break;
            case 4:
                cout<<"exit"<<endl;
                 exit(0);
         }
    }while(c!=4);
    return 0;
}
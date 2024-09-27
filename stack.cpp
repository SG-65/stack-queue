#include<iostream>
using namespace std;
# define MAX_SIZE 20

class stack{
         int top;
         int arr[MAX_SIZE];
         public:
            stack(){
                top=-1;
            }
          void push(int x){
             if(top >= MAX_SIZE-1)
                 cout<<"stack overflow"<<endl;
             else{
                arr[++top]=x;
                cout<<"pushed:"<<x<<endl;
             } 
          }
           void pop(){
                if(top<0)
                    cout<<"stack underflow"<<endl;
                else{
                   cout<<"popped:"<<arr[top--]<<endl;
                }
          }
          void display(){
            if(top<0)
                cout<<"stack underflow"<<endl;
            else{
                cout<<"the elements are:";
                for(int i=0;i<=top;i++)
                     cout<<arr[i]<<" ";
            }
            cout<<endl;
          }      
    };
int main(){
    stack s;
    int num;
    do{
      cout<<"1->insertion"<<endl;
      cout<<"2->deletion"<<endl;
      cout<<"3->display"<<endl;
      cout<<"4->exit"<<endl;
      int c;
        cout<<"the choice is:";
        cin>>c;
         switch(c){
            case 1:
              cout<<"the elements:";
              cin>>num;
               s.push(num);
               break;
            case 2:
               s.pop();
                break;
            case 3:
               s.display();
                break;
            case 4:
                cout<<"exit"<<endl;
                 exit(0);
         }
    }while(c!=4);
    return 0;
}
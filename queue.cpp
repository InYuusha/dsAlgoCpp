#include <iostream>
using namespace std;

class Queue{
    private:
     int queue[50];
     int front,rear;
     int max,size;
    public:
     Queue(){
         max=50;size=0;
         front=0;rear=-1;
     }
     int isFull();
     int empty();
     void add(int el);
     int del();
     void display();
     int getSize();
};
int Queue::empty(){
    if(front==rear){
        return 1;
    }
    else return 0;
}
int Queue::isFull(){
    if(rear==max-1){
        return 1;
    }
    else return 0;
}
void Queue::add(int el){
    if(!isFull()){
        queue[++rear]=el;
        size++;
    }

}
int Queue::del(){
    if(!empty()){
        size--;
        return queue[front++];

    }
    else return -1;
}

void Queue::display(){

if(!empty()){
    cout<<"\n";
    for(int i=front;i<=rear;i++){
        if(queue[i+1]!='\0'){
        cout<<queue[i]<<"-->";
        }
        else cout<<queue[i];
    }
}
}
int Queue::getSize(){
    return size;
}


int main(){
    
    Queue que;
    que.add(2);
    que.add(7);
    que.add(5);
    que.display();
    int s=que.getSize();
    cout<<"\n Size is "<<s;
    int el=que.del();
    cout<<"\nQueue after deletion \t";
   que.display();
   que.add(11);
   que.display();
   que.del();
   que.display();

    return 0;
}
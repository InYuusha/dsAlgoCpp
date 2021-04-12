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
         front,rear=-1;
     }
     int isFull();
     int empty();
     void add(int el);
     int del();
     int getFront();
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
int Queue::getFront(){

if(!empty()){
    return queue[front+1];
}
else return -1;
}

int main(){
    
    Queue que;
    que.add(2);
    que.add(7);
    que.add(5);

    return 0;
}
#include <iostream>
using namespace std;


class CQueue{
    private:
     int queue[50];
     int size,maxSize;
     int rear,front;
    public:
     CQueue(){
         maxSize=50;size=0;
         rear=-1;front=0;
     }  
     int empty();
     int isFull();
     void add(int el);
     int del();
     int getFront();
     void display();
};
int CQueue::empty(){
    if(!size){
        return 1;
    }
    else return 0;
}
int CQueue::isFull(){
    if(rear==front+1){
        return 1;
    }
    else return 0;
}
void CQueue::add(int el){
   
        rear=(rear+1) % maxSize;
        queue[rear]=el;
        size++;

}
int CQueue::del(){
    if(!empty()){
        front=(front+1) % maxSize;
        return queue[front];
    }
    else return -1;
}
int CQueue::getFront(){
    if(!empty()){
        int temp;
        temp = (front)%maxSize;
        return queue[temp];
    }
    else return -1;
}
void CQueue::display(){
    if(!empty()){
        cout<<"\n";
        for(int i=front;i<=rear;i++){
            cout<<queue[i];
        }
    }
}
int main(){

    CQueue que;

    que.add(2);
    que.add(1);
    que.add(5);
    que.display();
 
    que.del();

    que.display();
    int front = que.getFront();
    cout<<"\nFront el is "<<front<<"\n";
  
    return 0;
}
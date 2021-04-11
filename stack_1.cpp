#include <iostream>

class Stack{

    private:

     int stack[50];
     int maxSize;
     int top;

    public:

     Stack(){
         maxSize=50;
         top=-1;
     } 

     int getTop();
     int pop();
     void push(int el);
     int empty();
     int isFull();     
     void display();
     int currentSize();
};

int Stack::getTop(){
    if(!empty()){
        return (stack[top]);
    }
    else return -1;
   
}
int Stack::pop(){
    if(!empty()){
        return (stack[top--]); // return top then top-=1
    }
    else return -1;
}
void Stack::push(int el){
    if(!isFull()){
        stack[++top]=el;
    }
}
int Stack::empty(){
    if(top==-1){
        return 1;
    }
    else return 0;
}
int Stack::isFull(){
    if(top==(maxSize-1)){
        return 1;
    }
    else return 0;
}
void Stack::display(){
if(!empty()){
    std::cout<<"\n";
        for(int i=0;i<=top;i++){
        std::cout<<stack[i]<<" ";
    }
}
}
int Stack::currentSize(){
    if(!empty()){
        return top+1;
    }
    else return -1;
}

int main(){
    Stack st;
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(2);
    st.display();
    st.pop();
    st.display();
    int top = st.getTop();
    int size = st.currentSize();
    std::cout<<"\nThe top El is "<<top;
    std::cout<<"\nCurrent Size is "<<size;

    return 0;
}



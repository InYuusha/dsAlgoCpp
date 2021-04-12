#include <iostream>

class Stack{

    public:
    //constructor func
    Stack(){
        top=-1;
        maxSize=50;
    }
    
      void getStr(char s[]);
      void display();
      void push(char el);
      char pop();
      int empty();
      int isFull();
     

    private:

      char str[50];  
      int top,maxSize;
};

//Member functions :-

//@param --> string
//@desc:push string in "str"
void Stack::getStr(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
        push(s[i]);
        
    }
    str[i]='\0';
}
//@desc:Display the string
//@return :void
void Stack::display(){
    if(!empty()){
     int i;
     std::cout<<"\n String is ";
     for(i=0;str[i]!='\0';i++){
        std::cout<<str[i];
    }
}
 
}
//@return :void
void Stack::push(char el){
    if(!isFull()){
        str[++top]=el;
    }
    
}
//@return:char(el/-1)
char Stack::pop(){
    if(!empty()){
        return str[top--];
    }
    else return -1;
   
    
}
//@return:int(1/0)
int Stack::empty(){
    if(top==-1){
        return 1;
    }
    else return 0;

}
//@return:int(1/0)
int Stack::isFull(){
    if(top==maxSize-1){
        return 1;
    }
    else return 0;
}

int main(){

    Stack rev;
    Stack s;

    s.getStr("My name is ankush");
    //display normal string
    s.display();

    while(!s.empty()){
        rev.push(s.pop());
    }
    //display reversed string
    rev.display();

    return 0;  
}

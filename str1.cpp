#include <iostream>

using namespace std;

class String{
    private:
     char str[30];
    public:
    String(){ }
    void getString();
    int length(); 
    int isPalindrone();
   
};

void String::getString(){
    cout<<"Enter the String ";
    cin.get(str,30);
}
int String::length(){
    int len;
    for(int i=0;i<30;i++){
        if(str[i]=='\0'){
            len=i;
            break;   
        }
    }
    return len;
}
int String::isPalindrone(){
    int last,b,i,j;
    for(b=0;str[b]!='\0';b++);
    last=b;
    

    for(i=0,j=last-1;i<last,j>=0;i++,j--){
        if(str[i]!=str[j]){
            return 0;
        }
    }
    return 1;


}

int main(){
    String a;
    
    a.getString();
    
    int len=a.length();
    cout<<"The length of the String is "<<len<<"\n";

    int pal=a.isPalindrone();
    
    if(pal==0){
        cout<<"The string is not palindrone";
    }
    else{ cout<<"The String is Palindrone";}

 
    return 0;
}


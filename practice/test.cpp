

#include <iostream>

int main(){

    int *ptr = new int(4) ;
    
    std::cout << *ptr<<"\t";

    *ptr++;
    
     std::cout << *ptr;

    return 0;
}



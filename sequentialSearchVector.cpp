#include<iostream>
#include<vector>



int main(){
    std::vector<int> num = {1, 2, 4, 5};

   int i = 0;
   while (i < num.size())
   {
       std::cout << num[i];
       i++;
    }
    return 0;
}

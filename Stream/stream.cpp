#include <fstream>
#include<iostream>

using namespace std;

int main(){
    ifstream readStream;
    ofstream writeStream;

    readStream.open("file.txt");
    writeStream.open("file.txt");
    
    if(readStream.fail()){
        cout<<"Couldnt open file";
        exit(1);
        
    }

        int n1,n2,n3,sum;

        readStream>>n1>>n1>>n3;
        sum=n1+n2+n3;
        writeStream<<"The Sum is "<<sum;
       
   
    readStream.close();
    writeStream.close();

}
#ifndef _intCell_H_
#define _intCell_H_

class intCell{
    private :
    int storedValue;

    public:
        explicit intCell(int initVal = 0);
        int read() ;
        void write(int );
};


intCell::intCell(int initVal) : storedValue(initVal){

}

int intCell::read(){
    return storedValue;
}

void intCell::write(int x){
    storedValue = x;
}

#endif
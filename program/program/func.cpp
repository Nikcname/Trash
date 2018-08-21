#include <iostream>

int getUserInput(){
    std::cout<<"Please enter integer"<<std::endl;
    int value;
    std::cin>>value;
    return value;
}

int getMathematicalOperation(){
    std::cout<<"Prease enter which operator you want\n(1= +, 2= -, 3= *, 4= /)"<<std::endl;
    int ope;
    std::cin>>ope;
    return ope;
}

double calculateResult(int x, int ope, int y){
    
    if(ope == 1)
        return x+y;
    if(ope == 2)
        return x-y;
    if(ope == 3)
        return x*y;
    if(ope == 4)
        return x/y;
}

void printResult(double result){
    std::cout<<"Your result is: "<<result<<std::endl;
}
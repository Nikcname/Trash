#include <iostream>

void doPrint(){
    std::cout<<"In doPrint()\n";
}

void printValue(int x){
    std::cout<<x<<std::endl;
}

void printValues(int x, int y){
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
}

int multiply(int x, int y){
    return x * y;
}

int add(int x, int y){
    return x + y;
}

int doubleNumber(int x){
    return x*x;
}

int main(int argc, char **argv)
{   
    int x;
	printValues(6, 7); //pass by value
    std::cout<<add(multiply(4, 9), 8+6)<<std::endl; //call another
    std::cout<<add(add(4, 9), 8+6)<<std::endl; //call itself
    std::cin>>x;
    std::cout<<doubleNumber(x)<<std::endl;
	return 0;
}

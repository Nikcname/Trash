#include <iostream>

void doPrint()
{
    std::cout<<"In doPrint()\n";
}

int returnNumber(){
    return 5;
}

int getValue()
{   
    int a;
    std::cout<<"Enter a number\n";
    std::cin>>a;
    return a;
}

int main(int argc, char **argv)
{
	std::cout<<"Starting main\n";
    doPrint();
    std::cout<<"Ending main\n";
    
    std::cout<<returnNumber()<<std::endl;
    std::cout<<returnNumber() + 5<<std::endl;
    
    int x = getValue();
    int y = getValue();
    
    std::cout<<x + y<<std::endl;
    
	return 0;
}

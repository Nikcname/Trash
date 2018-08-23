#include <iostream>

void callC(){
    std::cout<<"C called\n";
}

void callB(){
    std::cout<<"B called\n";
}

void callA(){
    
    callB();
    callC();
    
}

int main(int argc, char **argv)
{
	int x = 1;
    
    std::cout<<x<<" ";
    
    x+=1;

    std::cout<<x<<" ";
    
    x+=2;
    
    std::cout<<x<<" ";
    
    x+=4;
    
    std::cout<<x<<" ";
    
    callA();
    
	return 0;
}

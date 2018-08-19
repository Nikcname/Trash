#include <iostream>
#include "a.h"
#define MY_VARIABLE "SSSS"

#define PRINT_EOJ
#define PRINT_BOB

#define COUT std::cout
#define ENDL std::endl;

void doSomething();

int main(int argc, char **argv)
{
    COUT<<MY_VARIABLE<<ENDL
    
    #ifdef PRINT_EOJ
    COUT<<"EOJ"<<ENDL
    #endif

    #ifdef PRINT_BOB
    COUT<<"BOB"<<ENDL
    #endif
    
    doSomething();
    
	return 0;
}

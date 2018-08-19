#include <iostream>

void doSomething(){
    
    #ifdef COUT
        std::cout<<"printing"<<std::endl;
    #endif
    
    #ifndef COUT
        std::cout<<"not printing"<<std::endl;
    #endif
    
} 
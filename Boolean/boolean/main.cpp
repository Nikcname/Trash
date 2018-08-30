#include <iostream>

int main(int argc, char **argv)
{
    
    bool b1{false};
    bool b2{true};
    
    bool b3{!false};
    
    std::cout<<std::boolalpha<<b2<<std::endl;
    std::cout<<!b2<<std::endl;
    
    std::cout<<std::noboolalpha<<b2<<std::endl;
    std::cout<<!b2<<std::endl;
    
    std::cout<<b2<<std::endl;
    std::cout<<!b2<<std::endl;
    
	return 0;
}

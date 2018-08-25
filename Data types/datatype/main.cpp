#include <iostream>

int main()
{   
    int iVar = 5;       //copy initialization
    float fVar(50.5);   //direct initialization
    bool bVar{1};          //uniform initialization
    char cVar{'x'};
    double dVar{50.5267};
    //void vVar !!! error
    std::cout<<iVar<<std::endl;
    std::cout<<fVar<<std::endl;
    std::cout<<bVar<<std::endl;
    std::cout<<cVar<<std::endl;
    std::cout<<dVar<<std::endl;
    
	
	return 0;
}

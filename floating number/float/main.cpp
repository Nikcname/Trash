#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	
    double d1{5000.0};
    double d2{345e-5};
    
    double zero{0.0};
    double posInf{5.0/zero};
    double negInf{5.0/zero};
    double nAn{zero/zero};
    
    float f{3.12578745265974165};
    
    std::cout<<d1<<" "<<d2<<std::endl;
    std::cout<<posInf<<std::endl;
    std::cout<<negInf<<std::endl;
    std::cout<<nAn<<std::endl;
    std::cout<<7.6f<<std::endl;
    std::cout<<9876543.21<<std::endl;
    std::cout<<f<<std::endl;
    std::cout<<std::setprecision(16)<<f<<std::setprecision(6)<<std::endl;
    std::cout<<f<<std::endl;
    
}

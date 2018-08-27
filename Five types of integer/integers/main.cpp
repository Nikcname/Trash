#include <iostream>

int main(int argc, char **argv)
{
    char c;
	short s;
    int i;
    long l;
    long long ll;
    
    signed char sc;
    signed short ss;
    signed int si;
    signed long sl;
    signed long long sll;
    
    unsigned char uc;
    unsigned short us{65535};
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    
    std::cout<<"us was: "<<us<<std::endl;
    us += 1;//overflow
    std::cout<<"us now: "<<us<<std::endl;
	std::cout<<sizeof(size_t)<<std::endl;
    
    return 0;
    
    
}

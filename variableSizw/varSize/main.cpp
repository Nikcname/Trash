#include <iostream>

int main(int argc, char **argv)
{
	std::cout<<sizeof(bool)<<" bytes\t\t bool"<<std::endl;
	std::cout<<sizeof(char)<<" bytes\t\t char"<<std::endl;
	std::cout<<sizeof(wchar_t)<<" bytes\t\t wchar_t"<<std::endl;
	std::cout<<sizeof(char16_t)<<" bytes\t\t char16_t"<<std::endl;
	std::cout<<sizeof(char32_t)<<" bytes\t\t char32_t"<<std::endl;
	std::cout<<sizeof(short)<<" bytes\t\t short"<<std::endl;
	std::cout<<sizeof(int)<<" bytes\t\t int"<<std::endl;
	std::cout<<sizeof(long)<<" bytes\t\t long"<<std::endl;
	std::cout<<sizeof(long long)<<" bytes\t\t long long"<<std::endl;
	std::cout<<sizeof(float)<<" bytes\t\t float"<<std::endl;
	std::cout<<sizeof(long double)<<" bytes\t long double"<<std::endl;
}

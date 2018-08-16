#include <iostream>

int add(int, int);
int doMath(int, int, int, int);

int main(int argc, char **argv)
{
	std::cout<<add(1,1)<<std::endl;
	std::cout<<doMath(1, 2, 4, 4)<<std::endl;
}

int add(int x, int y){
    return x + y;
}

int doMath(int first, int second, int third, int fourth){
    return first + second*third/fourth;
}

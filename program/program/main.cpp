#include <iostream>
#include "fignya.h"

int main(int argc, char **argv)
{
	int input1 = getUserInput();
    
    int op = getMathematicalOperation();
    
    int input2 = getUserInput();
    
    double result = calculateResult(input1, op, input2);
    
    printResult(result);
    
	return 0;
}


#include "functions.h"

int factorial(int n){
    if(n!=1){
	return(n * factorial(n-1));
    }
    else if (n < 0)
    	printf("Factorial of negative number is not defined\n");
    else
    	return 1;
}

#include <stdio.h>
#include <string.h>
#include<math.h>
#include <stdlib.h>


float distance(float x, float y){ //My secundary function, X=num1, y=num2
    return sqrt(x*x + y*y);       //I do my operation here because is the same, the return will give the result.
}

int main (int argc, char** argv){ //argc stands for argument count and argv stands for argument values.
	float num1= atof(argv[1]);		//Change char to float
	float num2= atof (argv[2]);		//Change char to float.
	
	printf("Hipote: %f", distance (num1, num2)); //I call my return of the first function and print
	 
	
	return 0;
}  

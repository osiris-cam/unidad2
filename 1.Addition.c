#include <stdio.h>


float add_two_num(float x, float y){ //parameter of function (Not afect the real values, is the same)
    return x+y;						//return the sume as value.
}
int main(){							//Main function
	float x, y;
	printf("Ingrese 2 numeros:\n");
	scanf ("%f %f",&x, &y);			//Save my two numbers in variable x and y
	printf ("La suma es: %f", add_two_num(x,y)); //Call the retur of first fuction.
	return 0;
}

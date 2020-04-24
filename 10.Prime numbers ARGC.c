#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv){   //argc stands for argument count and argv stands for argument values.
    int times = atoi(argv[1]); // Change char to int
    int i, cont, j; //I declare j and k for my for iterators. I declare count to praise how many times it is divisible.
    for (i = 1; i <= times; i++) { //For to my prime numbers
        cont = 0;				//My count is equal 0
        for (j = 1; j < i; j++) { //For to divide the prime number (i) by numbers from 1 to i.
            if ((i % j) == 0) { 	// prime number / (1,2,3,etc)
                cont++;				//For each divisible number store 1 in my count
            }
        }
        if(cont==1){             //If my count sote at least 1, the number is prime.
          printf("%d\n", i);
        }
    }
    return 0;
}

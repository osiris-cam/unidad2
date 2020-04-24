#include <stdio.h>


int main(int argc, char** argv){   //argc stands for argument count and argv stands for argument values.
    int times = atoi(argv[1]); // Change char to int
    int i;
    for (i = 0; i < times; i++)  //Bucle for to do FIBZBUZZ from 0 to times(range)
    {
        if (i%5==0 && i%3==0) //If if is multiple of 5 and 3
        {
            printf("FizzBuzz\n");
        } 
		else if (i%3==0) {	//if is multiple of 3
            printf("Fizz\n");
        } 
		else if (i%5==0){ // if is multiple of 5
            printf("Buzz\n");
        } 
		else{				//Print the rest of the numbers
            printf("%d\n", i);
        }
        
        
    }
}


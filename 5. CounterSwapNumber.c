#include <stdio.h>

void int_count(int *count_ptr){ //counter
    (*count_ptr)++;
}
void swapTwoNumbers(int *a, int *b) //Change a to b
{
    int auxi = *a; //Use to variable Auxi to do a "pause" and store a
    *a = *b;
    *b = auxi;
}

int main(void){
    int count = 0, first = 5, second = 7; //variables
    printf("First: %d\n second %d\n", first, second); //Printf the original value
    swapTwoNumbers(&first, &second);
    printf("first: %d\n second %d\n", first, second); //values will be swapped

    while (count < 10); //my value of count prints to 10.
    {
        int_count(&count); //Print puntero
        printf("count %d\n", count);
    }
    return 0;
}


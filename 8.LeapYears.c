#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int i;
    int count_years = 0; //In this variable I will store the years leap
    for (i = 1500; i <= 2100; i++) { //I want to know from the 1500 year to 2100 year
        if (i%4 == 0 && i%100 != 0 || i%400 == 0) { //A leap year is divisible into 4 and 400, but not divisible into 100
            printf("%d\n", i); //When the condition is true, I print the year
            count_years++; 	//My count store 1
        }
    }
    printf("There are %d\n", count_years); //I print my count when I finished my bucle.
    return 0;
}

#include <stdio.h>

int main(int argc, char** argv){ //argc stands for argument count and argv stands for argument values.
    //int num1 = atoi(arg[1]);
    //int num2 = atoi(argv[2]);
    printf("the sum is %d \n", add_two_int(num1, num2));
    float x = atof(argv[1]);
    float y = atof(argv[2]);
    printf("the distance is %f\n", distance(x, y));
    return 0;
}

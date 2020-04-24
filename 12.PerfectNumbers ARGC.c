#include<stdio.h>
 
int main(int argc, char** argv){   //argc stands for argument count and argv stands for argument values.
    int num = atoi(argv[1]); // Change char to int
	int i,add=0; //num is the value that I will analyze and add the variable where I will check
	for(i=1;i<num;++i){ //This for is because I need to check what are the number that can be multiple of num.
		if(num%i==0){
			add=add+i; //When the number is multiply, it adds to variable add.
		}
	}
 
	if(add==num){ //If the sum is equal to the num, the number is perfect.
		printf("Perfect Number");
	}	
	else{
		printf("Not perfect number");
	}
	
	return 0;
}

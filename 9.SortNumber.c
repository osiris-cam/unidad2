#include <stdio.h> 
#include <math.h>
#include <stdlib.h>


main(){
int a,b,c;
printf("Write 3 numbers ");	scanf(" %d %d %d",&a,&b,&c); // Ask for 3 num, a, b y c

if(a<b){ //Compare a is greater than b
	if (a<c){ //c is greater than a
		if (b<c){ //c is greater than b
			printf("%d %d %d\n\n", a,b,c);
		}
		else{ //b is greater than c
			printf("%d %d %d\n\n", a,c,b);
		}
	}
	else{ 	//a is greater than c
		printf("%d %d %d\n\n", c,a,b);
	}
}

else // b is greater than a
{
	if (a<c){ //c is greater than a
		printf("%d %d %d\n\n", b,a,c);
	}
	else{ //a is greater than c
		if (c<b){ //b is greater than c
		printf("%d %d %d\n\n", c,b,a);
		}
		else{ // c is greater than b
		printf("%d %d %d\n\n", b,c,a);
		}
	}
	return 0;
}
}

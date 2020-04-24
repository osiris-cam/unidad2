/* IMPORT HEADER TO WORK ALL THE CODE */
#include <stdlib.h> //Standard library
#include <stdio.h> //Input and output
#include <string.h> //Macros and constant (strings and arrays
#include <math.h> //Math function (operations)

/*	OPERATORS
 + //plus
 - //minus 
 = //equal
 ++ //increment
 -- //decrement
 == //relational equal
 * //multiplication
 / //division
 % //modulus
 < //less than
 > //greater than
 <= //less than equal to
 >= //greater than equal to
 =! //not equal to
 && //logical and
 || //logical or */

/*	VARIABLES
 double :double-precision floating value
 long: are often 4 bytes
 boolean:used for storing logical values
 unsigned: data modifier
 
 		print:
 		
 %d : integer
 %3d:integer with minimum of length 3 digits 
 %s":string
 %f:float
 %ld:long
 %3.2f:minimum 3 digits left and 2 digits right decimal float
 %7.4s:can be done with strings too
 %c: char
 %p: pointer
 %x: hexadecimal
 %o: octal
 %%: prints %
 
 */
 
 
 /* CAST
 atoi:convert string to integer
 atof:convert string to double
 atol:convert string to long integer*/
int main (){
	int a=12;
	unsigned int ;
	float b=12.5;
	char d='5';
	char str[20];
	int val;
	
	printf("int: %d %d\n float: %f\n char:%c\n ",a,b,d);
	strcpy(str, "98993489");
   	val = atoi(str);
   	printf("String value = %s, Int value = %d\n", str, val);
	
				/*BUCLES*/
//FOR
int i;
printf("FOR\n");
for (i=1; i<=10;i++){
	printf ("%i\n",i);
}
//WHILE
int j=1;
printf("WHILE:\n");
while (j<=10){
	printf ("%i\n",j);
	j++;		
}	

//DO WHILE
int k=1;
printf("DO WHILE\n");
do{
	printf ("%i\n",k);
	k++;	
}	while (k<=10);

/* IF ELSE*/
printf("IF ELSE\n");
if (a=12){
	printf("TRUE\n");
}
else{
	printf("FALSE\n");
}

/*					SWITCH
char ch;
printf("Introduzca una vocal: ");
ch=getchar();
switch(ch) {
	case 'a': puts("Se ha pulsado una a.");
	break;
	case 'e': puts("Se ha pulsado una a.");
	break;
	case 'i': puts("Se ha pulsado una a.");
	break;
	case 'o': puts("Se ha pulsado una a.");
	break;
	case 'u': puts("Se ha pulsado una a.");
	break;
default: puts("Error");
} */

/* 				POINTER:
 &variable
 *variable
 
 
*/
int n=40;
printf("PUNTERO");
printf("%i\n",n); //Value of n
printf("%p",&n); //memory position
	
	
	
	return 0;
}


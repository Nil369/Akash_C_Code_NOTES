# include <stdio.h>

void operators(){
 int a,b;
 a = 10;
 b = 5;
 printf("sum = %d\n" , a+b);
 printf("difference = %d\n", a-b);
 printf("multiplication = %d\n", a*b);
 printf("division = %d\n", a/b);
 printf("modulus = %d\n", a%b);	
}

void ascii(){
char c = 'A';
printf("\nASCII value of % c is %d \n",c,c);
// Note => ASCII value of UPPERCASE Letter => 65-90 & that of LowerCase letter is 97-122
}

void simpleIntrest(){
int p,r,t, SI;
printf("Enter the value of Principle : ");
scanf("%d",&p);
printf("\nEnter the rate of intrest: ");
scanf("%d",&r);
printf("\nEnter the value of Time : ");
scanf("%d",&t);

SI = (p*r*t)/100;
printf("The value of Simple Intrest =  %d",SI);
}

void prepro(){

 	int a =5;
 	int d = a++;
 	int f = ++a;
 	printf("post-increament = %d \n ", d);
 	printf("pre-increament = %d \n ", f);
 	
 	int b = 6;
 	int c = b--;
 	int e = --b;
 	printf("post-decremental  = %d \n ", c);
 	printf("pre-decremental  = %d \n ", e);
}
 
int main(){
// Q1. Write a program to print & demonstrate all Arithmetic operators in C
operators();

// Q2. WRITE A PROGRAM IN C TO SHOW THE ASCII Value of a character value in C
ascii();


//Q3. Write a program to calculate the simple intrest taking input from tt=he user 
simpleIntrest();

//Q4.Write a program in C to show usage of pre & post incremental & decremental operator
prepro();

return 0;
}

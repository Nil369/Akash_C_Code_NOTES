#include <stdio.h>
int sum(int a, int b);//Decleration-1 =>  // With arguments and with return value 
void printstar(int n) // Decleration & Definition-2 =>With arguments and without return value 
{
    for(int i = 0; i < n; i++)
    {
         printf("%c", '*\n');
    } 
}


int takenumber() //Decleration & Definition-3 =>Without arguments and with return value 
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    return i;
}

//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*\n");
	} 
} 
 

int main()
{
    int a, b, c,d;
    a = 9;
    b = 87;
    c = sum(a, b);//Call-1

    printstar(7);//Call-2

    d = takenumber(); //Call-3
    Star_pattern();//Call-4
    printf("The sum is %d \n", c);
    printf("The number entered is %d \n", d);
    return 0;
}


int sum(int a, int b) //Definition-1
{
    return a + b;
}

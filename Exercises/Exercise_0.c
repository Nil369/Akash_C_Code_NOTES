// Task: Given a five digit integer, print the sum of its digits.

#include <stdio.h>

int main(){
    
    int num;
    int a,b,c,d,e,sum;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    a = num % 10;
    b = (num / 10) % 10; 
    c = (num / 100) % 10; 
    d = (num / 1000) % 10; 
    e = (num / 10000) % 10;
    
    sum = a + b + c + d + e;
    printf("%d", sum);

    return 0;
}


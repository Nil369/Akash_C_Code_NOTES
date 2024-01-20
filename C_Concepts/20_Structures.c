#include <stdio.h>
#include <string.h>

struct Students
{
    int id;
    char name[60];
    int marks;
}Akash,Ravi,Shankar;

// struct Students Akash,Ravi,Shankar;

int main(){
   
    Akash.id= 1;
    Akash.marks = 99;
    
    Ravi.id= 2;
    Ravi.marks = 90;
   
    Shankar.id= 3;
    Shankar.marks = 100;

    strcpy(Akash.name,"My name is Akash");
    printf("%s\n",Akash.name);
    printf("Marks of Akash i.e Id:%d is %d\n",Akash.id,Akash.marks);

    //Similarly U can print any other students name

    return 0;
}
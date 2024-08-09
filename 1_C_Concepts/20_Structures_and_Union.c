#include <stdio.h>
#include <string.h>

// Declearing Structures in C :
struct Students
{
    int id;
    char name[60];
    int marks;
}Akash,Ravi,Shankar;

// struct Students Akash,Ravi,Shankar;

//Unions are very Similar to Structures but it uses only shared memory. Matlabh Ye to ye kam hoga warna wo

// Declearing Unions in C : 
union Employee
{
    int _id;
    int Salary;
    char fav_char;
    char name[34];
};

int main(){
   
   // Initialising & Accessing Structures : 
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

    union Employee e1;
    strcpy(e1.name, "Ram");
    e1.fav_char = 'u';
    e1.Salary = 45000;
    e1._id = 1;

    printf("The id is %d \n", e1._id);
    printf("The marks is %d \n", e1.Salary);
    printf("The fav_char is %c \n", e1.fav_char);
    printf("The name is %s \n", e1.name);

    return 0;
}
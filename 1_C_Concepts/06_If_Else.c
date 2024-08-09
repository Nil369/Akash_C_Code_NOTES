#include <stdio.h>
int main( ) { 
//********** IF-ELSE LADDER: *********** 
int age ;
printf ( "Enter your age:  " ); 
scanf ( "%d", &age );

printf("Your age is %d\n",age);

if ( age >= 18 ){  
printf ( "You Can Vote!");}

else if(age < 10){
printf("You are still a kid You have to be atleast 18 years to vote ");
}

else if(age >= 13){
printf("You are a teenager now! But You have wait for few more years to vote");
}

else{
printf("You Cannot Vote");
}

return 0; 
}

// *********** NESTED IF: **************

/*nt  main( ) { 
int   a;
printf ( "Enter either 0 or 1 " ) ; 
scanf ( "%d", &a ) ;
 if ( a == 1 ){ 
 printf ( "Number 1 is entered!" ) ;  }
else  { 
if ( a == 0 ){   
printf ( "Number 0 is entered" ) ;}  
else {  
printf ( "Wrong Input" ) ;  }
}
return 0;
} 
*/


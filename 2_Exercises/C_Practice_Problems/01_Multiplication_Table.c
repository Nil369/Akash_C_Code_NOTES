# include <stdio.h>
 
int main(){
    int num;
    printf("Enter the no.You want multiplication table of: ");
    scanf("%d",&num);
    printf("\n\n=========================== The multiplaction of %d is as follows: =================================\n\n",num);
    
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
    }
return 0;
}
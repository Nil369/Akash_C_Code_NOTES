# include <stdio.h>
 
int main(){
    int n,sum=0;
    printf("Enter the last natural number you want sum of:");
    scanf("%d",&n);
    //Sum =1+2+3+.....+n

    //Run in linear time:
    // for(int i=1;i<=n;i++){
    //     sum +=i;
    // }
    // printf("Sum of first %d natural nos. is  %d",n,sum);

    //Run in constant time:
    sum = (n*n + n)/2;
    printf("Sum of first %d natural nos. is  %d",n,sum);

return 0;
}
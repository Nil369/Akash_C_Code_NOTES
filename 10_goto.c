#include <stdio.h>

int main()
{ //GOTO SHOULD BE AVOIDED AS IT CREATES CONFUSSION FOR FELLOW PROGRAMMERS
    // label:
    //     printf("we are inside label");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end");

    //1 advantage of using goto:
    int num;
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for(int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end; // directly jumps to end => goto=> Udhar jao=>End(here)
            }
        }
        
    }
    end://Direct idhar jump kar jayega
    

    return 0;
}


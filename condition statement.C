#include<stdio.h>

int main()

{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    if(a>=b && a>=c)
        {
        printf("%d is greater",a);
    }

    else if(b>=c && b>=c){
        printf("%d is greater",b);
    }

    else{
        printf("%d is greater",c);
    }
    return 0;
}

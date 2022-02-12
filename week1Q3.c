#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    int b=a%2;
    switch(b){
        case 0:
        printf("Your number is Even");
        break;
        case 1:
        printf("Your number is Odd");
        break;
        return 0;
    }
}
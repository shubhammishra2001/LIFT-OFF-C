#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int c;
    printf("Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division\n");
    scanf("%d",&c);
    switch(c){
    case 1:
    printf("Addition of two numbers is %d\n",a+b);
    break;
    case 2:
    printf("Subtraction of numbers is %d\n",a-b);
    break;
    case 3:
    printf("Multiplication of two numbers is %d\n",a*b);
    break;
    case 4:
    printf("Division of two numbers is %d",a%b);
    break;
    }
    return 0;
}
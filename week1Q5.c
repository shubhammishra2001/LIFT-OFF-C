#include<stdio.h>
#define pi 3.14
int main()
{
    float r;
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    int a;
    printf("press 1 for diameter\n press 2 for circumference\n press for 3 for area\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Diamter of circle is:%f",2*r);
        break;
        case 2:
        printf("circumferance of circle is %f",2*pi*r);
        break;
        case 3:
        printf("area of circle is %f",pi*r*r);
        break;
    }
    return 0;
}
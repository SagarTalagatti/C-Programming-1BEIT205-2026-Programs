#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the lengths of the 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        if(a==b && b==c){
            printf("It is an equilateral triangle\n");
        }
        else if(a!=b && b!=c && a!=c){
            printf("It is a scalene triangle\n");
        }
        else{
            printf("It is a isoceles triangle\n");
        }
    }
    else{
        printf("The three sides do not form a triangle!!!\n");
    }

    return 0;
}

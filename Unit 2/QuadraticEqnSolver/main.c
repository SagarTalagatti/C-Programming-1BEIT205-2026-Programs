#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,r1,r2;

    printf("Enter the values of coefficients of the quadratic equation(a,b,c): ");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0 && b==0){
        printf("Invalid coefficients entered!!!\n");
    }
    else if(a==0){ //Linear eqn
        printf("This is a linear equation. It has only 1 real root:\n");
        r1 = -c/b;
        printf("The root is: %.3f\n",r1);
    }
    else{
        d = pow(b,2) - 4 * a * c;

        if(d==0){
            printf("The two roots are equal and real\n");
            r1 = r2 = -b / (2 * a);
            printf("The roots are:\n");
            printf("%.3f and %.3f\n",r1,r2);
        }
        else if(d > 0){
            printf("The two roots are distinct and real\n");
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("The two roots are: %.3f and %.3f\n",r1,r2);
        }
        else{
            printf("The two roots are distinct and complex\n");
            float real, imag;
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);
            printf("The two roots are:\n");
            printf("%.3f + i%.3f\n",real,imag);
            printf("%.3f - i%.3f\n",real,imag);
        }
    }

    return 0;
}

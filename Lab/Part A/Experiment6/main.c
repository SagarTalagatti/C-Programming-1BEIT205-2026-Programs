#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d;
    float root1, root2, real, imag;

    printf("Enter the 3 coefficients of the quadratic equation (a,b,c): ");
    scanf("%f %f %f",&a,&b,&c);

    if(a==0 && b==0){
        printf("Invalid coefficients entered...\n");
    }
    else if(a==0){
        printf("It is a linear equation and has only 1 root.\n");
        printf("The root = %f\n",(-c/b));
    }
    else{
        d = pow(b,2) - 4 * a * c;

        if(d > 0){ // real and distinct roots
            printf("The roots are real and distinct\n");
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("The roots are:\n");
            printf("Root1 = %f, Root2 = %f\n",root1,root2);
        }
        else if(d == 0){ // real and equal roots
            printf("The roots are real and equal\n");
            root1 = root2 = -b / (2 * a);
            printf("The roots are:\n");
            printf("Root1 = %f, Root2 = %f\n",root1,root2);
        }
        else{ // complex and distinct roots
            printf("The roots are complex and distinct\n");
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);
            printf("The roots are:\n");
            printf("Root1 = %f + i(%f), Root2 = %f - i(%f)",real,imag,real,imag);
        }
    }

    return 0;
}

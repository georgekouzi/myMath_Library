/*
Main 
*/

#include<stdio.h>
#include "myMath.h"
int main(int argc, char const *argv[])
{



    printf("Please inset a real number: \n");
double x;
scanf("%lf",&x);

float f1=sub(add((float)Exp((int)x),(float)Pow(x,3)),2);


printf("\n The value of f(x) = e^x +x^3−2 at the point %.4f  is: %.4f" ,x,f1);

float f2=add((float)mul(x,3),(float)mul(Pow(x,2),2));

printf("\n The value of f(x) = 3x + 2X^2 at the point %.4f  is: %.4f" ,x,f2);


float f3=sub((float)div(mul(Pow(x,3),4),5) ,(float)mul(x,2));
printf("\n The value of f(x) = (4x^3)/5 -2x  at the point %.4f  is: %.4f" ,x,f3);




















    return 0; 
}

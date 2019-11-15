#include "myMath.h"

double Exp(int x){


double e=2.71828;

double result_of_e=1;

for (int i = 0; i < x; i++)
{
    result_of_e*=e;
}

return result_of_e;

}

double Pow(double x , int y){

double result_of_power=1;

    for (int i = 0; i <y; i++)
    {
   result_of_power*=x;  
    }
return result_of_power;

}
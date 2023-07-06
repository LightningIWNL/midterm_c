#include "stdio.h"
#define line printf("++++++++++++++++++++++++++++++++\n");
void main(){
    float res1,res2,res3,sumRes;
    line
    printf("Program Resistance\n");
    line
    printf("Input Resistance1: ");
    scanf("%f",&res1);
    printf("Input Resistance2: ");
    scanf("%f",&res2);
    printf("Input Resistance3: ");
    scanf("%f",&res3);
    line
    sumRes = res1 * res2 * res3 / res1 * res2 + res2 *res3 + res1*res3;

    printf("Sum Resistance: %.2f\n",sumRes);
    line
}
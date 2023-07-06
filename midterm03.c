#include "stdio.h"
#define line printf("++++++++++++++++++++++++++++++++\n");
void main(){
    float celc,farh;
    line
    printf("Program Celcius to Farenheit\n");
    line
    printf("Input Celcius: ");
    scanf("%f",&celc);
    farh = celc * 9/5 +32;
    line
    printf("Farenheit is: %.2f\n",farh);
    line
}
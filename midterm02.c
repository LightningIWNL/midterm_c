#include "stdio.h"
#define line printf("++++++++++++++++++++++++++++++++\n");
void main(){
    char product_name;
    int product_id,product_price;
    float product_sale;
    line
    printf("Program Price Sale\n");
    line
    printf("Input ProductID: ");
    scanf("%d",&product_id);
    printf("Input Product Name: ");
    scanf("%s",&product_name);
    printf("Input Product Price: ");
    scanf("%d",&product_price);
    line
    product_sale = product_price * 0.75 *1.07;

    printf("Product Sale: %.2f\n",product_sale);
    line
}
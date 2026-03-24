#include<stdio.h>

int main(){

    float farenheit,celsius;                                                                                                                                                                                                                                                                                                                                                                                     
    printf("enter the value of temperature in farenheit");
    scanf("%f",&farenheit);

celsius=(farenheit-32)/9*5;

printf("%.2f C",farenheit);

return 0;
}

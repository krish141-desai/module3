// Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t

#include <stdio.h>

int main() {
    double principal_amount, rate, time_duration, amount, compound_interest; 
    printf("Enter the principal amount: ");
    scanf("%lf",&principal_amount);
    printf("Enter the rate of interest: ");
    scanf("%lf",&rate);
    printf("Enter the time duration: ");
    scanf("%lf",&time_duration);
     amount = principal_amount*((pow((1+rate/100),time_duration)));  
    compound_interest = amount - principal_amount; 
    printf(" The compound interest is: %lf",compound_interest);
    
}
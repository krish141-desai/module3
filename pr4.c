// Find Area of Square formula : a = a2

#include <stdio.h>
int main(){
    int side, area;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("Area of the Square having side %d is: %d", side, area);
    
}
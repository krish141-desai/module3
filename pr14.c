// Perform 2D matrix array
#include <stdio.h>

int main(void) {
    int arr[2][3] = {{31, 12, 11}, {81, 91, 110}};
    int *p[2];
    p[0] = arr[0]; 
    p[1] = arr[1]; 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
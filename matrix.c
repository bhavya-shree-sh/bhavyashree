#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;
    
    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    
    
    int a[rows][cols], b[rows][cols], c[rows][cols];
    
    
    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
        for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    

    printf("The sum of the matrices is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", c[i][j]); 
        }
        printf("\n"); 
    }
    
    return 0;
}

Enter the number of rows and columns: 2
3
Enter the elements of matrix A:
3
3
4
3
3
3
Enter the elements of matrix B:
3
5
6
7
3
5
The sum of the matrices is:
6 8 10 
10 6 8 

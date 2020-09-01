#include <stdio.h>
int main() {
    int n, a = 1;
    printf("Enter the number of rows: ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
                a = 1;
            else
                a = a * (i - j + 1) / j;
            printf("%4d", a);
        }
        printf("\n");
    }

}
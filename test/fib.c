#include <stdio.h>
#include <limits.h>

void fibonacci(int n) {
    int i, a = 0, b = 1, c;
    while (n > 0) {
        
        c = a + b;
        if (c > INT_MAX) {
            printf("INT_MAX reached.");
            break;
        }
        
        a = b;
        b = c;
        printf("%d", a);
        if (i == 1 )
            continue;
        else
            printf(", ");
        
        n--;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    printf("\n");
    return 0;
}

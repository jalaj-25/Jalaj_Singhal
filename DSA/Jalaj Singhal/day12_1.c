#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1){
        return n;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %d-th Fibonacci number is: %d\n", n, result);
    return 0;
}

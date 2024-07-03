#include <stdio.h>
int isPalindrome(int number, int originalNumber) {
    if (number == 0){
        return originalNumber;
    }
    originalNumber = isPalindrome(number / 10, originalNumber);
    if (number % 10 == originalNumber % 10) {
        return originalNumber / 10;
    } else {
        return -1;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = isPalindrome(number, number);
    if (result == -1 || result == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

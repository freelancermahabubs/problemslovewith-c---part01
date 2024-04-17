#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Extract the digits
    int first_digit = N / 10;
    int second_digit = N % 10;

    // Check if one digit is 0
    if (first_digit == 0 || second_digit == 0) {
        printf("YES\n");
    } else {
        // Check if one digit is divisible by the other
        if ((first_digit % second_digit == 0) || (second_digit % first_digit == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Loop through numbers from 1 to N and check if they are divisors of N
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i); // If i divides N evenly, print it
        }
    }

    return 0;
}

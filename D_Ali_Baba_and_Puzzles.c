#include <stdio.h>

// Function to check if a given combination of operations results in the target number
int isPossible(long long a, long long b, long long c, long long d) {
    // Try all possible combinations of operations
    if (a + b + c == d) return 1;
    if (a + b - c == d) return 1;
    if (a + b * c == d) return 1;
    if (a - b + c == d) return 1;
    if (a - b - c == d) return 1;
    if (a - b * c == d) return 1;
    if (a * b + c == d) return 1;
    if (a * b - c == d) return 1;
    if (a * b * c == d) return 1;
    return 0;
}

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Check if it's possible to obtain the fourth number
    if (isPossible(a, b, c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); 
    }

    long long absoluteSum = 0;
    for (int i = 0; i < N; i++) {
        absoluteSum += A[i];
    }
   
    if (absoluteSum < 0) {
        absoluteSum *= -1;
    }

    printf("%lld\n", absoluteSum); 
    return 0;
}

#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

 
    long long option3 = (n < m) ? ((n < k) ? n : k) : ((m < k) ? m : k);

    n -= option3;
    m -= option3;
    k -= option3;


    long long option2 = 0;
    if (n >= 2 && k >= 1) {
        long long min_count = (n / 2 < k) ? (n / 2) : k;
        option2 = min_count;
    }

    long long max_katryoshkas = option3 + option2;

    printf("%lld\n", max_katryoshkas);

    return 0;
}

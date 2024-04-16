#include <stdio.h>
int main(){
  long long  int a,b;
    scanf("%lld %lld", &a, &b);
    int sum = a+b;
    printf("%lld + %lld = %d\n", a, b, sum);
    int mul = a*b;
    printf("%lld * %lld = %d\n", a, b, sum);
    int sub = a-b;
    printf("%lld - %lld = %d\n", a, b, sum);
    return 0;
}
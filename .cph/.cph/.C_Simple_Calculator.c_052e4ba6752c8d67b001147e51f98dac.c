#include <stdio.h>
int main(){
int num1, num2;
scanf("%d %d", &num1, &num2);
// Calucate and display the summation 
printf("%d + %d = %d\n", num1, num2, num1 + num2);

printf("%d - %d = %d\n", num1, num2, num1 - num2);
printf("%d * %d = %d\n", num1, num2, num1 * num2);
if(num2 != 0){
    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
}
else{
    printf("Cannot Divide by zero.\n");
}


    return 0;
}
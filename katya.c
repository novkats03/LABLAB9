#include <stdio.h>
//программа является учебной
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%f", (float)a / (float)b);
    return 0;
}
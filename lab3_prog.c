#include <stdio.h>

int main() {
int a,b;
scanf("%x",&a); // в шестнадцатеричной
printf("%o\n",a); // в восьмиричной
printf("%x %x\n",a,a << 2);
printf("%x %x\n", a, ~a); // ~ битовая операция отрицания
scanf("%x",&b);
printf("%x", b|a); // | битовая операция или
    return 0;
}

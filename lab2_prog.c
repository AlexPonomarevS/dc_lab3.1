#include <stdio.h>
#include <math.h>

int main() {
    double z1,z2;
    int a;
    scanf("%d", &a);
    z1=(((a+2)/ sqrt(2*a)) - (a/(sqrt(2*a)+2)) + (2/(a-sqrt(2*a)))) * ((sqrt(a)-sqrt(2))/(a+2));
    z2=1/(sqrt(a)+sqrt(2));
    printf("z1 = %f \n", z1);
    printf("z2 = %f \n", z2);
    return 0;
}

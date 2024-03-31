#include "iostream"
//#include "../../GCD/Euclidian Algorithm.cpp"
#define ulld unsigned long long int
#include "cmath"




void FSOE() {
    int a;
    printf("%s\n", "Enter the prime number");
    scanf("%d", &a);
    int b = 2;
    int count = 0;
    while (b<sqrt(a) + 1) {
        //printf("%d %d %d\n", b, count, a % b);
        //printf("%d", b);

        if (a % b == 0) {
            printf("%d %d %d\n", b, count, a % b);
            count++;
        }
        b++;
    }
    if (count == 0) {
        printf("%s\n", "its prime");
    }
    else {
        printf("%s\n", "its not prime");
    }
}


void FSOE_llu() {
    ulld a;
    //printf("%s\n", "Enter the prime number");
    scanf("%llu", &a);
    ulld b = 2;
    ulld count = 0;
    //printf("%llu %llu %llu", b, count, a % b);
    while (b<sqrtl(a) + 1) {

        if (a % b == 0) {
            count++;
        }
        b++;
    }
    if (count == 0) {
        printf("%s\n", "its prime");
    }
    else {
        printf("%s\n", "its not prime");
    }
}
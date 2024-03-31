#include "iostream"
//#include "../../GCD/Euclidian Algorithm.cpp"
#define ulld unsigned long long int





void SOE() {
    int a;
    printf("%s\n", "Enter the prime number");
    scanf("%d", &a);
    int b = 2;
    int count = 0;
    while (b<a) {
        //printf("%d %d %d\n", b, count, a % b);
        //printf("%d", b);

        if (a % b == 0) {
            //printf("%s %d %d %d\n","check : ", b, count, a % b);
            count++;
        }
        b++;
    }
    printf("%d", count);
    if (count == 0) {
        printf("%s\n", "its prime");
    }
    else {
        printf("%s\n", "its not prime");
    }
}


void SOE_llu() {
    ulld a;
    //printf("%s\n", "Enter the prime number");
    scanf("%llu", &a);
    ulld b = 2;
    ulld count = 0;
    //printf("%llu %llu %llu", b, count, a % b);
    while (b<a) {
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
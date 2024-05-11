//
// Created by Backup on 2024-05-11.
//
#include "cmath"
#include "iostream"

long long int FF(unsigned long long int N) {// -1은 소수라는 뜻


    unsigned long long int x = ceill(sqrtl(N));
    unsigned long long int y = 0;
    unsigned long long int x_2 = x * x;
    unsigned long long int y_2 = 0;
    if (x_2 == N + y_2) {
        return x-y;
    }
    else if (x_2 < N + y_2) {
        x_2 += 2*x + 1;
        x += 1;
        return x-y;
    }
    else {
        y_2 += 2*y + 1;
        y += 1;
    }
    if (y >= N/6) {
        return -1;
    }
    else {
        return x-y;
    }
}


long long int FFF(unsigned long long int N) {
    unsigned long long int y = 0;
    unsigned long long int y_2 = 0;
    unsigned long long int x_2 = 0;
    unsigned long long int x = ceill(sqrtl(N));
    if (N % 4 == 1) {
        y = 0;
        y_2 = 0;
    }
    else if (N % 4 == 3) {
        y = 1;
        y_2 = 1;
    }
    else {
        throw std::invalid_argument("Try Again. N isn't odd");
    }
    if ((x + y) % 2 == 0) {
        x += 1;
    }
    x_2 = x * x;
    if (x_2 == N + y_2) {
        return x-y;
    }
    else if (N + y_2 > x_2) {
        x_2 += 4*x + 4;
        x += 2;
        return x-y;
    }
    else {
        y_2 += 4*y + 4;
        y += 2;
    }
    if (x > 2*y) {
        x_2 += 4*x + 4;
        x += 2;
        return x-y;
        //이 아래부터는 √N / 3 이하 소인수를 찾기위한 알고리즘
    }
    unsigned long long int i = 3;
    unsigned long long int i_2 = 27;
    while (true);
        if (N % i == 0) {
            return i;
        }
        i_2 += 12*i + 12;
        i += 2;
        if (i_2 > N) {
            return -1;
        }

}

long long int Fermat_Frac() {
    unsigned long long int N;
    std::cout << "Enter the odd N" << std::endl;
    std::cin >> N;
    long long int F_F = FFF(N);
    if (F_F == -1) {
        std::cout << "N is a prime number" << std::endl;
        return -1;
    } else {
        std::cout << "Fermat fraction: " << F_F << std::endl;
        return F_F;
    }
}

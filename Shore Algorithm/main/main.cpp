//
// Created by Backup on 2024-04-06.
//
#include "../../GCD/Euclidian Algorithm.cpp"
#include "main.h"
#include "iostream"
#include "shore.cpp"


using namespace std;



int main_shore() {
    ulld N;
    cout << "Enter N";
    cin >> N;
    cout << "check b4";
    returns_g_r g_r = shore(N);
    cout << "check after\n";
    ulld g = g_r.g;
    cout << "check input g\n";
    ulld r = g_r.r;
    cout << "check input r\n";
    ulld first_g = powl(g, r/2) + 1;
    printf("%s %llu\n", "check input first_g : ", first_g);
    ulld second_g = powl(g, r/2) - 1;
    printf("%s %llu\n", "check input second_g : ", second_g);
    ulld p = gcd_llu(first_g, N);
    printf("%s %llu\n", "check gcd", p);
    ulld q = N / p;
    cout << "check get q";
    printf("%s %llu %llu\n", "p, q", p, q);
    return 0;
}
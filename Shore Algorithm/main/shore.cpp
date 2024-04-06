#include "cmath"
#include "iostream"
#include "random"
#include <cstdlib>
#include "main.h"
#include "../../random_custom.cpp"


using namespace std;


returns_g_r shore(ulld N) {
    cout << "check shore start\n";
    ulld g = random_custom_ulld((ulld) 0, (ulld) ceil(sqrt(N)));
    ulld save_g = g;
    cout << g, "\n", "check rand\n";
    if (gcd(g, N) != 1)
        shore(N);
    //g = 8;
    bool check_bool = true;
    ulld r = 1;
    while (check_bool) {
        printf("%s %llu %s %llu\n", "r : ", r, "mod : ", (ulld) save_g % N);
        if (g <= 2)
            shore(N);
        if ((ulld) (save_g % N) == 1) {
            check_bool = false;
            if (r < 2) {
                cout << "condition r<2";
                return shore(N);
            } else if (r % 2 == 1) {
                cout << "condition r isnt even";
                return shore(N);
            } else {
                cout << "success";
                return {g, r};


            }


        }
        save_g = (save_g * g) % N;
        r++;
    }
    return {g, r};
}
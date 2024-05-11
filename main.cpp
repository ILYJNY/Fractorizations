#include "iostream"
#include "SOE/main/SOE.cpp"
#include "SOE/main/FSOE.cpp"
#include "Shore Algorithm/main/main.cpp"
#include "Fermat Factorizations/FF.cpp"



using namespace std;



int main() {
    string answer;
    printf("%s\n", "Name the Command you will Execute");
    getline(cin, answer);
    //printf("%s", answer.c_str());
    if (answer == "SOE") {
        cout << "enter number";
        int a;
        cin >> a;
        cout << SOE(a);
    }
    if (answer == "FSOE") {
        cout << "enter number";
        int a;
        cin >> a;
        cout << FSOE(a);
    }
    if (answer == "SOE BIG") {
        cout << "enter number";
        ulld a;
        cin >> a;
        cout << SOE_llu(a);
    }
    if (answer == "FSOE BIG") {
        cout << "enter number";
        ulld a;
        cin >> a;
        cout << FSOE_llu(a);
    }
    if (answer == "Shore") {
        main_shore();
    }
    if (answer == "Fermat") {
        Fermat_Frac();
    }
    return 0;


}

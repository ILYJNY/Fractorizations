#include "iostream"
#include "SOE/main/SOE.cpp"
#include "SOE/main/FSOE.cpp"
#include "GCD/Euclidian Algorithm.cpp"


using namespace std;



int main() {
    string answer;
    printf("%s\n", "Name the Command you will Execute");
    getline(cin, answer);
    //printf("%s", answer.c_str());
    if (answer == "SOE") {

        SOE();
    }
    if (answer == "FSOE") {

        FSOE();
    }
    if (answer == "SOE BIG") {

        SOE_llu();
    }
    if (answer == "FSOE BIG") {

        FSOE_llu();
    }
    return 0;


}

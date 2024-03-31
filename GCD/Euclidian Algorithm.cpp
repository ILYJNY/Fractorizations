

int gcd(int a, int b) {
    int temp;
    if (a<b) {
        temp = a;
        a = b;
        b = temp;
    }
    int rest;
    while(b != 0) {
        rest = a%b;
        a = b;
        b = rest;
    }
    return a;

}


unsigned long long int gcd_llu(unsigned long long int a, unsigned long long int b) {
    unsigned long long int temp;
    if (a<b) {
        temp = a;
        a = b;
        b = temp;
    }
    unsigned long long int rest;
    while(b != 0) {
        rest = a%b;
        a = b;
        b = rest;
    }
    return a;

}

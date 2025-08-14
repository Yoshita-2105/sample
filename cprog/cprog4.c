#include <stdio.h>

int gcd(int a, int b) {
    if (a < 0) a = -a; 
    if (b < 0) b = -b; 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num = -36;
    int den = 24;

    int div = gcd(num, den);

    num /= div;
    den /= div;

    
    if (den < 0) {
        num = -num;
        den = -den;
    }

    printf("Standard form: %d/%d\n", num, den);

    return 0;
}

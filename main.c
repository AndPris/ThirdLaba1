#include <stdio.h>
#include <math.h>

int main() {
    float x, e, y = 1, d = 1, power;
    int k;
    printf("x:\n");
    scanf("%f", &x);
    printf("k:\n");
    scanf("%d", &k);
    printf("e:\n");
    scanf("%f", &e);

    if( (k > 0 && k%2==0 && x >= 0) ||
        (k > 0 && k%2==1) ||
        (k < 0 && k%2==0 && x > 0) ||
        (k < 0 && k%2==-1 && x != 0)) {

        while (fabs(d) >= e) {
            power = 1;
            for (int i = 1; i <= abs(k) - 1; i++) {
                power *= y;
            }

            d = (x / power - y) / abs(k);
            y += d;
        }

        if(k < 0) y = 1 / y;
        printf("y = %f\n", y);
    } else {
        printf("Invalid data");
    }
    return 0;
}

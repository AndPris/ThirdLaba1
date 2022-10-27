#include <stdio.h>
#include <math.h>

int main() {
    float x, e, y = 1, d = 1, power;
    int k;
    char ch, cond=0;

    do {
        cond = 0;
        printf("x:");
        scanf("%f%c", &x, &ch);
        if(ch!='\n') {
            printf("Invalid x\n");
            cond = 1;
            fflush(stdin);
        };
    } while(cond);
    cond = 0;
    ch=' ';

    do {
        cond = 0;
        printf("k:");
        scanf("%d%c", &k, &ch);
        if(ch!='\n') {
            printf("Invalid k\n");
            cond = 1;
            fflush(stdin);
        };
    } while(cond);
    cond = 0;
    ch=' ';

    do {
        cond = 0;
        printf("e:");
        scanf("%f%c", &e, &ch);
        if(ch!='\n') {
            printf("Invalid e\n");
            cond = 1;
            fflush(stdin);
        };
    } while(cond);

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

            if(y == 0) y = -1;
        }

        if(k < 0) y = 1 / y;
        printf("y = %f\n", y);
    } else {
        printf("Incorrect x and k");
    }
    return 0;
}

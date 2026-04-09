#include<stdio.h>

int main() {
    float a = 0.1;
    double b = 0.1;

    printf("float(size %lu): %f \n", sizeof(a), a);
    printf("double(size %lu): %f \n", sizeof(b), b);

    int c = (int) a;
    int d = (int) b;

    printf("int(size %lu): %d \n", sizeof(c), c);
    printf("int(size %lu): %d \n", sizeof(d), d);

    return 0;

}

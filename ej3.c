#include<stdio.h>
#include<stdbool.h>

int main() {
    //tipos con signo:
    char c = 100;
    short s = -8000;
    int i = 123456;
    long l = 1234567890;
    //tipos sin signo (positivos):
    unsigned char uc = 101;
    unsigned short us = 2000;
    unsigned int ui = 123456;
    unsigned long ul = 1234567890;
    //de mayor tamaño:
    long long ll = -1234567890123;
    unsigned long long ull =1234567890123;
    //tipos reales:
    float f = 3.14;
    double d = 3.145;
    long double ld = 123.456;
    // punteros y booleanos:
    void* v = NULL;
    int* iv = NULL;
    bool b = true;
    
    //tipos con signo:
    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);
    //tipos sin signo (positivos):
    printf("unsigned char(%lu): %u \n", sizeof(uc), uc);
    printf("unsigned short(%lu): %u \n", sizeof(us), us);
    printf("unsigned int(%lu): %u \n", sizeof(ui), ui);
    printf("unsigned long(%lu): %lu \n", sizeof(ul), ul);
    //de mayor tamaño:
    printf("long long(%lu): %lld \n", sizeof(ll), ll);
    printf("unsigned long long(%lu): %llu \n", sizeof(ull), ull);
    //tipos reales:
    printf("float (%lu): %f \n", sizeof(f), f);
    printf("double (%lu): %f \n", sizeof(d), d);
    printf("long double(%lu): %Lf \n", sizeof(ld), ld);
    // punteros y booleanos:
    printf("puntero (%lu) \n", sizeof(v));
    printf("puntero (%lu) \n", sizeof(iv));
    printf("bool (%lu): %d \n", sizeof(b), b);

    return 0;

}
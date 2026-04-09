#include<stdio.h> //necesario para el printf
#include<stdint.h> //necesario para los tipos de ancho fijo

int main() {
    //con signo
    //declaro uno de cada uno
    int8_t a = 1;
    int16_t b = 1;
    int32_t c = 1;
    int64_t d = 1;

    //imprimo su tamaño con %lu
    printf("int8_t mide: %lu bytes\n", sizeof(a));
    printf("int16_t mide: %lu bytes\n", sizeof(b));
    printf("int32_t mide: %lu bytes\n", sizeof(c));
    printf("int64_t mide: %lu bytes\n", sizeof(d));
    
    //sin signo
    //declaro uno de cada uno
    uint8_t e = 1;
    uint16_t f = 1;
    uint32_t g = 1;
    uint64_t h = 1;

    //imprimo su tamaño con %lu 
    printf("uint8_t mide: %lu bytes\n", sizeof(e));
    printf("uint16_t mide: %lu bytes\n", sizeof(f));
    printf("uint32_t mide: %lu bytes\n", sizeof(g));
    printf("uint64_t mide: %lu bytes\n", sizeof(h));

    return 0;

}

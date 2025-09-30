#include <stdio.h>
#include "./../../include/calculator.h"

double _add(double a, double b) {
    return a + b;
}

double _sub(double a, double b) {
    return a - b;
}

double _mul(double a, double b) {
    return a * b;
}

double _div(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "Erreur : division par zéro !\n");
        return 0;
    }
    return a / b;
}

double _car(double a) {
    return a * a;
}

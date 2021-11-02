//
// Created by luchdotcom on 2.11.21 г..
//

#include <stdio.h>
#include <math.h>

int triangleCalc(unsigned a, unsigned b, unsigned c, double *area, double *perimeter);

int main() {
    unsigned a = 3, b = 2, c = 4;
    double area;
    double perimeter;
    triangleCalc(a, b, c, &area, &perimeter);
    printf("perimeter= %lf", perimeter);
    printf("area = %lf", area);

    return 0;
}

int triangleCalc(unsigned a, unsigned b, unsigned c, double *area, double *perimeter) {
    if (a <= 0 && b <= 0 && c <= 0) {
        *perimeter=0;
        *area=0;
        return -1;
    }
    *perimeter = (double) (a + b + c) / 2;
    *area = sqrt(*perimeter * (*perimeter - a) * (*perimeter - b) * (*perimeter - c));
    return 0
}
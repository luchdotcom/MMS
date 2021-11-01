//
// Created by luchdotcom on 29.10.21 г..
//

#include "functionsWeek1.h"

//day1
double BMI() {
    double m, h;
    printf("Please enter mass height\n");
    scanf("%lf %lf", &m, &h);
    return m / (h * h);
}

double NewBMI() {
    double m, h;
    printf("Please enter mass height\n");
    scanf("%lf %lf", &m, &h);
    return 1, 3 * (m / (h * h * (h / 2)));
}

double circleVolume() {
    double r, h;
    printf("Please enter mass height\n");
    scanf("%lf %lf", &r, &h);
    return 2 * M_PI * r * r * h;

}

double VolumeOfHorizontalCylinder() {
    double r, h, l;
    printf("Please enter mass height\n");
    scanf("%lf %lf %lf", &r, &h, &l);
    double area = (acos((r - h) / r) * r * r) - (r - h) * sqrt((2 * r * h) - h * h);
    return area * l;
}

///day2
int floatCompare(float a, float b) {
    return fabs(a - b) < 1.0e-5f * fmax(fabs(a), fabs(b));
}

int floatCompare1(float a, float b) {
    return fabs(a - b) < 1.0e-8f * fmax(fabs(a), fabs(b));
}

int floatCompare2(float a, float b) {
    return fabs(a - b) < 1.0e-10f * fmax(fabs(a), fabs(b));
}

int floatCompare3(float a, float b) {
    return fabs(a - b) < 1.0e-15f * fmax(fabs(a), fabs(b));
}

int floatCompare4(float a, float b) {
    return fabs(a - b) < 1.0e-25f * fmax(fabs(a), fabs(b));
}

///day3
int binaryCalc() {

    int n;
    do {
        printf("Please enter digit\n");
        scanf("%d", &n);
    } while (n < 0 || n > 9 && n < 'a' || n > 'z');
    printf("n= %ld",(int)n);
    unsigned s;
    do {
        printf("Please enter system\n");
        scanf("%d", &s);
    } while (s < 2 || s > 36);


    unsigned se;
    do {
        printf("Please enter exit binary system\n");
        scanf("%d", &se);
    } while (se < 2 || se > 36);



int arr[100];
    while (n--){
        n/=10;
        n%10;

    }

}

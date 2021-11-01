#include <stdio.h>
#include <stdarg.h>
#include "functionsWeek1.h"

int sumNums(int cnt, ...) {
    int sum = 0;
    va_list args;
    va_start(args, cnt);
    for (int i = 0; i < cnt; i++) {
        sum += va_arg(args,
        int);

    }
    va_end(args);
    return sum;

}

int sumEvan(int cn, ...) {
    int cnt = 0;
    va_list args;
    va_start(args, cn);
    for (int i = 0; i < cn; ++i) {
        if (!(va_arg(args,int)&1)){
            cnt++;
        }
    }
    va_end(args);
    return cnt;
}

double everage(double in, ...) {
    double sum = 0;
    va_list args;
    va_start(args, in);
    for (int i = 0; i < in; ++i) {
        sum += (double) va_arg(args,
        int );
    }
    va_end(args);
    return sum / 2;
}

//void printArg(char *format,...) {
//    va_list args;
//    va_start(args, format);
//    while (*format){
//        switch (*format) {
//            case 'd':
//                printf("%d \n", va_arg(args,int));
//                break;
//            case 'o':
//                printf("%o \n", va_arg(args,int));
//                break;
//            case '':
//                printf("%o \n", va_arg(args,int));
//                break;
//        }
//
//    }
//
//}

int main() {
//    printf(" BMI is = %f",BMI());
//    printf(" BMI is = %f",NewBMI());
//    printf(" circleVolume is = %f",circleVolume());



//    float a = 10000.0f * 0.1f;
//    float b = 0.0f;
//    for (int i = 0; i < 100000; i++, b += 0.1f);
//    if (floatCompare3(a, b)){
//        printf("== Equals\n");
//    } else {
//        printf("== Not equals\n");
//    }
    binaryCalc();
    return 0;
}
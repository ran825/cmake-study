/**
 * 该程序用于计算数的指数幂，同时用来测试多个文件的cmake文件运行
 * */
#include <stdio.h>
#include <stdlib.h>
#include "MathFunction.h"

int main(int argc, char *argv[])
{
    if (argc < 3){
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}
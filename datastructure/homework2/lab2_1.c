#include<stdio.h>
int main(void)
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("Size of char: %ld byte\n", sizeof(charType));       // char 변수의 크기
    printf("Size of int: %ld byte\n", sizeof(integerType));     // int 변수의 크기
    printf("Size of float: %ld byte\n", sizeof(floatType));     // float 변수의 크기
    printf("Size of double: %ld byte\n", sizeof(doubleType));   // double 변수의 크기
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n", sizeof(char));           // char 자료형의 크기
    printf("Size of int: %ld byte\n", sizeof(int));             // int 자료형의 크기
    printf("Size of float: %ld byte\n", sizeof(float));         // float 자료형의 크기
    printf("Size of double: %ld byte\n", sizeof(double));       // double 자료형의 크기
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n", sizeof(char*));         // char 포인터의 크기
    printf("Size of int*: %ld byte\n", sizeof(int*));           // int 포인터의 크기
    printf("Size of float*: %ld byte\n", sizeof(float*));       // float 포인터의 크기
    printf("Size of double*: %ld byte\n", sizeof(double*));     // double 포인터의 크기
    return 0;
}

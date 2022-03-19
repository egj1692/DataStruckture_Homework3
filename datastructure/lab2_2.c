#include<stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;
    int ***ddptr;
    
    i = 1234;
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("-----------------------------------------\n");

    ptr = &i;
    printf("[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("-----------------------------------------\n");

    dptr = &ptr;
    printf("[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %d\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);
    printf("-----------------------------------------\n");
    
    *ptr = 7777;
    printf("[\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    printf("-----------------------------------------\n");

    **dptr = 8888;
    printf("[\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);
    printf("-----------------------------------------\n");

    
}
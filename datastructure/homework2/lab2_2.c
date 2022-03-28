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
    printf("value of i == %d\n", i);        // i의 값
    printf("address of i == %p\n", &i);     // i의 주소
    printf("value of ptr == %p\n", ptr);    // ptr의 값
    printf("address of ptr == %p\n", &ptr); // ptr의 주소
    printf("-----------------------------------------\n");

    ptr = &i;
    printf("[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);        // i의 값
    printf("address of i == %p\n", &i);     // i의 주소
    printf("value of ptr == %p\n", ptr);        // ptr의 값(i의 주소)
    printf("address of ptr == %p\n", &ptr);     // ptr의 주소(ptr의 주소)
    printf("value of *ptr == %d\n", *ptr);      // ptr에 있는 값을 주소로 하는 주소의 값
    printf("-----------------------------------------\n");

    dptr = &ptr;
    printf("[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);        // i의 값
    printf("address of i == %p\n", &i);     // i의 주소
    printf("value of ptr == %p\n", ptr);        // ptr의 값(i의 주소)    
    printf("address of ptr == %p\n", &ptr);     // ptr의 주소(ptr의 주소)    
    printf("value of *ptr == %d\n", *ptr);      // ptr에 있는 값을 주소로 하는 주소의 값    
    printf("value of dptr == %p\n", dptr);      // dptr의 값(ptr의 주소)
    printf("address of dptr == %p\n", &dptr);   // dptr의 값(ptr의 주소)
    printf("value of *dptr == %d\n", *dptr);    // dptr에 있은 값을 주소로 하는 주소의 값
    printf("value of **dptr == %d\n", **dptr);  // *dptr에 있은 값을 주소로 하는 주소의 값
    printf("-----------------------------------------\n");
    
    *ptr = 7777;        // ptr의 값을 변경
    printf("[\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);            // ptr의 값을 변경하면 i값이 변경되는지 확인 
    printf("value of *ptr == %d\n", *ptr);      // ptr의 값을 확인
    printf("value of **dptr == %d\n", **dptr);      // ptr의 값을 변경하면 ptr값이 변경되는지 확인 
    printf("-----------------------------------------\n");
    
    **dptr = 8888;  
    printf("[\n[after **dptr = 8888] \n");      
    printf("value of i == %d\n", i);            // dptr의 값을 변경하면 i값이 변경되는지 확인 
    printf("value of *ptr == %d\n", *ptr);      // dptr의 값을 변경하면 ptr값이 변경되는지 확인 
    printf("value of **dptr == %d\n", **dptr);      // dptr값이 변경
    printf("-----------------------------------------\n");

    
}
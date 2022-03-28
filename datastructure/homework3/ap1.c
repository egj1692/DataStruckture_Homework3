#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];
    int *plist[5] = {NULL,};
    plist[0] = (int *)malloc(sizeof(int));
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("value of list[0] = %d\n", list[0]);     // list[0]의 값
    printf("address of list[0] = %p\n", &list[0]);  // list[0]의 주소
    printf("value of list = %p\n", list);       // list의 값
    printf("address of list (&list) = %p\n", &list);        // list의 주소
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);     // list[1]의 값
    printf("address of list[1] = %p\n", &list[1]);      // list[1]의 주소
    printf("value of *(list+1) = %d\n", *(list + 1));   // *(list+1)의 값 = list[1]의 값
    printf("address of list+1 = %p\n", list+1);     // list+1의 값 = 주소
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);     //plist[0]에 있는 값
    printf("&plist[0] = %p\n", &plist[0]);      // plist[0]의 주소
    printf("&plist = %p\n", &plist);        // plist의 주소
    printf("plist = %p\n", plist);      //plist의 값
    printf("plist[0] = %p\n", plist[0]);        // plist[0]의 값 = 동적할당 받은 주소
    printf("plist[1] = %p\n", plist[1]);        // plist[1]의 값
    printf("plist[2] = %p\n", plist[2]);        // plist[2]의 값
    printf("plist[3] = %p\n", plist[3]);        // plist[3]의 값
    printf("plist[4] = %p\n", plist[4]);        // plist[4]의 값
    // plist[0]에 동적할당을 하면 plist에 있는 다른 인덱스에 동적할당이 안된다.
    free(plist[0]);     // 동적할당 해제
    
}
#include <stdio.h>

int main()
{
    int i, *p;
    
    i = 10;

    printf("value of i = %d\n", i);     // 변수 값
    printf("address of i = %p\n", &i);      // 변수 주소
    printf("value of p = %p\n", p);     // 생성한 포인터 값
    printf("address of p = %p\n", &p);      // 포인터 주소
    printf("dereferencing *p = %d\n", *p);      // 포인터 값을 주소로 하는 곳의 값
    
    *p = i;

    printf("\n\n----- after p = &i ------------\n\n");

    printf("value of p = %p\n", p);     // 생성한 포인터 값
    printf("address of p = %p\n", &p);      // 생성한 포인터 값이 저장된 주소
    printf("dereferencing *p = %d\n", *p);      // 포인터 값을 주소로 하는 곳의 값

    p = &i;

    printf("\n\n----- after p = &i ------------\n\n");

    printf("value of p = %p\n", p);     // 입력받은 i의 주소
    printf("address of p = %p\n", &p);      // 입력받은 i의 주소가 저장된 주소
    printf("dereferencing *p = %d\n", *p);      // 입력받은 i의 주소에 저장된 값

    return 0;
}

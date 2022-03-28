#include <stdio.h>

// 구조체 생성
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst;
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("size of student = %ld\n", sizeof(struct student));      // 위에 생성한 구조체의 크기
    printf("size of int = %ld\n", sizeof(int));     // 자료형 int형의 크기
    printf("size of short = %ld\n", sizeof(short));     // 자료형 short형의 크기
    return 0;
}
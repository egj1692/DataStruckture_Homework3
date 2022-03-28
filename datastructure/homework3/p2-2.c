#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    int one[] = {0, 1, 2, 3, 4};
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("one = %p\n", one);      // 배열 one의 값
    printf("&one = %p\n", &one);        // 배열 one의 주소
    printf("&one[0] = %p\n", &one[0]);      // 배열 one의 0번째 인덱스의 주소
    printf("\n");
    print1(&one[0], 5);
    return 0;
}

// 배열을 사용하는 방법 2 (call by reference)
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}
#include <stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;
    /* for checking call by reference */
    printf("[-----[Jungi_Lee] [2017035135]-----]\n");
    printf("address of input = %p\n", input);       // input의 주소
    answer = sum(input, MAX_SIZE);      // 
    printf("The sum is: %f\n", answer);
}

// sum : list에 들어있는 값의 합을 출력하는 함수
// 배열을 출력하는 함수 방법 1 (call by reference)
float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       // list의 값
    printf("address of list = %p\n\n", &list);      // list의 주소
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}
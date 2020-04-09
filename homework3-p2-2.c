/*
 ============================================================================
 Name        : homework3-p2-2.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>

void print1(int *ptr, int rows);      // 각 주소마다 값을 출력하기 위한 함수

int main(void) {
   int one[] = {0,1,2,3,4};      // one[] 배열에 각각{0,1,2,3,4} 초기화

   printf("one    = %p\n", one);      // one의 주소를 출력
   printf("&one    = %p\n", &one);      // &one == one 의 주소를 출력
   printf("&one[0]    = %p\n", &one[0]);   // &one[0] == one 의 주소를 출력
   printf("\n");

   print1(&one[0], 5);      // 함수호출

   return 0;      // 0값을 반환
}

void print1(int *ptr, int rows)
{
   int i;
   printf("Address \t Contents\n");      // (주소                값)
   for(i=0; i <rows; i++)
      printf("%p \t %5d\n", ptr + i, *(ptr +i));      // 먼저 ptr + i로 주소가 나오고, *()로 주소가 가리키는 값을 나타냄
   printf("\n");
}

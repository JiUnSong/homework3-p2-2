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

void print1(int *ptr, int rows);      // �� �ּҸ��� ���� ����ϱ� ���� �Լ�

int main(void) {
   int one[] = {0,1,2,3,4};      // one[] �迭�� ����{0,1,2,3,4} �ʱ�ȭ

   printf("one    = %p\n", one);      // one�� �ּҸ� ���
   printf("&one    = %p\n", &one);      // &one == one �� �ּҸ� ���
   printf("&one[0]    = %p\n", &one[0]);   // &one[0] == one �� �ּҸ� ���
   printf("\n");

   print1(&one[0], 5);      // �Լ�ȣ��

   return 0;      // 0���� ��ȯ
}

void print1(int *ptr, int rows)
{
   int i;
   printf("Address \t Contents\n");      // (�ּ�                ��)
   for(i=0; i <rows; i++)
      printf("%p \t %5d\n", ptr + i, *(ptr +i));      // ���� ptr + i�� �ּҰ� ������, *()�� �ּҰ� ����Ű�� ���� ��Ÿ��
   printf("\n");
}

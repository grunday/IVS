#include <stdio.h>

//���������� %d , %f, %lf, %c, %s

int main(void) {
	int num1 = 11;
	int num2 = 10;
	//printf("�μ� �� %d , �μ� ��� %lf", num1 + num2, (num1 + num2) / 2);
	//����� �ȳ��� �Ŵ� --> ������(4byte)+ ������(4byte) = ��Ģ���� ����� ������(4byte)
	printf("�μ� �� %d , �μ� ��� %.2lf", num1 + num2, (num1 + num2) / 2.0);
	printf("�μ� �� %d , �μ� ��� %.2lf", num1 + num2, (double)((num1 + num2) / 2.0));

	// ��� �� ����   2.0 , 3.0 ,,,,,,N.0���� ǥ��
	return 0;
}
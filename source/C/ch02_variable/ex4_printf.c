#include <stdio.h>

//서식지정자 %d , %f, %lf, %c, %s

int main(void) {
	int num1 = 11;
	int num2 = 10;
	//printf("두수 합 %d , 두수 평균 %lf", num1 + num2, (num1 + num2) / 2);
	//평균은 안나올 거다 --> 정수형(4byte)+ 정수형(4byte) = 사칙연산 결과는 정수형(4byte)
	printf("두수 합 %d , 두수 평균 %.2lf", num1 + num2, (num1 + num2) / 2.0);
	printf("두수 합 %d , 두수 평균 %.2lf", num1 + num2, (double)((num1 + num2) / 2.0));

	// 평균 할 때는   2.0 , 3.0 ,,,,,,N.0으로 표현
	return 0;
}
#include<stdio.h>
void stackoverflow(int count);
void main() {

	int n = 3;
	stackoverflow(n);

}
void stackoverflow(int count) {
	if (count == 0)
		return;

	int sum = 4;
	for (int i = count; i = 0; i--) {
		sum = sum * 4;
	}
		sum = sum - 1;
	int sum1 = sum % 3;

	printf("%d�� ������ : %d \n", &sum,&sum1);

	stackoverflow(--count);

}

//n�� ���Ͽ� 4^n-1=3m���� ����
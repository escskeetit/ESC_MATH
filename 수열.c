#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void prime_num(); //�Ҽ� ���ϴ� ���α׷�
int main() {
	printf("======���� �����򰡷� ���� ���ϴ� ���α׷� �������� �ִ� ������ �������ۿ� ��������======\n");
	int num = 0; //���ñ�
	int how = 0; //�󸶳� �ݺ��� �� �Է�
	printf("1. �������� \n 2. ������ \n 3. �Ҽ� \n");
	scanf_s("%d", &num);

		double as = 0;//��������
		double cd = 0;//����
		double gs = 0;//������
		double cr = 0;//����

	switch (num) {
	
	case 1 : 
		//�������� ���ϴ� �Լ�
		//�Է� : ù��° �� �Է�, ���� �Է�

		printf("���������� ù��° ���� �� �Է����ּ��� ������ �м� �׷��� �ȵ� ������ �Ҽ��� �������� ���ּ���"); scanf_s("%lf", &as);
		printf("������ �Է����ּ��� ������ �м� �׷��žȵ� �Ҽ��� �������� ���ּ���"); scanf_s("&lf", &cd);
		printf("�󸶳� �ݺ��ҷ���? �鸸�� �ݺ��ϸ� ȥ��"); scanf_s("&d", &how);

		for (int i = 0;i <= how;i++) {
			as = as + cd;
			printf("%lf ", as);
		}
		printf("\n ===== �������� ===== \n");
		break;
	case 2 :	
		//������ ���ϴ� �Լ�
		//�Է� : ù��° �� �Է�, ����

		printf("�������� ù���� ���� �Է����ּ��� ������ �м� ���Ҽ� �׷��� �ȵ� ������ �Ҽ��� �������� ���ּ���"); scanf_s("%lf", &gs);
		printf("���� �Է����ּ��� ������ �м� ���Ҽ� �׷��� �ȵ� ������ �Ҽ��� �������� ���ּ���"); scanf_s("&lf", cr);
		printf("�󸶳� �ݺ��ҷ���? õ���� �ݺ��ϸ� ȥ��"); scanf_s("&d", how);
		
		for (int i = 0;i <= how;i++) {
			gs = gs * cr;
			printf("%lf ", gs);
		}
		printf("\n ������ \n");
		break;
	case 3 :
		//�Ҽ� ���ϴ� �Լ�
		prime_num();
		break;

	default: printf("==�߸��Է��߽��ϴ�==\n");
		break;
	}
	return 0;
}
void prime_num() {
int i, j, count = 1;

		long sum = 0;
		int how = 0;
		printf("�󸶳� �ݺ��ҷ���? �Ҽ��� ������ �ȵ�");scanf_s("%d", &how);
		printf("1~%d ������ �� �߿��� �Ҽ��� ���ϴ� ���α׷� \n",&how);

		printf("%d\t", 1);

		for (i=2; i <= how; i++) {
			for (j = 2; j < how; j++) {
				if ((i % j) == 0)
					break;
			}

			if (i == j) {
				printf("%d\t", i);
				count++;

				if ((count % 8) == 0)
					printf("\n");
			}
		}
		printf("\n1���� 1000 ������ �Ҽ��� %d���̴�. \n", count);
	}
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void prime_num(); //소수 구하는 프로그램
int main() {
	printf("======수학 수행평가로 수열 구하는 프로그램 만들어오는 애는 전교에 최은수밖에 없을거임======\n");
	int num = 0; //선택권
	int how = 0; //얼마나 반복할 지 입력
	printf("1. 등차수열 \n 2. 등비수열 \n 3. 소수 \n");
	scanf_s("%d", &num);

		double as = 0;//등차수열
		double cd = 0;//공차
		double gs = 0;//등비수열
		double cr = 0;//공비

	switch (num) {
	
	case 1 : 
		//등차수열 구하는 함수
		//입력 : 첫번째 값 입력, 공차 입력

		printf("등차수열의 첫번째 값을 를 입력해주세요 무리수 분수 그런거 안됨 정수나 소수로 떨어지게 해주세요"); scanf_s("%lf", &as);
		printf("공차를 입력해주세요 무리수 분수 그런거안됨 소수로 떨어지게 해주세요"); scanf_s("&lf", &cd);
		printf("얼마나 반복할래요? 백만번 반복하면 혼남"); scanf_s("&d", &how);

		for (int i = 0;i <= how;i++) {
			as = as + cd;
			printf("%lf ", as);
		}
		printf("\n ===== 등차수열 ===== \n");
		break;
	case 2 :	
		//등비수열 구하는 함수
		//입력 : 첫번째 값 입력, 공비

		printf("등비수열의 첫번째 값을 입력해주세요 무리수 분수 복소수 그런거 안됨 정수나 소수로 떨어지게 해주세요"); scanf_s("%lf", &gs);
		printf("공비를 입력해주세요 무리수 분수 복소수 그런거 안됨 정수나 소수로 떨어지게 해주세요"); scanf_s("&lf", cr);
		printf("얼마나 반복할래요? 천만번 반복하면 혼남"); scanf_s("&d", how);
		
		for (int i = 0;i <= how;i++) {
			gs = gs * cr;
			printf("%lf ", gs);
		}
		printf("\n 등비수열 \n");
		break;
	case 3 :
		//소수 구하는 함수
		prime_num();
		break;

	default: printf("==잘못입력했습니다==\n");
		break;
	}
	return 0;
}
void prime_num() {
int i, j, count = 1;

		long sum = 0;
		int how = 0;
		printf("얼마나 반복할래요? 소수점 무적권 안됨");scanf_s("%d", &how);
		printf("1~%d 사이의 수 중에서 소수를 구하는 프로그램 \n",&how);

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
		printf("\n1부터 1000 사이의 소수는 %d개이다. \n", count);
	}

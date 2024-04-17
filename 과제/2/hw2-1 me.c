//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int sum(int, int);
//
//int min(int, int);
//
//int mul(int, int);
//
//double dis(int, int);
//
//
//int main(void) {
//	while (1) {
//		int a = 0;
//		int b = 0;
//		char t = '0';
//
//		printf("\n두 정수를 입력하세요 : ");
//		scanf("%d %d", &a, &b);
//
//		printf("연산을 선택하세요(+, -, *, /) : ");
//		scanf("\n %c", &t);
//
//		if (t == '+') {
//			sum(a, b);
//		}
//		else if (t == '-') {
//			min(a, b);
//		}
//		else if (t == '*'){
//			mul(a, b);
//		}
//		else if (t == '/') {
//			dis(a, b);
//		}
//		else if (t == '!') {
//			break;
//		}
//	}
//}
//
//
//int sum(x, y) {
//	int re;
//	re = x + y;
//	printf("%d", re);
//	
//}
//
//int min(int x, int y) {
//	int re;
//	re = x - y;
//	printf("%d", re);
//}
//
//int mul(int x, int y) {
//	int re;
//	re = x * y;
//	printf("%d", re);
//}
//
//double dis(int x, int y) {
//	if (y == 0) {
//		printf("0으로는 나눌 수 없습니다.");
//
//	}
//	else {
//		double re = 0;
//		re = (double)x / (double)y;
//		printf("%lf", re);
//	}
//
//}

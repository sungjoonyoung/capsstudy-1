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
//		printf("\n�� ������ �Է��ϼ��� : ");
//		scanf("%d %d", &a, &b);
//
//		printf("������ �����ϼ���(+, -, *, /) : ");
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
//		printf("0���δ� ���� �� �����ϴ�.");
//
//	}
//	else {
//		double re = 0;
//		re = (double)x / (double)y;
//		printf("%lf", re);
//	}
//
//}

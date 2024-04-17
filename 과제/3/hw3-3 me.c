//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void) {
//	int H;
//	int M;
//	printf("시간을 입력하시오 : ");
//	scanf("%d %d", &H, &M);
//
//	if (H == 0) {
//		if (M < 45) {
//			M = 60 + M - 45;
//			H = H + 24 - 1;
//			printf("%d %d", H, M);
//		}
//		else {
//			M = M - 45;
//			printf("%d %d", H, M);
//		}
//	}
//	else{
//		if (M < 45) {
//			M = 60 + M - 45;
//			H = H - 1;
//			printf("%d %d", H, M);
//		}
//		else {
//			M = M - 45;
//			printf("%d %d", H, M);
//		}
//	}
//}
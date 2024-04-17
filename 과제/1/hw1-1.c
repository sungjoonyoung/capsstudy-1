/*
문제 : 중간고사와 기말고사 성적(0~100점)을 입력받아 평균을 내고, 이에 따라 학점을 출력하는 프로그램을 작성하시오.
단, 학점은 다음과 같이 부여한다.
평균 90점 이상 : A
평균 80점 이상 : B
평균 70점 이상 : C
평균 60점 이상 : D
평균 60점 미만 : F

입력 : 중간고사와 기말고사 성적(0~100점)이 공백으로 구분되어 주어진다.
출력 : 평균과 학점을 공백으로 구분하여 출력한다.

단, 중간고사와 기말고사 성적을 입력 받을 시에는 정수형 변수를 사용하고, 평균과 학점을 출력할 때는 실수형 변수를 사용한다.

문제를 해결했을 경우, 저번 수업때 만들었던 본인의 개인 github repository에 해당 문제의 코드를 push한다.
*/

/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int a;
	int b;

	printf("중간고사 성적을 입력하세요 : ");
	scanf("%d", &a);

	printf("기말고사 성적을 입력하세요 : ");
	scanf("%d", &b);

	double m;
	
	m = ((double)a + (double)b)/2;
	if (m >= 90) {
		printf("학점은 %lf이고, 등급은 A입니다.\n", m);
	}

	else if (m >= 80) {
		printf("학점은 %lf이고, 등급은 B입니다.\n", m);
	} 

	else if (m >= 70) {
		printf("학점은 %lf이고, 등급은 C입니다.\n", m);
	}
	else if (m >= 60) {
		printf("학점은 %lf이고, 등급은 D입니다.\n", m);
	}
	else {
		printf("학점은 %lf이고, 등급은 F입니다.\n", m);
	}

	return 0;
}
*/
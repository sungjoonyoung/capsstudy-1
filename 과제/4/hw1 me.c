///*
//배열과 포인터를 이용하여 로또 번호 생성기를 구현하시오.
//로또 번호는 1부터 45까지의 숫자 중 6개를 랜덤하게 선택하여 출력한다.
//단, 중복된 숫자가 나오면 안된다.
//
//자료형은 정수형 배열을 사용하고, 포인터를 이용하여 배열의 요소에 접근한다.
//배열의 크기는 6으로 고정한다.
//
//또한, 생성한 로또 번호를 오름차순으로 정렬하여 출력한다.
//예를 들어, 생성된 번호가 4, 2, 5, 1, 3, 6 이라면 1, 2, 3, 4, 5, 6으로 출력한다.
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//srand((unsigned)time(NULL));
//int lotto[6] = { 0 };
//
//int right(int);
//
//
//int main(void) {
//    int cash = 0;
//    for (int i = 0; i < 6; i++) {
//        while (cash == 1) {
//            int tmp;
//            tmp = ran() % 45 + 1;
//            cash = right(tmp);
//        }
//    }
//    
//}
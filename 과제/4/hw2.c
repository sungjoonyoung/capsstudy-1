//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int week[7] = { 0 };
//
//int slice(int);
//int when(int);
//int pow(int);
//
//int main(void) {
//    int mans = 0;
//    scanf("%d", &mans);
//
//    for (int i = 0; i < mans; i++) {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        slice(tmp);
//    }
//    int dead = 0;
//
//    for (int i = 0; i < 7; i++) {
//        if (week[i] == mans) when(i);
//        else dead++;
//    }
//
//    if (dead == 7) printf("������ ������~");
//
//}
//
//int slice(x) {
//    for (int i = 0; i < 7; i++) {
//        int tmp = pow(i + 1);
//        if (x % tmp >= pow(i)) week[6 - i]++;
//    }
//}
//
//int pow(x) {
//    int tmp = 1;
//    for (int i = 0; i < x; i++) {
//        tmp = tmp * 10;
//    }
//    return tmp;
//}
//
//int when(x) {
//    if (x == 0) printf("�����Ͽ� ���� \n");
//    if (x == 1) printf("ȭ���Ͽ� ���� \n");
//    if (x == 2) printf("�����Ͽ� ���� \n");
//    if (x == 3) printf("����Ͽ� ���� \n");
//    if (x == 4) printf("�ݿ��Ͽ� ���� \n");
//    if (x == 5) printf("����Ͽ� ���� \n");
//    if (x == 6) printf("�Ͽ��Ͽ� ���� \n");
//}
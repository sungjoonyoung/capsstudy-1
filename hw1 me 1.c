///*
//�迭�� �����͸� �̿��Ͽ� �ζ� ��ȣ �����⸦ �����Ͻÿ�.
//�ζ� ��ȣ�� 1���� 45������ ���� �� 6���� �����ϰ� �����Ͽ� ����Ѵ�.
//��, �ߺ��� ���ڰ� ������ �ȵȴ�.
//
//�ڷ����� ������ �迭�� ����ϰ�, �����͸� �̿��Ͽ� �迭�� ��ҿ� �����Ѵ�.
//�迭�� ũ��� 6���� �����Ѵ�.
//
//����, ������ �ζ� ��ȣ�� ������������ �����Ͽ� ����Ѵ�.
//���� ���, ������ ��ȣ�� 4, 2, 5, 1, 3, 6 �̶�� 1, 2, 3, 4, 5, 6���� ����Ѵ�.
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void mix(int x, int y);
//
//int lotto[6] = { 0 };
//int main(void) {
//    
//    srand((unsigned)time(NULL)); //���� �ð����� �õ尪 ����
//    
//    for (int i = 0; i < 7; i++) {
//        for (int j = 0; j < i; j++) {
//            int tmp = rand() % 45 + 1;
//            if (tmp == lotto[j]) {
//                if (tmp == 45) lotto[j] = 1;
//                else if (tmp < 45) lotto[j] = tmp + 1;
//            }
//            lotto[j] = tmp;
//
//        }
//    }
//    printf("%d ", lotto[0]);
//    printf("%d ", lotto[1]);
//    printf("%d ", lotto[2]);
//    printf("%d ", lotto[3]);
//    printf("%d ", lotto[4]);
//    printf("%d \n", lotto[5]);
//    
//    for (int i = 0; i < 6; i++) {
//        mix(4, 5);
//    }
//    
//
//    printf("%d ", lotto[0]);
//    printf("%d ", lotto[1]);
//    printf("%d ", lotto[2]);
//    printf("%d ", lotto[3]);
//    printf("%d ", lotto[4]);
//    printf("%d ", lotto[5]);
//
//}
//
//void mix(x, y) {
//    if (x == -1) return 0;
//    if (lotto[x] > lotto[y]) {
//        int tmp = 0;
//        tmp = lotto[y];
//        lotto[y] = lotto[x];
//        lotto[x] = tmp;
//    }
//    mix(x - 1, y - 1);
//}
////int arr[5]; // ���� �Ҵ� (static)
////<�����Ҵ� dinamic>
////#include <stdlib.h>
////malloc - �Լ��ε� ���ϴ� ��ŭ �迭�� ���� ������ �Լ�
//////�ϴ� ������ �ϳ��� ������ ��
////int* arr = (int*)malloc(���� * sizeof(int));
////// 
////int* arr = (int*)malloc(10 * sizeof(int));// size of �� 4�� �ǰ���
//////�����Ҵ��� �ϰ����� �׻� �������� �ʿ䰡 ����
////free(arr);
////
////
////
////
////
////
////<�������迭>
////int arr[3][3];
//////�ʱ�ȭ ���
////int arr[3][3] = {
////    {1,2,3},
////    { 1, 2, 3 },
////    { 1, 2, 3 }
////};
////
////
////int arr[3][3] = { 1,2,3,4,5,6,7 }// �������� 0���� ä��������
////int arr[][] = { 1,2,3,4,5,6,7 8 } // �̰Ŵ� ��ĩ��. �׷��� ���� ������. ���� x���� y.������ 4�� ������ ���� 3�� �ڵ����� ��
////
////
////���������ʹ� �����Ͱ� �� �� ��.
////
////
////// �������� ���� �Ҵ��ϴ� �� 3*3 �迭�� ��.
////int** arr = (int**)malloc(���� * sizeof(int*));
////��(i = 0; i < 3; i++) {
////    int* arr[i] = (int*)malloc(���� * sizeof(int));
////}
////
////�ೢ���� int ĭ�ε�, ���� int* ĭ��.
////
////
////
////
////<�Լ����� �迭�� �����μ��� �ִ� ��>
////
////int arr[5];
////int function(int arr[]) {
////
////}
////int functiond(int* arr) {
////
////}
////
//////������
////int arr[5][5];
////int f(int arr[][]) {
////
////}// �� ��
////int f(int arr[][5]) {
////
////}// ��
////int f(int** arr) {
////
////}// �� ��
////
////int f(int** arr, int size) {
////
////}// ��, �ȿ��� for ���� �ٽ� �����߰���?
////"=="
////�����δ�
////inf f(int(*arr)[size]) {
////
////}// size �� ���� ĭ ������ �Ǵ� ���� // �� �ܿ�ø� �˴ϴ�~
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main(void) {
//    while (1) {
//        printf("����� ");
//    }
//}
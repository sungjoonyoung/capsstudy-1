///*
//���ڿ�
//
//char str[] = "Hello\0"
//
//EOF(end of file) == -1
//
//
//#include <string.h>
//
//1. strlen
//char* str = "hello";
//int tmp = strlen(str);
//
//--> 5�� ����
//
//
//2. strcpy
//char* str1 = "ABC";
//char* str;
//strcpy(str, str1);
//
//
//3. strcat
//char str[10] = "ABC"; // �̾������ ���� �����ִ� ���ڿ� Ȯ���� �־ߵ�
//strcat(str, "DEF");
//
//
//4. strcmp
//strcmp(str1, str2);
//
//str1 == str2-- > 0 // ������ 0, �ٸ��� 0�� �ƴϴ�.
//str1 > str2-- > +
//str1 < str2-- > -
//
//stdlib.h
//
//atoi
//
//char* str = "10"
//int num = atoi(str);
//*/
//
//����ü
//
//struct point {
//    int x;
//    int y;
//};
//
//struct point p1;
//
//p1.x = 2;
//p1.y = 3;
//
//struct person {
//    char name[20];
//    char phone[20];
//    int age;
//};
//
//struct person p1;
//p1.name = "cs";
//p1.phone = "1234";
//p1.age = 26;
//
//
//struct person p = { "cs", "1234", 26 };
//
//
//
//struct person pArr[3] = {
//    {"Lee", "1234", 20},
//    {"Kim", "456", 21},
//    {"Park", "789", 20};
//};
//
//
//struct person man = { "Lee", "123", 20 };
//
//struct person* ptr;
//
//ptr = &man;
//
//�̷��� �Ǹ� ptr �� �����ʹ� ��򰡿� ���ǵ� man �� �ּڰ��� ������ ��
//
//
//printf("%s %s %d", (*ptr).name, (*ptr).phone, (*ptr).age);
//printf("%s %s %d", ptr->name, ptr->phone, ptr->age);
//
//
//
//
//
//
//
//
//
//
//
//<typedef>
//
//
//
//int a;
//type int INT;
//
//INT a; // �̰� �����ϴ�
//
//
//
//
//
//
//typedef struct person {
//    char[20] name;
//    char[20] phone;
//    int age;
//}PERSON;
//
//sturct person p1;
//PERSON p1;
//PERSON* p2;
//
//
//
//
//
//�� �� �� ���Ͽ��̶� �̳�?
//
//
//
//
//���Ƿ� ���� ��������� #include "./~~~~.h" (���� ����)
// �ٸ� ���� �ȿ� �־����� "./~~~/~~~.h"
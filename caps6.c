///*
//문자열
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
//--> 5가 나옴
//
//
//2. strcpy
//char* str1 = "ABC";
//char* str;
//strcpy(str, str1);
//
//
//3. strcat
//char str[10] = "ABC"; // 이어붙히기 전에 여유있는 문자열 확보해 둬야됨
//strcat(str, "DEF");
//
//
//4. strcmp
//strcmp(str1, str2);
//
//str1 == str2-- > 0 // 같으면 0, 다르면 0이 아니다.
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
//구조체
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
//이렇게 되면 ptr 의 포인터는 어딘가에 정의된 man 의 주솟값을 가지게 됨
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
//INT a; // 이게 가능하다
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
//안 한 건 유니온이랑 이넘?
//
//
//
//
//임의로 만든 헤더파일은 #include "./~~~~.h" (같은 폴더)
// 다른 폴더 안에 넣었으면 "./~~~/~~~.h"
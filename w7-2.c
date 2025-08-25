#include <stdio.h>

int main() {
    int x, y;

    // รับค่าตัวเลข 2 จำนวนจากผู้ใช้
    printf("Enter first number (x): ");
    scanf("%d", &x);

    printf("Enter second number (y): ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y
    if (x > y) {
        // ถ้า x มากกว่า y
        printf("x is greater than y\n");
    } else if (x < y) {
        // ถ้า x น้อยกว่า y
        printf("x is less than y\n");
    } else {
        // ถ้า x เท่ากับ y
        printf("x is equal to y\n");
    }

    return 0;
}

/*
อธิบายการทำงานของโปรแกรม:
1. โปรแกรมจะรับค่าตัวเลข 2 จำนวนจากผู้ใช้และเก็บไว้ในตัวแปร x และ y
2. โปรแกรมจะเปรียบเทียบค่าของ x กับ y
   - ถ้า x มากกว่า y จะแสดงข้อความ "x is greater than y"
   - ถ้า x น้อยกว่า y จะแสดงข้อความ "x is less than y"
   - ถ้า x เท่ากับ y จะแสดงข้อความ "x is equal to y"
3. โปรแกรมจบการทำงาน
*/
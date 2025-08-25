#include <stdio.h>

int main() {
    int level;
    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบกรณีที่ไม่อนุญาต
    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } else {
        // กรณีที่ level อยู่ในช่วง 1-4
        switch (level) {
            case 1: printf("Beginner\n"); break;
            case 2: printf("Intermediate\n"); break;
            case 3: printf("Advanced\n"); break;
            case 4: printf("Expert\n"); break;
        }
    }

    return 0;
}

/*
อธิบายผลลัพธ์แต่ละกรณี:
- level = -4: แสดง "The level below 1 is not allowed"
- level = 0:  แสดง "The level below 1 is not allowed"
- level = 1:  แสดง "Beginner"
- level = 2:  แสดง "Intermediate"
- level = 3:  แสดง "Advanced"
- level = 4:  แสดง "Expert"
- level = 100: แสดง "The level above 4 is not allowed"

อภิปรายผล:
- โปรแกรมสามารถแยกแยะกรณีที่ผู้ใช้กรอกค่าที่ไม่อยู่ในช่วง 1-4 ได้อย่างชัดเจน
- กรณีที่กรอกค่าถูกต้อง (1-4) จะแสดงระดับที่ถูกต้อง
- กรณีที่กรอกค่าต่ำกว่า 1 หรือมากกว่า 4 จะแจ้งเตือนผู้ใช้อย่างเหมาะสม
*/
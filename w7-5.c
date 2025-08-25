#include <stdio.h>

int main() {
    int age, vipLevel;
    float purchase, discount = 0.0;

    // รับข้อมูลลูกค้า
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vipLevel);

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    // ตรวจสอบเงื่อนไขส่วนลด
    if (vipLevel == 5 || purchase > 50000) {
        discount = 25.0;
    } else if (age > 60 || vipLevel == 3 || vipLevel == 4) {
        discount = 20.0;
    } else if (age >= 30 && age <= 40 && purchase > 2000) {
        discount = 15.0;
    } else if (age >= 18 && age <= 25 && purchase > 1000) {
        discount = 10.0;
    }

    // แสดงข้อมูลลูกค้าและส่วนลด
    printf("\nCustomer Information:\n");
    printf("Age: %d\n", age);
    printf("VIP Level: %d\n", vipLevel);
    printf("Purchase Amount: %.2f\n", purchase);

    if (discount > 0) {
        printf("Discount: %.0f%%\n", discount);
        printf("Discounted Price: %.2f\n", purchase * (1 - discount / 100));
    } else {
        printf("No discount applied\n");
    }

    return 0;
}

/*
อธิบาย:
- รับค่าอายุ, ระดับ VIP, และยอดซื้อจากผู้ใช้
- ตรวจสอบเงื่อนไขแต่ละข้อเพื่อหาส่วนลดที่เหมาะสม
- แสดงข้อมูลลูกค้าและส่วนลดที่ได้รับ หรือแจ้งว่าไม่ได้รับส่วนลด
*/
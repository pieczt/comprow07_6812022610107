#include <stdio.h>

// โครงสร้างข้อมูลสำหรับสิทธิประโยชน์แต่ละระดับ (ช่วยให้ maintain ง่าย)
typedef struct {
    char *name;
    char *benefit;
} MemberBenefit;

int main() {
    int level;

    // กำหนดข้อมูลสิทธิประโยชน์แต่ละระดับ
    MemberBenefit benefits[] = {
        {"Silver Member", "5% discount"},
        {"Gold Member", "10% discount + Reward points"},
        {"Platinum Member", "15% discount + Reward points + Birthday gift"},
        {"Diamond Member", "15% discount + Reward points + Birthday gift + VIP events"}
    };
    int maxLevel = sizeof(benefits) / sizeof(benefits[0]);

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // วิธีที่ 1: if-else if
    printf("\n[Using if-else if]\n");
    if (level == 1) {
        printf("%s: %s\n", benefits[0].name, benefits[0].benefit);
    } else if (level == 2) {
        printf("%s: %s\n", benefits[1].name, benefits[1].benefit);
    } else if (level == 3) {
        printf("%s: %s\n", benefits[2].name, benefits[2].benefit);
    } else if (level == 4) {
        printf("%s: %s\n", benefits[3].name, benefits[3].benefit);
    } else {
        printf("Invalid membership level\n");
    }

    // วิธีที่ 2: switch-case
    printf("\n[Using switch-case]\n");
    switch (level) {
        case 1:
            printf("%s: %s\n", benefits[0].name, benefits[0].benefit);
            break;
        case 2:
            printf("%s: %s\n", benefits[1].name, benefits[1].benefit);
            break;
        case 3:
            printf("%s: %s\n", benefits[2].name, benefits[2].benefit);
            break;
        case 4:
            printf("%s: %s\n", benefits[3].name, benefits[3].benefit);
            break;
        default:
            printf("Invalid membership level\n");
    }

    return 0;
}

/*
อภิปราย:
- แบบ if-else if และ switch-case ให้ผลลัพธ์เหมือนกัน
- การใช้ struct และ array ทำให้เพิ่ม/แก้ไขระดับสมาชิกในอนาคตได้ง่าย เพียงเพิ่มข้อมูลใน array
- switch-case อ่านง่ายและเหมาะกับกรณีที่มีตัวเลือกชัดเจน
- ถ้าระดับสมาชิกมีจำนวนมากขึ้น อาจใช้ loop หรือ map แทน switch-case เพื่อความ maintainable
*/
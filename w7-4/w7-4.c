#include <stdio.h>

int main() {
    int level;

    printf("Enter your membership level (1=Silver, 2=Gold, 3=Platinum, 4=Diamond): ");
    scanf("%d", &level);

    // แบบที่ 1: ใช้ if-else if
    printf("\n[Using if-else if]\n");
    if (level == 1) {
        printf("Silver: 5%% discount\n");
    } else if (level == 2) {
        printf("Gold: 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        printf("Diamond: 15%% discount + Reward points + Birthday gift + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    // แบบที่ 2: ใช้ switch-case
    printf("\n[Using switch-case]\n");
    switch (level) {
        case 1:
            printf("Silver: 5%% discount\n");
            break;
        case 2:
            printf("Gold: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond: 15%% discount + Reward points + Birthday gift + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
    }

    return 0;
}

/*
อธิบาย:
- รับค่าระดับสมาชิกจากผู้ใช้
- แสดงสิทธิประโยชน์ตามระดับสมาชิกด้วย if-else if และ switch-case
- กรณีกรอกค่าผิดจะแจ้งเตือนว่า "Invalid membership level"
*/
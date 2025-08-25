#include <stdio.h>

int main() {
    float score, total;

    // รับคะแนนสอบ midterm จากผู้ใช้
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 ให้เพิ่ม 5%
    if (score >= 50) {
        // คำนวณคะแนนรวมหลังเพิ่ม 5%
        total = score + (score * 0.05);
    } else {
        // ถ้าคะแนนน้อยกว่า 50 ไม่เพิ่มคะแนน
        total = score;
    }

    // แสดงคะแนนรวมหลังเพิ่ม (ถ้ามี)
    printf("Total score after bonus: %.2f\n", total);

    // แสดงข้อความจบการประเมินผล
    printf("End of evaluation\n");

    return 0;
}
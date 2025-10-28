#include <stdio.h>

void main() 
{
    char KyTu;

    // Nhập ký tự từ người dùng
    printf("Nhap mot ky tu: ");
    scanf_s("%c", &KyTu);

    // Hiển thị mã ASCII của ký tự vừa nhập
    printf("Ma ASCII cua '%c' la: %d\n", KyTu, KyTu);

    // Hiển thị mã ASCII của ký tự đứng trước
    printf("Ma ASCII cua ky tu dung truoc la: %d\n", (int)KyTu - 1);

    // Hiển thị mã ASCII của ký tự đứng sau
    printf("Ma ASCII cua ky tu dung sau la: %d\n", (int)KyTu + 1);
}
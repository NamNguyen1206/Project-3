#include <stdio.h>

void main()
{
	int Ngay;
	int Nam;
	int Thang;

	printf("Moi nhap ngay ");
	scanf_s("%d", &Ngay);
	printf("Moi nhap thang ");
	scanf_s("%d", &Thang);
	printf("Moi nhap nam ");
	scanf_s("%d", &Nam);
	printf("%.02d/%.02d/%d", Ngay, Thang, Nam);

}

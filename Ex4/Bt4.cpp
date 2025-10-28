#include <stdio.h>

void main()
{
	int Dai;
	int Rong;
	int Chuvi, Dientich;

	printf("Moi nhap chieu dai ");
	scanf_s("%d", &Dai);
	printf("Moi nhap chieu rong ");
	scanf_s("%d", &Rong);

	Chuvi = (Dai + Rong) * 2;
	Dientich = Dai * Rong;
	printf("Chu vi la %d va dien tich la %d", Chuvi, Dientich);
}
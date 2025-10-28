#include<math.h>
#include<stdio.h>

//Tinh so nut tu bien so xe
void main() {
	int so, ngan, tram , chuc, donvi, nut;

	printf("Hay nhap so co 4 chu so : ");
	scanf_s("%d", &so);

	/*ngan = so % 10;
	tram = (so/10) % 10;
	chuc = (so/100) % 10;
	donvi = (so/1000) % 10;
	nut = (ngan + tram + chuc + donvi) % 10;*/

	ngan = so % 10;
	so = so / 10;
	tram = so % 10;
	so = so / 10;
	chuc = so % 10;
	donvi = so / 10;
	nut = (ngan + tram + chuc + donvi) % 10;

	printf("%d %d %d %d \n", ngan, tram, chuc, donvi);
	printf("so nut : %d", nut);
}
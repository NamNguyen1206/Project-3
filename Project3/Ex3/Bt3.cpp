#include<math.h>
#include<stdio.h>

//Tinh gio phut giay tu 1 so bat ki
void main() {
	int so, gio, phut, giay;

	printf("Hay nhap so : ");
	scanf_s("%d", &so);

	gio = so / 3600;
	phut = (so % 3600) / 60;
	giay = (so % 3600) % 60;

	printf("%d gio %d phut %d giay ", gio, phut, giay);
}
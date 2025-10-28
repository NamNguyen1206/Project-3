#include <stdio.h>

void main()
{
	float Cao ;
	float Canhdaya,Canhdayb;
	float Canhbenc, Canhbend;
	float Chuvi, Dientich;

	printf("Moi nhap chieu cao ");
	scanf_s("%f", &Cao);
	printf("Moi nhap canh day a va b : ");
	scanf_s("%f %f", &Canhdaya,&Canhdayb);
	printf("Moi nhap canh ben c va d :");
	scanf_s("%f %f", &Canhbenc, &Canhbend);

	Dientich = (float)1/2 * (Canhdaya + Canhdayb) * Cao;
	Chuvi = Canhdaya + Canhdayb + Canhbenc + Canhbend;
	printf("Chu vi la %f va dien tich la %f", Chuvi, Dientich);
}
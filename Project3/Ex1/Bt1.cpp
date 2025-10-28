#include<math.h>
#include<stdio.h>

//Tinh x mu 2, cb2 x
void main() 
{
	float x, bp, cb2, cb3;
	bool ans = 5 * 6 / 2 + 3 > 7 - 1 * 5;
	printf("%d", ans);

	printf("Moi nhap x : ");
	scanf_s("%f", &x);

	bp = pow(x,2);
	cb2 = sqrt(x);
	cb3 = pow(x, (float)1 / 3);

	//.0x sau % de bo x so 0 sau so (vd 2.000)
	printf("Ket qua cua %.0f^2 la : %.0f \n", x, bp);
	printf("Ket qua cua can bac 2 cua %.0f la : %f \n", x, cb2);
	printf("Ket qua cua can bac 3 cua %.0f la : %f ", x, cb3);
}
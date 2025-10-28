#include<stdio.h>

/*void main()
{
	int n,S = 0;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i+=2)
		{
		//S = S+ i
			S += i;
		}	
	printf("Tong cac so le den N la: %d\n", S);
}*/

/*/void main()
{
	int n, S = 0;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i ++)
	{
		//S = S+ i
		S += i;
	}
	printf("Tong cac so den N la: %d\n", S);
}*/

/*/void main()
{
	int n, S = 0;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i += 2)
	{
		//S = S+ i
		S += i;
	}
	printf("Tong cac so den N la: %d\n", S);
}*/

void main()
{
	int n, S = 0;
	int chan = 0, le = 0;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i ++)
	{
		if (i % 2 == 0)
		{
			chan += i;
		}
		else
		{
			le += i;
		}
		//S = S+ i
		S += le - chan;
	}
	printf("Tong cac so den N la: %d\n", S);
}

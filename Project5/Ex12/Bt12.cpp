#include<stdio.h>

/* In hinh vuong canh n
void main()
{
	int n;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/* In hinh vuong canh n rong ruot
void main()
{
	int n;

	printf("Moi nhap n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || j == 4 || i == 4)
				printf("*");
			else
				printf(" ");
			
		}
		printf("\n");
	}
}*/

/* In hcn biet dai va rong
void main()
{
	int n,d;

	printf("Moi nhap chieu dai : ");
	scanf_s("%d", &n);
	printf("Moi nhap chieu rong : ");
	scanf_s("%d", &d);
	
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/* In hcn rong ruot
void main()
{
	int n,d;

	printf("Moi nhap chieu dai : ");
	scanf_s("%d", &n);
	printf("Moi nhap chieu rong : ");
	scanf_s("%d", &d);

	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || j == n || i == d)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
}*/

/* In htg khi biet chieu cao
void main()
{
	int n;

	printf("Moi nhap chieu cao n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

/* In htg vuong can rong ruot
void main()
{
	int n;

	printf("Moi nhap chieu cao n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || i == n || i == j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}*/

/* In htg bang so
void main()
{
	int n;
	char Kytu;

	printf("Moi nhap chieu cao n : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		Kytu = '1';
		for (int j = 1; j <= i; j++)
		{
			printf("%c",Kytu++);
		}
		printf("\n");
	}
}*/

void main()
{
	int n;
	char Kytu;

	printf("Moi nhap chieu cao n : ");
	scanf_s("%d", &n);

	for (int i = n; i >= 1; i--)
	{
		Kytu = '1';
		for (int j = 1; j <= i; j++)
		{
			printf("%c", Kytu++);
		}
		printf("\n");
	}
}

// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <math.h>

typedef unsigned char byte;

int _tmain(int argc, _TCHAR* argv[])
{


	/*
	// z=0 ?
	int z;
	printf("irj be egy szamot ");
	scanf_s("%i", &z);
	if (z == 0)
	printf("n-t irtal. \n");
	else
	printf("nem 0-t irtal \n");
	printf("z=%i\n", z);
	
	int i = 9;
	int j = 10;
	double x = (double)i / j;
	printf("%i/%i=%g\n", i, j, x);

	int h7;
	printf("irj be egy szamot ");
		scanf_s("%i", &h7);
		if (h7 % 7) printf("nem ");
		printf("oszthato 7-tel\n");
		
	// bitvarazslat
		byte acc = 16;
		int bitszam;
		printf("acc=%i, hanyadik bit set ? ", acc);
		scanf_s("%i", &bitszam);
		acc |= 1 << bitszam;
	    printf("acc=%i, vagyis 0x%x\n", acc, acc);
		acc = 0xff;
		printf("acc=%i, hanyadik bit reset ? ", acc);
		scanf_s("%i", &bitszam);
		acc &= ~(1 << bitszam);
		printf("acc=%i, vagyis 0x%x\n", acc, acc);
		*/
	double a, b, c, d, x1, x2;
	printf("masodfoku egyenlet...\n");
	printf("a: ");
	scanf_s("%lf", &a);
	printf("b: ");
	scanf_s("%lf", &b);
	printf("c: ");
	scanf_s("%lf", &c);
	
	d = pow(b, 2) - 4 * a*c;
	if (d >= 0) {
		x1 = b + sqrt(d) / (2 * a);
		x2 = b - sqrt(d) / (2 * a);
		printf("x1=%lf\n", x1);
		printf("x2=%lf", x2);
	}
	else
		printf("nem tanultunk ilyet");
	

	_getch();
	return 0;
}


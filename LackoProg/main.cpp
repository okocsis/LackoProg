//
//  main.cpp
//  LackoProg
//
//  Created by Kocsis Olivér on 2015. 09. 26..
//  Copyright © 2015. okocsis. All rights reserved.
//

//#include <iostream>
#include <math.h>
#include <stdio.h>


#define scanf_s(args...) scanf(args)

typedef unsigned char byte;

typedef struct {
    double x;
    double y;
    double z;
} KL_Vector;

void vectorNuller(KL_Vector * vectorRef) {
    
    vectorRef->x = 0;
    vectorRef->y = 0;
    (*vectorRef).z = 0;
    
}

int osszeado( int k, int l) {
    
    return k + l;
    
    
}


int main(int argc, const char * argv[]) {
    
    

    int osszeg;
    

    
    osszeg = osszeado(5, 4);
    printf("%i", osszeg);
    
    
    //    z=0;
    //    int z;
    //    printf("irj be egy syamot ");
    //    scanf_s("%i", %z);
    //    if (z == 0)
    //    printf("n-t irtal. \n");
    //    else
    //        printf("nem 0t irtal \n");
    //    printf("z=%i\n", z);
    //
    //    int i = 9;
    //    int j = 10;
    //    double x =(double)i / j;
    //    printf("%i/%i=%g\n", i, j, x);
    //
    //    int h7;
    //    printf("irj be egy szamot ");
    //           scanf_s("%i", &h7);
    //           if (h7 % 7) printf("nem ");
    //               printf("oszthato 7-tel\n");
    //
    
    //    unsigned char c = 0;
    //    unsigned char allTrue = (1 << 8) - 1  ;
    //
    //    unsigned char allTrue2 = 1 | 2 | 4 | 8 | 16 | 32 | 64 | 128;
    
    
    
    //    for (int i = 0; i < 5000; ++i) {
    //
    //
    //        printf("%i\n",c++);
    //
    //
    //    }
    
    
    //    if (false && ) {
    //        printf("ezt megusztuk \n");
    //    }
    
    
    
    //    int szam = 0;
    //
    //    szam += 5; // eqvivalens
    //    szam = szam + 5; //
    //
    //           // bitvarazslat
    //
    //    byte acc = 16;
    //    int bitszam;
    //    while (true) {
    //
    //
    //        printf("acc=%i, hanyadik bit set? ", acc);
    //        scanf_s("%i", &bitszam);
    //        acc |= (1 << bitszam);
    //        printf("acc=%i, vagyis 0x%x\n", acc, acc);
    //
    //
    //        if (bitszam == 8) {
    //            break;
    //        }
    //
    //    }
    //
    //    // uj programres
    //
    //    byte acc2 = 16;
    //    int bitszam2;
    //
    //    printf(" \n ++++ uj programres ++++\n");
    //    acc2 = 0xff;
    //    while (true) {
    //
    //
    //        printf("acc=%i, hanyadik bit reset ? ", acc2);
    //        scanf_s("%i", &bitszam2);
    //        acc2 = acc2 & (~ (1 << bitszam2));
    //        printf("acc=%i, vagyis 0x%x\n", acc2, acc2);
    //
    //
    //        if (bitszam2 == 8) {
    //            break;
    //        }
    //    }
    //
    //
    //
    
    
    
    
    //
    //    double a, b, c, d, x1, x2;
    //    printf("masodfoku egyenlet...\n");
    //    printf("a:\nb:\nc:");
    //
    //    scanf_s("%lf", &a);
    
    KL_Vector a;
    KL_Vector b;
    KL_Vector c;
    
    vectorNuller(&a);
    vectorNuller(&b);
    vectorNuller(&c);
    
    
    printf("a.x: ");
    scanf("%lf", &a.x);
    printf("a.y: ");
    scanf("%lf", &a.y);
    printf("a.z: ");
    scanf("%lf", &a.z);
    printf("b.x: ");
    scanf("%lf", &b.x);
    printf("b.y: ");
    scanf("%lf", &b.y);
    printf("b.z: ");
    scanf("%lf", &b.z);
    
    // hello
    
    
    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;
    
    printf("cx= %lf\n", c.x);
    printf("cy= %lf\n", c.y);
    printf("cz= %lf\n", c.y);
    printf("juhuhu");
    
    
    
    
    
    return 0;
}


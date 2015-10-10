// 10.08_kl.cpp : Defines the entry point for the console application.
//

//#include <tchar.h>
//#include <conio.h>
#include <stdlib.h> // malloc
#include <math.h>
#include <cstdio>

#define _tmain(args...) main(args)
#define _TCHAR const char

int *p, *q; // pointerek
int i, j; // statikus valtozok

// statikus tomb 
#define TOMB_MERET 92

long long int fibo[TOMB_MERET]; // statikus tomb



int _tmain(int argc, _TCHAR* argv[])
{

	printf("arvizturo tukorfurogep\n");

	i = 1;
	p = (int *)malloc(sizeof(int)); // foglalunk 1 int-nyit
	*p = 1; // igy ok
    
    q = new int; // c++
	
    (*p)++; // 2

	printf("a p erteke: 0x%p, az altala mutatott adat: %i\n", p, *p);
    *q = 3;
	printf("a q erteke: 0x%p, at altala mutatott adat: %i\n", q, *q);
	j = (*p) * (*q);
	printf("a p es q altal mutatott ertekek szorzata: %i\n", j);
//    (
	free(p); p = NULL; // sehova sem mutat !
//     ) egybe kell irni
	delete q;
	printf("a p erteke 0x%p\n", p);
//	*p = 0; // szabad ptr-be ertek ?

	p = new int;
	q = new int;
	*p = 10;
	*q = *p; // q 10
	*p = 11;
	printf("a q altala mutatott adat: %i\n", *q);
	delete q; q = NULL;
	q = p; // cim masolasa. ugyanarra az adatra mutat mind a 2 pointer
	*p = 30;
	printf("a q altala mutatott adat: %i\n", *q);
	delete p;
	// delete q; mar nincs dinamikus memoria
	p = NULL;
	p = &j; // j cimet a mutatoba
	(*p)--; // ilyenkor j-t modositotom, mert tudtam a cimet
	printf("a j valtozo erteke: %i\n", j);
	i = 0;
	p--; // ilyet nem szabad csinalni !!!!! (++ volt a -- helyen, -- igy sem szabad)
	*p = 13; // valaminek erteket adtam, nem utod, hogy minek...
	printf("a i valtozo erteke: %i\n", i);
	// delete p; // hiba. mert a p meg mindig egy statikus valtozora mutat nem dinamikusra. statikus valtozo nem torolheto deletevel!
// fibonacci
    
    int k = 0;
    while (k < 100) {
        
        // csinalunk valamit belul
        printf("%i\n", k);
        
        ++k;
    }
    printf("\n");
    
    
    int l = 0;
    for (l =1; l<1000000000; l = l * 10) {
        printf("%i\n", l);
    }
    
    
    
    
    // igy a while == for

	fibo[0] = 1; fibo[1] = 1;
    for (i = 2; i < TOMB_MERET; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    // sorrend: i=2, i<TOMB_MERET, fibo[i] = fibo[i - 1] + fibo[i - 2], i++, i<tomb_meret, fibo[i] = fibo[i - 1] + fibo[i - 2], ..., i<tombmeret nem igaz -> kilep
    
    
    for (i = 0; i < TOMB_MERET; i++) {
        printf("fibo[%i]=%lli\t", i, fibo[i]);
    }
	printf("\n");
	// feltetel vizsgalos dolog
	int voltnegativ = 0; // false
    
    for (i = 0; i < TOMB_MERET; i++) {
		if (fibo[i] < 0 && !voltnegativ)
		{
			voltnegativ = 1;
			printf("az elso tulcsordulas a %i indexu elem\n", i);

		} // else voltnegativ=0; !!!!! nincs else!!!!!!!!!!!!!!!!!!
        
    }
    
    if (voltnegativ) {
		printf("tulcsordulunk\n");
    }
    else {
		printf("nem csordultunk tul\n");
    }

	// kedvenc zh pelda adjunk ossze ket 100 elemu szamut es int tipusu tombokben taroljuk...


//	_getch();

	return 0;
}


/*- Kérjünk be egy számot a felhasználótól.
- Ezután írjunk egy ejárást, ami egy számot kap paraméterül és kiiírja a képernyőre a szám és szám négyzete közti páratlan számokat, 3 karakter szélességen, új sorban.
- Végül hívjuk meg a függvényt a bekért a számmal!*/

#include <stdio.h>

void paratlanok(int n){
	for(int i = n; i < n*n; ++i){
		if(i % 2 == 1){
		printf("%3d\n", i);
		}
	}
}

int main(){
	int szam;

	printf("Adj meg egy szamot:");
	scanf("%d", &szam);

	paratlanok(szam);

return 0;
}
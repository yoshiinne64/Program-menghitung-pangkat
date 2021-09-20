#include <stdio.h>
#include <stdlib.h>

int pangkat (int a, int b){
    int x, hasil = 1;

    for (x=1;x<=b;x=x+1){
        hasil = hasil*a;
    }
    return hasil;
}

int main(){
    int a, b;
    printf("masukkan nilai yang akan dipangkat = ");
    scanf("%d", &a);
    printf("masukkan nilai pangkat = ");
    scanf("%d", &b);
    
    printf("Hasil = %d\n", pangkat (a,b));
	return 0;
}

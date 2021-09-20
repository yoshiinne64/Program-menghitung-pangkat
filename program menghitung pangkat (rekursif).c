//Tugas Rekursif

#include <stdio.h>
#include <stdlib.h>

int pangkat (int a, int b){
    if (b==0){
        return 1;
    }
    else {
        return a* pangkat (a, b-1);
    }
}

int main () {
	
    int a, b;

    printf ("masukkan nilai yang akan dipangkat = \n");
    scanf ("%d", &a);
    printf ("masukkan nilai pangkat = \n");
    scanf ("%d", &b);
    printf("Hasil = %d ", pangkat(a,b));
    return 0 ;
}  

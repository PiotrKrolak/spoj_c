#include <stdio.h>

int n, k, wynik;

int suma(int a);

int main(){

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        wynik = suma(k);
        printf("%d\n", wynik);

    }
    // wynik = suma(2);
    // printf("%d\n", wynik);
    // return 0;
}

int suma(int a){
    int suma=0;
    
    for(int i=0; i<a; i++){

        scanf("%d", &suma);
        suma += suma;
    }

    return suma;
}
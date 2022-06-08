#include <stdio.h>

int n, k;

int suma(int a);

int main(){

    scanf("%d", &n);

    for (int i=0; i<n; i++){

        printf("%d\n", suma(k));

    }

    return 0;
}

int suma(int a){
    int suma=0;
    
    for(int i=0; i<a; i++){

        scanf("%d", &suma);
        suma += suma;
    }

    return suma;
}
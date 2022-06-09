// Algorytm Euklidesa wyznaczania NWD dwóch liczb a i b
// Wejście:
//     a,b  - liczby naturalne, których NWD oblicza algorytm
// Wyjście:
//     a  lub b  - wartość NWD pierwotnych liczb a  i b

#include <stdio.h>

int nwd( int a, int b);

int main(){
    int l1, l2, wynik;
    scanf("%d %d", l1, l2);

    wynik = nwd(l1, l2);

    printf("%d", wynik);

    return 0;
}

int nwd( int a, int b){
    while(a != b){
        if(a>b) a -= b;
        else b -= a;
    }
    return a;
}
// https://pl.spoj.com/problems/PA05_POT/
// Dla danych dwóch liczb naturalnych a i b, wyznaczyć ostatnią cyfrę liczby ab.
// Zadanie
// Napisz program, który:
// wczyta ze standardowego wejścia: podstawę a oraz wykładnik b,
// wyznaczy ostatnią cyfrę liczby ab,
// wypisze wynik na standardowe wyjście.
// Wejście
// W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku podany jest w jednym wierszu, zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000).
// Wyjście
// Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego przypadku z wejścia) cyfrę jedności liczby ab zapisanej dziesiętnie.

#include <stdio.h>

int main(){

    int ilosc, a, b, wynik; 
    int wyniki[10];

    int potenga(int podstawa, int wykladnik);

    scanf("%d", &ilosc);
    for(int i=0; i<ilosc; i++){
        scanf("%d %d", &a, &b);
        
        wynik = potenga(a,b);
        wynik %= 10;
        wyniki[i] = wynik;
    }
    for(int j=0; j<ilosc; j++){
        printf("%d\n", wyniki[j]);
    }

    return 0;
}


int potenga(int podstawa, int wykladnik){
    int wynik=podstawa;
    for(int i=0; i<(wykladnik-1); i++){
        wynik *= podstawa;
        return wynik;
    }
}
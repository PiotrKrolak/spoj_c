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

    scanf("%d", &ilosc);
    for(int i=0; i<ilosc; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        for(int j=0; j<b; j++){
            a=a*a;
        }
        //wynik = a%10;
        printf(" %d", a);
    }

    return 0;
}
// https://pl.spoj.com/problems/FCTRL3/
// Zadanie
// Napisz program, który:
// wczyta ze standardowego wejścia nieujemną liczbę całkowitą n,
// policzy cyfrę dziesiatek oraz cyfrę jedności w zapisie dziesiętnym liczby n!,
// wypisze wynik na standardowe wyjście.
// Wejście
// W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤30), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku składa się z jednej linii, w której znajduje się jedna nieujemna liczba całkowita n (0 ≤ n ≤ 1 000 000 000).
// Wyjście
// Dla każdego przypadku z wejścia. Twój program powinien wypisać w osobnej linii dokładnie dwie cyfry (oddzielone pojedynczą spacją): cyfrę dziesiątek i cyfrę jedności liczby n! zapisanej w systemie dziesiętnym.

#include <stdio.h>

long int rezultat[30][30];
int ilosc, liczba, wynik;

//  DEKLARACJE
long int silnia(int x);

int main(){
    
    scanf("%d", &ilosc);

    for(int i=0; i<ilosc;i++){
        scanf("%d", &liczba);
        wynik = silnia(liczba);
        rezultat[i][i] = wynik/10;
        rezultat[i][i+1] = wynik%10;

    }
    for(int j=0;j<ilosc;j++){
        printf("%d %d\n",rezultat[j][j], rezultat[j][j+1]);
    }

    return 0;
}

//  DEFINICJE
long int silnia(int x){
    
    if(x == 1) return x;
    else{
        x = x * silnia(x-1);
        return x;
    }

}
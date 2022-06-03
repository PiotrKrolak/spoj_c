// https://pl.spoj.com/problems/FLAMASTE/
// Flamaster
// Kasia niedawno poznała wszystkie literki w szkole. Z wielką pasją potrafiła całe dnie spędzać na pisaniu długich słów swoim ulubionym flamastrem. Pisała i pisała "tasiemce" tak długo, aż flamaster wypisał się. Kasia posmutniała. Z trudem, ale udało jej się uprosić swoją mamę, aby kupiła jej nowy pisak. Musiała jednak obiecać, że tym razem będzie bardziej oszczędna przy jego używaniu żeby wystarczył na dłużej. Kasia zaczęła zastanawiać się w jaki sposób będzie mogła zrealizować obietnicę daną mamie.
// Postanowiła, że aby zaoszczędzić wkład flamastra będzie wypisywała skróconą wersję wymyślanych wyrazów. Jeśli miała zamiar napisać więcej niż dwie takie same literki obok siebie w wyrazie, to teraz napisze literkę a następnie liczbę, określającą ilość wystąpień tej literki.
// Zadanie
// Twoim zadaniem jest dla zadanego wyrazu, który wymyśliła Kasia, podanie skróconej wersji tego wyrazu.
// Wejście
// W pierwszej linijce wejścia znajduje się liczba naturalna C, 1 ≤ C ≤ 50, oznaczająca ilość zestawów danych. W kolejnych C wierszach wejścia znajdują się zestawy danych. Każdy zestaw składa się z niepustego wyrazu złożonego z samych dużych liter alfabetu amerykańskiego. Długość wyrazu nie przekracza 200 znaków.
// Wyjście
// Dla każdego zestawu danych, dla zadanego wyrazu, na wyjściu powinna znaleźć się jego skrócona wersja.


#include <stdio.h>
#include <string.h>

int C, ilosc;
char slowo[200];
char wynik[50][200];

int zliczanie_liter(char ciag_znakow[]);
char nowe_slowo(int dlugosc_slowa, char slowo_kasi);

int main(){
    scanf("%d",&C);
    for(int i=0; i<C; i++){

        scanf("%s", &slowo);
        // ilosc = zliczanie_liter(slowo);

        // for(int k=0; k<ilosc; k++){

        // }

        // testy
        printf("%s", slowo);
        printf("%d", ilosc);

    }
    for(int j=0; j<C; j++){
        //printf("%s", wynik[j][j]);
    }

    return 0;
}


int zliczanie_liter(char ciag_znakow[]){
    int ile = strlen(ciag_znakow);

    //printf("%d", ile);
    return ile;
}

// do tworzenia nowego slowa wykorzystac funkcje strcpy() lub strcat() zeby doklejac kolejne znaki - do sprawdzenia !
char nowe_slowo(int dlugosc_slowa, char slowo_kasi[]){
    char nowe_slowo[200];
    char litera;
    int liczba = 0;
    int ktory_znak =0;

    for(int i=0; i<dlugosc_slowa; i++){

        litera = slowo_kasi[i];
        
        if(i < dlugosc_slowa){
            if(slowo_kasi[i] == slowo_kasi[i+1]){
                liczba++;
                if((slowo_kasi[i] != slowo_kasi[i-1]) && (i >= 0)){
                    ktory_znak = i;
                }

            }
            else{

            } 
        } 
        

    }

    return nowe_slowo;
}
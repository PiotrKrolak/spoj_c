// Sprawdź, które spośród danych liczb są liczbami pierwszymi
// Input
// n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]
// Output
// Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku.


#include <stdio.h>

int main(){
    int ilosc, liczba;
    scanf("%d", &ilosc);

    for(int i = 0; i< ilosc; i++){
        scanf("%d", &liczba);
        
        for(int j=2; j<= liczba; j++){
            if(liczba%i == 0) printf("TAK");
            else printf("NIE");
        }

    }
    return 0;
}
// obliczenie inflacji od 2016 do 05.06.2022

#include <stdio.h>

float socjal=500;
float inflacja[] = {2, 1.6, 2.3, 3.4, 5.1, 14};


int main(){
    for(int i=0; i<6; i++){
        socjal = socjal * ((100-inflacja[i])/100);
    }
    printf("%.2f", socjal);
}
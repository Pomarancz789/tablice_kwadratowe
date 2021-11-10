#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main() {
    int tab[5][5]={};
    
    srand(time(NULL));
    
    //wypełnianie tablicy możliwymi rzutami kostki (liczby 1-6)
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            tab[i][j]=1+rand()%(6-1+1);
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    //wypełnianie tablicy możliwymi rzutami kostki (liczby 1-6)
    
    
    //sprawdzanie ile jest szóstek na przekątnej
    for(int h=0; h<6; h++){
        if (tab[h][h]==6) {
            cout << "Szóstka detected na indexach: [" <<h << "][" << h << "]" << endl;
        }
    }
    //sprawdzanie ile jest szóstek na przekątnej
    
    
    //suma elementów nad przekątną
    int sumanad=0;
    for (int k=0; k<5; k++) {
        for (int l=k+1; l<5; l++) {
            sumanad+=tab[k][l];
        }
    }
    cout<<"suma elementow nad przekatna: " << sumanad<< endl;
    //suma elementów nad przekątną
    
    
    //suma elementów pod przekątną
    int sumapod=0;
    for (int k=0; k<5; k++) {
        for (int l=k-1; l>-1; l--) {
            sumapod+=tab[k][l];
        }
    }
    cout<<"suma elementow pod przekatna: " << sumapod<< endl;
    //suma elementów pod przekątną
    
    return 0;
}

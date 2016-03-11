//Esercizio fatto a scuola riguardo i vettori, utilizzando numeri a random, forniti dal calcolatore.
/*
Utilizzo del programma:
Legge da tastiera un numero intero N positivo.
Crea un vettore V1 di N elementi casuali compresi fra 1 e 10.
Legge da tastiera un numero intero K.
Conta quanti valori maggiori di K sono presenti nel vettore V1 e salva il valore nella variabile MK.
Crea un vettore V2 di dimensione MK.
Copia in V2 i valori maggiori di K presenti nel vettore V1.
Stampa V1.
Stampa V2.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int N;

    do
    {
        cout << "Inserisci la grandezza del vettore V1, con numeri positivi: "; //Legge da tastiera quante variabili random
        cin >> N;                                                               //dovranno essere salvate nel vettore V1.
    }
    while(N<0);                                                             //N dovrà essere positivo, altrimenti ripeterà la
                                                                            //richiesta all'infinito.

    int V1[N];

    for(int i=0; i<N; i++)                                                  //Ciclo di variabili random inseriti nel vettore V1
    {
        V1[i]=rand()%10+1;                                                  //I valori random sono compresi tra 10 e 1
    }

    int K;

    cout << "Inserisci il valore di K: ";                                   //Inserisce il valore di K
    cin >> K;

    int MK=0;

    for(int i=0; i<N; i++)                                                  //Conteggio dei valori K maggiori al vettore V1
    {
                                                                            //Contatore di MK
        if(V1[i]>K)
        {
            MK++;
        }
    }

    int V2[MK];                                                             //Copia delle variabili da V1 a V2
    int j=0;
    for(int i=0; i<N; i++)
    {
        if(V1[i]>K)
        {
            V2[j]=V1[i];
            j++;
        }
    }

    cout << "V1: ";

    for(int i=0; i<N; i++)
    {
        cout << V1[i] << " ";                                               //Stampa V1
    }

    cout << endl << "V2: ";

    for(int i=0; i<MK; i++)
    {
        cout << V2[i] << " ";                                               //Stampa V2
    }

    return 0;

//Concluso.
}

// Chiedi all'utente di scegliere tra:
// inserire 1 per sommare due numeri
// inserire 2 per sottrarre due numeri
// inserire 3 per moltiplicare due numeri
// inserire 4 per uscire dal programma
// Restituisci il risultato

#include <stdio.h>

int n_op;
float a, b, ris;

int main (void){
    
    do{
        printf("Scegli tra\n 1. somma due numeri\n 2. sottrai due numeri\n 3. moltiplica due numeri\n 4. esci dal programma\n");
        scanf("%d", &n_op);

        switch (n_op){
            case 1:
                printf("Inserisci il primo numero\n");
                scanf("%f", &a);
                printf("Inserisci il secondo numero\n");
                scanf("%f", &b);
                ris = a+b;
                printf("Il risultato è %f\n", ris);
                break;
    
            case 2:
                printf("Inserisci il primo numero\n");
                scanf("%f", &a);
                printf("Inserisci il secondo numero\n");
                scanf("%f", &b);
                ris= a-b;
                printf("Il risultato è %f\n", ris);
                break;
    
            case 3:
                printf("Inserisci il primo numero\n");
                scanf("%f", &a);
                printf("Inserisci il secondo numero\n");
                scanf("%f", &b);
                ris= a*b;
                printf("Il risultato è %f\n", ris);
                break;

            case 4: 
                break;

            default:
                printf("Metti un valore valido\n");
                break;
            }
    } while (n_op != 4);

    return 0;
}
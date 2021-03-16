#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* ESERCIZIO:
DARE IN INGRESSO IL NOME DI UN FILE TXT
CON STRINGHE NUMERICHE E DI CARATTERI
E IL NOME DI UN FILE DI TESTO DA CREARE
CON TUTTE LE STRINGHE NUMERICHE
CONVERTITE IN BINARIO
E LE STRINGHE DI CARATTERI
IN ORDINE CRESCENTE */

int main(int argc, char const *argv[])
{
    FILE *streamIn;        // dichiarazione dello stream
    int numero; // numero temporaneo che poi viene convertito in binario
    char stringa; // carattere temporaneo per stringa
    
    // controlla che vengano dati 2 argomenti 
    // if (argv[3] != ' ')
    //     printf("Inserire solo 2 argomenti");

    // apertura del file
    streamIn = fopen(argv[1], "r");

    // controlla se il file viene aperto
    if (streamIn == NULL)
    {
        printf("Apertira del file %s non riuscita", argv[1]);
        exit(1);
    }

    // operazioni di lettura del file
    while (!feof(streamIn))
    {
        fscanf(streamIn, "%d", &numero);
        printf("%d\n", numero);
    }

    

    // chiusura dello stream
    fclose(streamIn);

    return 0;
}

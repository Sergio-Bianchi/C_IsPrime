#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int isPrimo(unsigned long long n);


int main() {
    // Dichiarazione variabili + inizializzazione clock
    double fx = 0.0;
    clock_t start, finish;
    double durata;
    start = clock();
    FILE* fp;
    unsigned long long numero = 0;

    // Apro il file
    fp = fopen("../input.txt", "r");
    fscanf(fp,"%lld", &numero);
    fclose(fp);
    fp = fopen("../output.txt", "w");

    fprintf(fp,"%d\n", isPrimo(numero));

    finish = clock();

    durata = (double) (finish - start) / CLOCKS_PER_SEC;

    fprintf(fp,"%8.5f secondi\n", durata);
    fclose(fp);
    return 0;
}


int isPrimo(unsigned long long n) {
    int result = 1;
    if (n == 2 || n == 3 || n == 5 || n == 7) return 1;
    if(n == 1) return 0;
    if (n % 2 == 0) return 0;
    if (n % 3== 0) return 0;
    if (n % 5== 0) return 0;
    int int_sqrt = (int)sqrtl(n);
    for (unsigned long long i = 2; i <= int_sqrt; i++) {
        if (i % 2) {
            if(n%i == 0) return 0;

        }
    }


    return result;
}

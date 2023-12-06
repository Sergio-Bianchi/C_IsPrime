#include <stdio.h>
#include <math.h>
#include <time.h>


int isPrimo(unsigned long long n);


int main() {
    double fx = 0.0;
    clock_t start, finish;
    double durata;


    start = clock();
    printf("clock: %ld\n", start);

    printf("%d\n", isPrimo(10412346523));


    finish = clock();
    durata = (double) (finish - start) / CLOCKS_PER_SEC;


    printf("%8.3f secondi\n", durata);

    return 0;
}


int isPrimo(unsigned long long n) {
    int result = 1;
    if (n == 2 || n == 3 || n == 5 || n == 7) return 1;
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

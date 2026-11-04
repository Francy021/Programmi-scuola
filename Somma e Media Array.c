//Somma e Media Array
//ALT 35 = #, ALT 123,125 = {}, ALT 91,93 = []
#include <stdio.h>
int LeggiNumeri(int numeri[], int n);
int calcoloSomma(int numeri[], int n);
int calcoloMedia(int numeri[], int n);
#define max_array 100

int main() {
    int numeri[max_array]={0}, n=0;
    printf("Calcolo Somma e Media di n numeri (max 100)\n-------------------\nInserire i numeri (0 per uscire):\n");
    n=LeggiNumeri(numeri, n);
    calcoloSomma(numeri, n);
    calcoloMedia(numeri, n);
    return 0;
}


int LeggiNumeri(int numeri[], int n) {int num;
    for(int i=0; i<max_array; i++) {
        scanf("%d", &num);
        if(num==0)
        break;
        numeri[i]=num;
        n++;
    }
    return n;
}


int calcoloSomma(int numeri[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=numeri[i];
    }
    printf("Somma = %d\n", sum);
    return 0;
}


int calcoloMedia(int numeri[], int n) {
    int med=0;
    for(int i=0; i<n; i++) {
        med+=numeri[i];
    }
    printf("Media = %.2f", (float)med/n);
    return 0;
}
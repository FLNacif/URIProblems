/*
 * P1088.cpp
 *
 *  Created on: 06/05/2015
 *      Author: flnacif
 */

#include <stdio.h>
#include <string.h>

int ordena(int vet[],int n);

int main(){
	int n,nvez,i;
	scanf("%d",&n);
	while (n != 0) {
		int vet[n];
		for (i = 0; i < n; i++) {
			scanf("%d",&vet[i]);
		}
		nvez = ordena(vet,n);
		if ((nvez % 2) == 0) {
			printf("Carlos");
		} else {
			printf("Marcelo");
		}

		scanf("%d",&n);
		printf("\n");
	}
}

int ordena(int vet[],int n) {
        int cont = 0;
        int aux;
        int j,i,k;
        for (i = 0; i < n;i++) {
            if(vet[i]!=i+1){
            	cont+=vet[i]-i-1;
            	cont+=vet[i]-1-i-1;
            	aux=vet[i];
            	vet[i] = vet[aux-1];
            	vet[aux-1] = aux;
            	i--;
            }
        }
        return cont;
    }

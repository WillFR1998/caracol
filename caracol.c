#include <stdio.h>
int main(){
int max,i,j;
printf("Ingrese la dimension de la matrz nxn: ");
scanf("%d",&max);
int caracol[max][max];

//Llenar matriz
for(i=0;i<max;i++){
	for(j=0;j<max;j++){
	printf("Ingrese el valor de la fila %d y columna %d: ",i,j );
	scanf("%d",&caracol[i][j]);
	}
}

int count = 1;
    int   aux = max-1;
    
    for(i = 1; i < max; i++) {
        for(j = i-1; j < aux; j++) {
            caracol[max-(aux+1)][j] = count;
            count++;
        }
        for( j = i-1; j < aux; j++) {
            caracol[j][aux] = count;
            count++;
        }
        for(j = aux; j >= (i-1); j--) {
            caracol[aux][j] = count;
            count++;
        }
        aux--;
        for(j = aux; j >= i; j--) {
            caracol[j][max-(aux+2)] = count;
            count++;
        }
    }
    for(i=0;i<max;i++){
	printf("\n");
	for(j=0;j<max;j++){
		printf("%d\t",caracol[i][j]);
}
}
}


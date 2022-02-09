#include <stdio.h>


int main () {
int i,j;
int tab[2][3];
for (i=0; i<2;i++){
	for (j=0;j<3;j++){
		printf("Element %d %d : " , i ,j );
		scanf("%d",&tab[i][j]);
		}	
	}
}

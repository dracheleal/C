#include <stdio.h>

int main(){
	 int n, i, j, aux, k;
	 
	 printf("introduzca la cantidad de terminos primos que desea saber");
	 scanf("%i", &n);
	 
	 for(i = 1; i < n; i++){
	 	k = 0;
	 	for(j = 2; j < i; j++){
	 		aux = i % j;
	 		if (aux == 0){
	 			k = 1;
			 }
		 }
		 if (k != 1){
		 	printf ("%i, ", i);
		 }
	 }
	
	
	return 0;
}

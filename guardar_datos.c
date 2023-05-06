#include <stdio.h>

int main(){
	int conductividad, turbidez, coliformes,i=0,nfuentes;
	float pH;
	char parametros[100],nombreFichero[100];
	FILE *fsalida;
	
	#include <stdio.h>


    printf("Introduce el nombre del archivo: ");
    scanf("%s", nombreFichero);
	printf("Introduce el numero de fuentes que quieres guardar: ");
	scanf("%i",&nfuentes);
	
	
	fsalida = fopen(nombreFichero, "w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}
	
	for(i=1;i<=nfuentes;i++){
		
	printf("Escriba el pH de la fuente %d:\n",i);
	scanf("%f",&pH);
	if(pH<0||pH>14){
	do{
	printf("El valor intrducido es erroneo.Introduzca otra vez el pH de la fuente %d:\n",i);
	scanf("%f",&pH);
	} while(pH<0||pH>14);
	}
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	fprintf(fsalida,"%.1f\t\n", pH);
	}
	fclose(fsalida);
	return 0;
	
	
	}


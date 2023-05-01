#include <stdio.h>

int main(){
	int conductividad, turbidez, coliformes;
	float pH;
	char parametros[100],nombreFichero[100];
	FILE *fentrada, *fsalida;
	
	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	if (fentrada == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;}
	
	
	fsalida = fopen("resultados2.txt", "w"); // escibiendo
		if (fsalida == NULL) {
		printf("Error en la apertura del fichero de salida\n");
		return 0;}
		
	while(fscanf(fentrada, "%s %f %d %d %d", parametros, &pH,&conductividad, &turbidez,&coliformes)!= EOF) {
		fprintf(fsalida, "%s\t %.1f\t %d\t %d\t %d\n", parametros, pH, conductividad,turbidez, coliformes);
		}

	fclose(fentrada);
	fclose(fsalida);

	return 0;
}

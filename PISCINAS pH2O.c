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
	
	
	fsalida = fopen("resultados1.txt", "w"); // escibiendo
		if (fsalida == NULL) {
		printf("Error en la apertura del fichero de salida\n");
		return 0;}
		fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	while(fscanf(fentrada, "%s %f %d %d %d", parametros, &pH,&conductividad, &turbidez,&coliformes)!= EOF) {
		fprintf(fsalida, "%s\t %.1f\t %d\t\t\t %d\t\t %d\n", parametros, pH, conductividad,turbidez, coliformes);
		}

	fclose(fentrada);
	fclose(fsalida);

	return 0;
}

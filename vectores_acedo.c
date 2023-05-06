#include <stdio.h>
#define TAM_MAX 100
struct Tfuentes{
	char fuente[200];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};
int main(){
	struct Tfuentes parametros[TAM_MAX];
	int i, fuentes;
	float media, nphMax;
	FILE *fentrada, *fsalida;

	fentrada = fopen("Lavapies.txt","r"); // leyendo	
	if (fentrada == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;}
	
	
	fsalida = fopen("resultados2.txt", "w"); // escibiendo
		if (fsalida == NULL) {
		printf("Error en la apertura del fichero de salida\n");
		return 0;}
		
	i = 0;
	while (fscanf(fentrada, "%c %f", &parametros[i].fuente, &parametros[i].nph) != EOF){
		printf("%c %f\n", parametros[i].fuente, parametros[i].nph);
		media += parametros[i].nph;
		if (parametros[i].nph > nphMax) {
			nphMax = parametros[i].nph;
		}
		fuentes++;
		i++;
	}
	
	printf("Nota media es: %f\n", media / fuentes);
	printf("Nota máxima es: %f\n", nphMax);

	fclose(fentrada);
	fclose(fsalida);

	return 0;
}

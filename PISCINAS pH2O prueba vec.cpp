#include <stdio.h>
#define TAM_MAX 200
struct Tfuentes{
	char fuente[200];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};
int main(){
	struct Tfuentes parametros[TAM_MAX];
	int i, fuentes=0,fuentephmax=0;
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
	while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez) != EOF){
		printf("%s %.2f %d %d %d \n", parametros[i].fuente, parametros[i].nph, parametros[i].nconductividad, parametros[i].ncoliformes, parametros[i].nturbidez);
		media += parametros[i].nph;
		if (parametros[i].nph > nphMax) {
			nphMax = parametros[i].nph;
			fuentephmax = parametros[i].fuente;
		}
		fuentes++;
		i++;
	}
	
	printf("Nota media es: %f\n", media / fuentes);
	printf("El ph maximo es: %f que pertenece a la fuente %s\n", nphMax,fuentephmax);

	fclose(fentrada);
	fclose(fsalida);

	return 0;
}

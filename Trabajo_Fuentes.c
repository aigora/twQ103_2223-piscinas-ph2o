#include <stdio.h>
#define TAM_MAX 200
struct Tfuentes{
	char fuente[200],buffer[100];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};
int main(){
	struct Tfuentes parametros[TAM_MAX];
	char nombreFichero[200];
	int elec,nfuentes,i,a,b, fuentes=0,fuentephmax=0;
	float sumapH, nphMax=0,nphMin=14;
	FILE *fentrada, *fsalida;
do{printf("\nBuenos dias,introduzca con numero lo que deseas hacer en este programa\n1.Guardar nuevos datos\n2.Guardar datos de un fichero en otro\n3.Comprobar un fichero\n4.Realizar estadisticas\nPulse cualquier otra tecla o numero para salir\n");
	scanf("%d",&elec);
   switch(elec){
   	
   	case 1 :{
   		
	printf("\nIntroduce el nombre del archivo: ");
    scanf("%s", nombreFichero);
	printf("Introduce el numero de fuentes que quieres guardar: ");
	scanf("%i",&nfuentes);
	
	
	fsalida = fopen(nombreFichero, "w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	for(i=1;i<=nfuentes;i++){
		
	printf("Escriba,respectivamente,los valores de la fuente %d,pH,conductividad,coliformes y turbidez:\n",i);
	scanf("%f %d %d %d", &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez);
	fprintf(fsalida,"Fuente_%d\t", i);
	
	
	if(parametros[i].nph<0||parametros[i].nph>14){
	do{
	printf("El valor intrducido es erroneo.Introduzca otra vez el pH de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nph);
	} while(parametros[i].nph<0||parametros[i].nph>14);
	}
	
	if(parametros[i].nconductividad<50||parametros[i].nconductividad>1500){
	do{
	printf("El valor intrducido es erroneo.Introduzca otra vez el numero de conductividad de la fuente %d:\n",i);
	scanf("%d",&parametros[i].nconductividad);
	} while(parametros[i].nconductividad<50||parametros[i].nconductividad>1500);
	}
	
	fprintf(fsalida,"%.1f\t %d\t %d\t\t\t %d\n", parametros[i].nph, parametros[i].nconductividad, parametros[i].ncoliformes, parametros[i].nturbidez);
	}
	fclose(fsalida);
	break;
	}
   	
   	
   	case 2:{
   		
   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	if (fentrada == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;}
	
	printf("Introduce el nombre del archivo donde quieres guardar los datos: ");
    scanf("%s", nombreFichero);
    
    fsalida = fopen(nombreFichero,"w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}	
		
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
	while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez) != EOF){
		fprintf(fsalida,"%s %.1f\t %d\t\t %d\t\t %d\n", parametros[i].fuente, parametros[i].nph, parametros[i].nconductividad, parametros[i].ncoliformes, parametros[i].nturbidez);
		}
	
	
	printf("Se ha realizado correctamente el cambio.\n");

	fclose(fentrada);
	fclose(fsalida);
   		
   		break; }
		
	   
   	
   	case 3:{
	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	if (fentrada == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;}
		fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
		printf( "\nFuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n\n");
	while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez) != EOF){
		printf("%s %.1f\t %d\t\t %d\t\t %d\n", parametros[i].fuente, parametros[i].nph, parametros[i].nconductividad, parametros[i].ncoliformes, parametros[i].nturbidez);
	}
	   }break;
   	
	case 4:{
		
		printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	if (fentrada == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;}
		
		i = 0;
		fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
		while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez) != EOF){
		
		sumapH += parametros[i].nph;
		if (parametros[i].nph > nphMax) {
			nphMax = parametros[i].nph;
			a=i;
		}
		if (parametros[i].nph < nphMin) {
			nphMin = parametros[i].nph;
			b=i;
		}
		fuentes++;
		i++;
	}
	
	printf("Nota media es: %f\n", sumapH / fuentes);
	printf("El ph maximo es: %f que pertenece a la fuente %s\n", nphMax,parametros[a].fuente);
	printf("El ph minimo es: %f que pertenece a la fuente %s\n", nphMin,parametros[b].fuente);
		
		
		break;
	}   	
   	default:{ printf("Saliendo del programa...");
		break;
	   }	
   } 
	
} while(elec==1|| elec==2||elec==3||elec==4);
    
   

	return 0;
}

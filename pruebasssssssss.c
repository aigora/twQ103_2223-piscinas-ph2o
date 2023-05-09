#include <stdio.h>
#include <locale.h>	//biblioteca que permite escribir tildes sin que de error el programa
#define TAM_MAX 200

struct Tfuentes{
	char fuente[200],buffer[100];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};
float calcularmedia(FILE *fentrada) {
    int fuentes,i;
    float  suma, media;
    struct Tfuentes parametros[TAM_MAX];
    
    
   
   while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez) != EOF){
    fuentes++;
     printf("%f",parametros[i].nph);
	    suma += parametros[i].nph; // Acumula la suma de los parámetros
    }

      media = suma/fuentes; // Calcula la media

    return media; // Retorna la media
}
int main(){
	setlocale(LC_CTYPE, "spanish"); //permite utilizar tildes
	
	struct Tfuentes parametros[TAM_MAX];
	char nombreFichero[200];
	int elec,elecdatos,nfuentes,i,a,b, fuentes=0,fuentephmax=0;
	float media,sumapH, nphMax=0,nphMin=14;
	
	FILE *fentrada, *fsalida;
	
	
	do{printf("\nBuenos días,introduzca con número lo que deseas hacer en este programa\n1.Guardar nuevos datos\n2.Guardar datos de un fichero en otro\n3.Comprobar un fichero\n4.Realizar estadísticas\n\nPulse cualquier otra tecla para salir\n");
	scanf("%d",&elec);
	
	switch(elec){
   	
   	case 1 :{
   		
	printf("\nIntroduce el nombre del archivo: ");
    scanf("%s", nombreFichero);
	printf("Introduce el número de fuentes que quieres guardar: ");
	scanf("%i",&nfuentes);
	
	
	fsalida = fopen(nombreFichero, "w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	for(i=1;i<=nfuentes;i++){
		
	printf("Escriba,respectivamente,los valores de la fuente %d, pH (0-14), conductividad (50-1500)mmhos/cm, coliformes y turbidez:\n",i);
	scanf("%f %d %d %d", &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].ncoliformes,&parametros[i].nturbidez);
	fprintf(fsalida,"Fuente_%d\t", i);
	
	if(parametros[i].nph<0||parametros[i].nph>14){
	do{
	printf("El valor introducido es erróneo.Introduzca otra vez el pH de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nph);
	} while(parametros[i].nph<0||parametros[i].nph>14);
	}
	if(parametros[i].nph<7){
		printf("Según el ph de la fuente %d, es acido\n", i);
	} else if(parametros[i].nph == 7){
		printf("Según el ph de la fuente %d, es neutro\n", i);
	} else {
		printf("Según el ph de la fuente %d, es \n", i);
	}
	
	if(parametros[i].nconductividad<0 || parametros[i].nconductividad>1500){
	do{
	printf("El valor introducido es erróneo.Introduzca otra vez el número de conductividad de la fuente %d:\n",i);
	scanf("%d",&parametros[i].nconductividad);
	} while(parametros[i].nconductividad<0 || parametros[i].nconductividad>1500);
	}
	if(parametros[i].nconductividad<=500 && parametros[i].nconductividad>=50){
		printf("Según la conductividad de la fuente %d, su agua es de buena calidad\n", i);
	} else {
		printf("Según la conductividad de la fuente %d, su agua no es de buena calidad\n", i);
	}
	
	
	if(parametros[i].ncoliformes<0 || parametros[i].ncoliformes>1500){
	do{
	printf("El valor introducido es erróneo.Introduzca otra vez el número de coliformes de la fuente %d:\n",i);
	scanf("%d",&parametros[i].ncoliformes);
	} while(parametros[i].ncoliformes<0 || parametros[i].ncoliformes>1500);
	}
	if(parametros[i].ncoliformes>2){
		printf("Según el numero de colifromes de la fuente %d, su agua no es apta para el consumo humano\n", i);
	} else {
		printf("Según el numero de colifromes de la fuente %d, su agua es apta para el consumo humano\n", i);
	}
	
	if(parametros[i].nturbidez<0 || parametros[i].nturbidez>1000){
	do{
	printf("El valor introducido es erróneo.Introduzca otra vez la turbidez de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nturbidez);
	} while(parametros[i].nturbidez<0||parametros[i].nturbidez>1000);
	}
	if(parametros[i].nturbidez<1){
		printf("Según la turbidez de la fuente %d, su agua es apta para el consumo humano\n", i);
	} else if(parametros[i].nturbidez>1 && parametros[i].nturbidez<5){
		printf("Según la turbidez de la fuente %d, su agua no es recomendable para el consumo humano\n", i);
	} else{
		printf("Según la turbidez de la fuente %d, su agua, bajo ningún concepto, debe ser consumida por el ser humano\n", i);
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
	   }
	break;
   	
	case 4:{
	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
	    	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
	    	

	 	
	printf("A continuación, escribe lo que quieras hacer con el programa:\n1.Media de alguno de los parámetros\n2.Desviación típica de alguno de los parámetros\n3.Valor mínimo o máximo de alguno de los parámetros\n");
	scanf("%d",&elecdatos);
	switch(elecdatos){
		case 1:{ 
			printf("¿De qué parámetro quieres calcular la media?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	        scanf("%d",&elecdatos);
	        
		        switch(elecdatos){
				    case 1:{
					printf("La media del pH es:\n");
					
				    media = calcularmedia(fentrada);
					printf("Media ph: %f\n",media);
					fclose(fentrada);
					
						break;
					}
					case 2:{
					printf("La media de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("La media de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("La media de los coliformes es:\n");
						break;
					}
			}	
			break;
		}
		case 2:{
			printf("¿De qué parámetro quieres calcular la desviación típica?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	        scanf("%d",&elecdatos);
	        
		        switch(elecdatos){
				    case 1:{
					printf("La desviación típica del pH es:\n");
						break;
					}
					case 2:{
					printf("La desviación típica de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("La desviación típica de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("La desviación típica de los coliformes es:\n");
						break;
					}
			}
			break;
		}
		case 3:{
			printf("1.Valor máximo\n2.Valor mínimo\n");
	        scanf("%d",&elecdatos);
	         switch(elecdatos){
	         	case 1:{	
				 printf("¿De qué parámetro quieres calcular su valor máximo?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	             scanf("%d",&elecdatos);
	        
		         switch(elecdatos){
				    case 1:{
					printf("El valor máximo del pH es:\n");
						break;
					}
					case 2:{
					printf("El valor máximo de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("El valor máximo de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("El valor máximo de los coliformes es:\n");
						break;
					}
			}	
					break;
				 }
	         	case 2:{
	         	 printf("¿De qué parámetro quieres calcular su valor mínimo:\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	             scanf("%d",&elecdatos);
	        
		         switch(elecdatos){
				    case 1:{
					printf("El valor mínimo del pH es:\n");
						break;
					}
					case 2:{
					printf("El valor mínimo de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("El valor mínimo de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("El valor mínimo de los coliformes es:\n");
						break;
					}
			}
					break;
				 }
	         	
			 }
			break;
		}
    	}
		break;
	}   	
   	default:{ printf("Saliendo del programa...");
		break;
	   }	
   } 
   
} while(elec==1|| elec==2||elec==3||elec==4);
  

}

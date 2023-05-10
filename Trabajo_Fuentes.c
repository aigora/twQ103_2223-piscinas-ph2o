#include <stdio.h>
#include <locale.h> //biblioteca que permite escribir tildes sin que de error el programa
#include <math.h>	
#define TAM_MAX 200

struct Tfuentes{
	char fuente[200],buffer[100];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};

float mediaph(FILE *fentrada) {
	int fuentes,i;
    float media=0,suma=0;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];
   
   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
   
   
   
	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		suma+=parametros[i].nph;
  
 	  	i++;
	  	}
  media=suma/i;

return media;
fclose(fentrada);
 }
 
 float mediaconductividad(FILE *fentrada) {
    int fuentes,i;
    float media=0,suma=0;
    struct Tfuentes parametros[TAM_MAX];
       char nombreFichero[200];
    
       	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
   
   fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
  suma+=parametros[i].nconductividad;
   i++;
  	}
  media=suma/i;

return media;
 }

 float mediaturbidez(FILE *fentrada) {
    int fuentes,i;
    float media=0,suma=0;
    struct Tfuentes parametros[TAM_MAX];
       char nombreFichero[200];
    
       	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
    
   fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
  suma+=parametros[i].nturbidez;
   i++;
  	}
  media=suma/i;
fclose(fentrada);
return media;
 }
 
  float mediacoliformes(FILE *fentrada) {
    int fuentes,i;
    float media=0,suma=0;
    struct Tfuentes parametros[TAM_MAX];
       char nombreFichero[200];
    
       	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
    
   fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
  suma+=parametros[i].ncoliformes;
   i++;
  	}
  media=suma/i;

return media;
 }
    
float desvtipph(FILE *fentrada) {
    int fuentes,i,n;
    char nombreFichero[200];
    float desvtip=0,media,sumat=0,suma=0;
    struct Tfuentes parametros[TAM_MAX];
    
    printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    if (fentrada == NULL) {
	    printf("Error, no puede abrir el fichero.\n");
	    return 0;}
	 fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);   	
	   
	while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		suma+=parametros[i].nph;
  
 	  	i++;
	  	}
  media=suma/i;
   
    fclose(fentrada);
    
	i=0;
    fentrada = fopen(nombreFichero,"r");
    
    fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
    sumat+=pow(parametros[i].nph-media,2);
    i++;
  	}
  desvtip=sqrt(sumat/i);

printf("%f",desvtip);

return desvtip;
 }
 
int main(){
	setlocale(LC_CTYPE, "spanish"); //permite utilizar tildes
	
	struct Tfuentes parametros[TAM_MAX];
	char nombreFichero[200];
	int elec,elecdatos,nfuentes,i,a,b, fuentes=0,fuentephmax=0;
	float desvtip,media,sumapH, nphMax=0,nphMin=14;
	
	FILE *fentrada, *fsalida;
	
	
	do{printf("\nBuenos d�as,introduzca con n�mero lo que deseas hacer en este programa\n1.Guardar nuevos datos\n2.Guardar datos de un fichero en otro\n3.Comprobar un fichero\n4.Realizar estad�sticas\n\nPulse cualquier otra tecla para salir\n");
	scanf("%d",&elec);
	
	switch(elec){
   	
   	case 1 :{
   		
	printf("\nIntroduce el nombre del archivo: ");
    scanf("%s", nombreFichero);
	printf("Introduce el n�mero de fuentes que quieres guardar: ");
	scanf("%i",&nfuentes);
	
	
	fsalida = fopen(nombreFichero, "w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	for(i=1;i<=nfuentes;i++){
		
	printf("Escriba,respectivamente,los valores de la fuente %d,pH,conductividad,turbidez y coliformes:\n",i);
	scanf("%f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes);
	fprintf(fsalida,"Fuente_%d\t", i);
	
	if(parametros[i].nph<0||parametros[i].nph>14){
	do{
	printf("El valor intrducido es err�neo.Introduzca otra vez el pH de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nph);
	} while(parametros[i].nph<0||parametros[i].nph>14);
	}
	
	if(parametros[i].nconductividad<50||parametros[i].nconductividad>1500){
	do{
	printf("El valor intrducido es err�neo.Introduzca otra vez el n�mero de conductividad de la fuente %d:\n",i);
	scanf("%d",&parametros[i].nconductividad);
	} while(parametros[i].nconductividad<50||parametros[i].nconductividad>1500);
	}
	fprintf(fsalida,"%.1f\t %d\t %d\t\t\t %d\n",parametros[i].nph,parametros[i].nconductividad,parametros[i].nturbidez,parametros[i].ncoliformes);
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
	while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		fprintf(fsalida,"%s %.1f\t %d\t\t %d\t\t %d\n",parametros[i].fuente, parametros[i].nph,parametros[i].nconductividad,parametros[i].nturbidez,parametros[i].ncoliformes);
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
	while (fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		printf("%s %.1f\t %d\t\t %d\t\t %d\n", parametros[i].fuente, parametros[i].nph, parametros[i].nconductividad, parametros[i].nturbidez, parametros[i].ncoliformes);
	}
	   }
	break;
   	
	case 4:{
	printf("A continuaci�n, escribe lo que quieras hacer con el programa:\n1.Media de alguno de los par�metros\n2.Desviaci�n t�pica de alguno de los par�metros\n3.Valor m�nimo o m�ximo de alguno de los par�metros\n");
	scanf("%d",&elecdatos);
	switch(elecdatos){
		case 1:{ 
			printf("�De qu� par�metro quieres calcular la media?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	        scanf("%d",&elecdatos);
	        
		        switch(elecdatos){
				    case 1:{

				    media = mediaph(fentrada);	
					printf("La media del pH es:%.2f\n",media);
					
					

						break;
					}
					case 2:{
						media = mediaconductividad(fentrada);
					printf("La media de la conductividad es:%.2f\n",media);
						break;
					}
					case 3:{
						media = mediaturbidez(fentrada);
					printf("La media de la turbidez es:%.2f\n",media);
						break;
					}
					case 4:{
						media = mediacoliformes(fentrada);
					printf("La media de los coliformes es:%.2f\n",media);
						break;
					}
			}	
			break;
		}
		case 2:{
			printf("�De qu� par�metro quieres calcular la desviaci�n t�pica?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	        scanf("%d",&elecdatos);
	        
		        switch(elecdatos){
				    case 1:{
				    	desvtip=desvtipph(fentrada);
					
						break;
					}
					case 2:{
					printf("La desviaci�n t�pica de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("La desviaci�n t�pica de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("La desviaci�n t�pica de los coliformes es:\n");
						break;
					}
			}
			break;
		}
		case 3:{
			printf("1.Valor m�ximo\n2.Valor m�nimo\n");
	        scanf("%d",&elecdatos);
	         switch(elecdatos){
	         	case 1:{	
				 printf("�De qu� par�metro quieres calcular su valor m�ximo?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	             scanf("%d",&elecdatos);
	        
		         switch(elecdatos){
				    case 1:{
					printf("El valor m�ximo del pH es:\n");
						break;
					}
					case 2:{
					printf("El valor m�ximo de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("El valor m�ximo de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("El valor m�ximo de los coliformes es:\n");
						break;
					}
			}	
					break;
				 }
	         	case 2:{
	         	 printf("�De qu� par�metro quieres calcular su valor m�nimo:\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	             scanf("%d",&elecdatos);
	        
		         switch(elecdatos){
				    case 1:{
					printf("El valor m�nimo del pH es:\n");
						break;
					}
					case 2:{
					printf("El valor m�nimo de la conductividad es:\n");
						break;
					}
					case 3:{
					printf("El valor m�nimo de la turbidez es:\n");
						break;
					}
					case 4:{
					printf("El valor m�nimo de los coliformes es:\n");
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
	    
	//	if (parametros[i].nph > nphMax) {
	//		nphMax = parametros[i].nph;
	//		a=i;
	//	}
	//	if (parametros[i].nph < nphMin) {
	//		nphMin = parametros[i].nph;
	//		b=i;
	//	}
	//	fuentes++;
	//	i++;
	//		}
	//	printf("Nota media es: %f\n", sumapH / fuentes);
//	printf("El ph maximo es: %f que pertenece a la fuente %s\n", nphMax,parametros[a].fuente);
//	printf("El ph minimo es: %f que pertenece a la fuente %s\n", nphMin,parametros[b].fuente);  

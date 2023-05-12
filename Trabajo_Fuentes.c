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

float valorminph(FILE *fentrada) {
	int i,a;
    float phmin=14;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
			
    fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
      
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nph <phmin) {
			phmin = parametros[i].nph;
			a=i;
        	i++;
		}
  
 	  	}
 	  	printf("El valor mínimo del pH es %.2f, de la %s\n",parametros[a].nph, parametros[a].fuente);
	  	}
	
	float valorminconduc(FILE *fentrada){
	int i,a;
    float minconduc=1500;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
			
      fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nconductividad < minconduc) {
			minconduc = parametros[i].nconductividad;
			a=i;
        	i++;
			}
 	  		}
 	  		
 	  	printf("El valor mínimo de la conductividad es %d, de la %s\n",parametros[a].nconductividad, parametros[a].fuente);
	  	}
	  	
	float valorminturbidez(FILE *fentrada) {
	int i,a;
    float minturbidez=1000;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
      	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nturbidez < minturbidez) {
			minturbidez = parametros[i].nturbidez;
			a=i;
        	i++;
			}
 	  		}
 	  		
 	  	printf("El valor mínimo de la turbidez es %d, de la %s\n",parametros[a].nturbidez, parametros[a].fuente);
	  	}
	  	
	float valormincoliformes(FILE *fentrada) {
	int i,a;
    float mincoliformes=0;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
     	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].ncoliformes < mincoliformes) {
			mincoliformes = parametros[i].ncoliformes;
			a=i;
	        i++;
			}
  
 	  		}
 	  	printf("El valor mínimo de los coliformes es %d, de la %s\n",parametros[a].ncoliformes, parametros[a].fuente);
	  	}
	  		  	
	float valormaxph(FILE *fentrada) {
	int i,a;
    float nphMax=0;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   
   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
      fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nph > nphMax) {
			nphMax = parametros[i].nph;
			a=i;
	        i++;
			}
  
 	  		}
 	  	printf("El valor máximo del pH es %.2f, de la %s\n",parametros[a].nph, parametros[a].fuente);
	  	}
	  	
	float valormaxconduc(FILE *fentrada) {
	int i,a;
    float conducmax=0;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];
    
   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
      	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
	
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nconductividad > conducmax) {
			conducmax = parametros[i].nconductividad;
			a=i;
	        i++;
			}
  
 	  		}
 	  	printf("El valor máximo de la conductividad es %d, de la %s\n",parametros[a].nconductividad, parametros[a].fuente);
	  	}
	  	
	float valormaxturbidez(FILE *fentrada) {
	int i,a;
    float turbidezmax=0;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;
			}
      fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
        	if (parametros[i].nturbidez > turbidezmax) {
			turbidezmax = parametros[i].nturbidez;
			a=i;
	        i++;
			}
  
 	  		}
 	  	printf("El valor máximo de la turbidez es %d, de la %s\n",parametros[a].nturbidez, parametros[a].fuente);
	  	}
	  	
	float valormaxcoliformes(FILE *fentrada) {
	int i,a;
    float coliformesmax=0;
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
        	if (parametros[i].ncoliformes > coliformesmax) {
			coliformesmax = parametros[i].ncoliformes;
			a=i;
	        i++;
			}
  
 	  		}
 	  	printf("El valor máximo de los coliformes es %d, de la %s\n",parametros[a].ncoliformes, parametros[a].fuente);
	  	}
	  	
	float contadorpH(FILE *fentrada) {
	int i,contador=0;
    float valor;
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
      	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
       	printf("Introduzca el valor que quiere ver cuantas veces aparece en el fichero\n");
			scanf("%f",&valor);
	
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		if(parametros[i].nph==valor){
		contador++;
		}
  
 	  	i++;
	  	}
	  	
		printf("El valor introducido se repite %d veces\n",contador);

		return ;
		fclose(fentrada);
 		}
 		
 	float contadorconduc(FILE *fentrada) {
	int valor,i,contador=0;
   
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   
   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
      fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
       	printf("Introduzca el valor que quiere ver cuantas veces aparece en el fichero\n");
			scanf("%d",&valor);
	
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		if(parametros[i].nconductividad==valor){
		contador++;
		}
  
 	  	i++;
	  	}
	  	
		printf("El valor introducido se repite %d veces\n",contador);

	return ;
	fclose(fentrada);
 	}
 	
 float contadorturbidez(FILE *fentrada) {
	int valor,i,contador=0;
    
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
        fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
       	printf("Introduzca el valor que quiere ver cuantas veces aparece en el fichero\n");
			scanf("%d",&valor);
	
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		if(parametros[i].nturbidez==valor){
		contador++;
		}
  
 	  	i++;
	  	}
	  	
	printf("El valor introducido se repite %d veces\n",contador);
	
	return ;
	fclose(fentrada);
	}
	
 float contadorcoliformes(FILE *fentrada) {
	int valor,i,contador=0;
    
    struct Tfuentes parametros[TAM_MAX];
    char nombreFichero[200];

   	printf("Introduce el nombre del fichero que contiene los datos\n");
	scanf("%s",nombreFichero);
	fentrada = fopen(nombreFichero,"r"); // leyendo	
	
    	if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
      	fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
   
       	printf("Introduzca el valor que quiere ver cuantas veces aparece en el fichero\n");
			scanf("%d",&valor);
	
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
		if(parametros[i].ncoliformes==valor){
		contador++;
		}
  
 	  	i++;
	  	}
	printf("El valor introducido se repite %d veces\n",contador);
	
	return ;
	fclose(fentrada);
	 }
	 
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

	printf("La desviacion tipica es:%f\n",desvtip);

	return desvtip;
 	}
 
 	float desvtipconduc(FILE *fentrada) {
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
		suma+=parametros[i].nconductividad;
  
 	  	i++;
	  	}
	  	
  	media=suma/i;
   
    fclose(fentrada);
    
	i=0;
    fentrada = fopen(nombreFichero,"r");
    
    fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
    sumat+=pow(parametros[i].nconductividad-media,2);
    i++;
  	}
  	desvtip=sqrt(sumat/i);

	printf("La desviacion tipica es:%f\n",desvtip);

	return desvtip;
 	}
 	float desvtipturbidez(FILE *fentrada) {
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
		suma+=parametros[i].nturbidez;
  
 	  	i++;
	  	}
 	media=suma/i;
   
    fclose(fentrada);
    
	i=0;
    fentrada = fopen(nombreFichero,"r");
    
    fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
    sumat+=pow(parametros[i].nturbidez-media,2);
    i++;
  	}
  	
  	desvtip=sqrt(sumat/i);

	printf("La desviacion tipica es:%f\n",desvtip);

	return desvtip;
 	}
 	
 	float desvtipcoliformes(FILE *fentrada) {
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
		suma+=parametros[i].ncoliformes;
  
 	  	i++;
	  	}
	  	
  	media=suma/i;
   
    fclose(fentrada);
    
	i=0;
    fentrada = fopen(nombreFichero,"r");
    
    fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
    while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
    sumat+=pow(parametros[i].ncoliformes-media,2);
    i++;
  	}
  	
  	desvtip=sqrt(sumat/i);

	printf("La desviacion tipica es:%f\n",desvtip);

	return desvtip;
 	}
 
	int main(){
	setlocale(LC_CTYPE, "spanish"); //permite utilizar tildes
	
	struct Tfuentes parametros[TAM_MAX];
	char nombreFichero[200];
	int contador,elec,elecdatos,nfuentes,i,a,b, fuentes=0,fuentephmax=0;
	float valor,valormax,valormin,desvtip,media,sumapH, nphMax=0,nphMin=14;
	
	FILE *fentrada, *fsalida;
	
	do{printf("\nBuenos días,introduzca con número lo que deseas hacer en este programa\n1.Guardar nuevos datos\n2.Guardar datos de un fichero en otro\n3.Mostrar un fichero por pantalla\n4.Realizar estadísticas\n5.Comprobar si las fuente están aceptadas por la OMS\n\nPulse cualquier otra tecla para salir\n");
	scanf("%d",&elec);
	
	switch(elec){
   	
   	case 1 :{
   		
	printf("\nIntroduce el nombre del archivo donde quieres guardar los datos: ");
    scanf("%s", nombreFichero);
	printf("Introduce el número de fuentes que quieres guardar: ");
	scanf("%i",&nfuentes);

	fsalida = fopen(nombreFichero, "w"); // escibiendo
	if (fsalida == NULL) {
	printf("Error en la apertura del fichero de salida\n");}
	fprintf(fsalida, "Fuentes\t pH\t Conductividad\t Turbidez\t Coliformes\t\n");
	printf("\n*NOTA: Los valores permitidos por la OMS son los siguientes:\n ph: entre 7 y 8.5\n Conductividad: entre 50 y 500\n Coliformes: entre 0 y 2\n Turbidez: entre 0 y 5 (lo ideal es entre 0 y 1)\n\n");
	for(i=1;i<=nfuentes;i++){
		
	printf("Escriba,respectivamente,los valores de la fuente %d,pH,conductividad,turbidez y coliformes:\n",i);
	scanf("%f %d %d %d",&parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes);
	fprintf(fsalida,"Fuente_%d\t", i);
	
	if(parametros[i].nph<0||parametros[i].nph>14){
	do{
	printf("El valor intrducido es erróneo.Introduzca otra vez el pH de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nph);
	} while(parametros[i].nph<0||parametros[i].nph>14);
	}
	
	if(parametros[i].nconductividad<50||parametros[i].nconductividad>1500){
	do{
	printf("El valor intrducido es erróneo.Introduzca otra vez el número de conductividad de la fuente %d:\n",i);
	scanf("%d",&parametros[i].nconductividad);
	} while(parametros[i].nconductividad<50||parametros[i].nconductividad>1500);
	}
	
	if(parametros[i].ncoliformes<0 || parametros[i].ncoliformes>1500){
	do{
	printf("El valor introducido es erróneo.\nIntroduzca de nuevo el número de coliformes de la fuente %d:\n",i);
	scanf("%d",&parametros[i].ncoliformes);
	} while(parametros[i].ncoliformes<0 || parametros[i].ncoliformes>1500);
	} 

	if(parametros[i].nturbidez<0 || parametros[i].nturbidez>1000){
	do{
	printf("El valor introducido es erróneo.Introduzca otra vez la turbidez de la fuente %d:\n",i);
	scanf("%f",&parametros[i].nturbidez);
	} while(parametros[i].nturbidez<0||parametros[i].nturbidez>1000);
	}
	
	// copia aqui tu parte juan
	if(parametros[i].nph<7 || parametros[i].nph>8.5){
		printf("Como los valores del ph no se encuentran entre 7 y 8.5, la fuente %d no está permitida por la OMS.\n", i);	
	} else if(parametros[i].nconductividad>500 || parametros[i].nconductividad<50){
		printf("Como los valores de la conductividad no se encuentran entre 50 y 500, la fuente %d no está permitida por la OMS\n", i);
		if(parametros[i].ncoliformes>2){
			printf("Los valores introducidos de coliformes tampoco son aceptados.\n");
		} else if(parametros[i].nturbidez>5){
			printf("Los valores introducidos de turbidez tampoco son aceptados.\n\n");
		}
	} else if(parametros[i].ncoliformes>2){
		printf("Como el número de coliformes es superior a 2, la fuente %d no está permitida por la OMS.\n", i);
		if(parametros[i].nturbidez>5){
			printf("Los valores introducidos de turbidez tampoco son aceptados.\n\n");
		}
	} else if(parametros[i].nturbidez>5){
		printf("Como la turbidez es superior a 5, la fuente %d no está permitida por la OMS.\n", i);
	} else{
		printf("Como todos los valores introducidos se encuentran entre los aceptados por la OMS, la fuente %d estaría permitida.\n", i);
		if(parametros[i].nturbidez<1){
			printf("Además, la turbidez de la fuente es ideal ya que es menor que 1\n");
		}
	}
	
	if(parametros[i].nph<7){
		printf("El ph de la fuente %d es acido\n", i);
	    } else if (parametros[i].nph>7) {
	    	printf("El ph de la fuente %d es básico\n", i);
		} else {
			printf("El ph de la fuente %d es neutro\n", i);
		}
		if (parametros[i].nconductividad>500 || parametros[i].nconductividad<50){
			printf("Los valores introducidos de la conductividad tampoco son aceptados.\n");
		} else if(parametros[i].ncoliformes>2){
			printf("Los valores introducidos de coliformes tampoco son aceptados.\n");
		} else if(parametros[i].nturbidez>5){
			printf("Los valores introducidos de turbidez tampoco son aceptados.\n\n");
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
		printf("%s %.2f\t %d\t\t %d\t\t %d\n", parametros[i].fuente, parametros[i].nph, parametros[i].nconductividad, parametros[i].nturbidez, parametros[i].ncoliformes);
	}
	   }
	break;
   	
	case 4:{
	printf("A continuación, escribe lo que quieras hacer con el programa:\n1.Media de alguno de los parámetros\n2.Desviación típica de alguno de los parámetros\n3.Valor máximo o mínimo de alguno de los parámetros\n4.Buscar cuantas veces se repite un parametro\n");
	scanf("%d",&elecdatos);
	switch(elecdatos){
		case 1:{ 
			printf("¿De qué parámetro quieres calcular la media?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
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
			printf("¿De qué parámetro quieres calcular la desviación típica?\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
	        scanf("%d",&elecdatos);
	        
		        switch(elecdatos){
				    case 1:{
				    	desvtip=desvtipph(fentrada);
						break;
					}
					case 2:{
					desvtip=desvtipconduc(fentrada);
						break;
					}
					case 3:{
					desvtip=desvtipturbidez(fentrada);
						break;
					}
					case 4:{
					desvtip=desvtipcoliformes(fentrada);
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
					valormax=valormaxph(fentrada);
						break;
					}
					case 2:{
					valormax=valormaxconduc(fentrada);
						break;
					}
					case 3:{
					valormax=valormaxturbidez(fentrada);
						break;
					}
					case 4:{
					valormax=valormaxcoliformes(fentrada);
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
					valormin=valorminph(fentrada);
						break;
					}
					case 2:{
					valormin=valorminconduc(fentrada);
						break;
					}
					case 3:{
					valormin=valorminturbidez(fentrada);
						break;
					}
					case 4:{
					valormin=valormincoliformes(fentrada);
						break;
					}
			}
					break;
				 }
			 }
			break;
		}
		case 4:{
		printf("Con que parametro desea calcular:\n1.pH\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
		scanf("%d",&elec);
		switch(elec){
			case 1:{
		    	contador=contadorpH(fentrada);
				break;
			}
			case 2:{
				contador=contadorconduc(fentrada);
				break;
			}
			case 3:{
				contador=contadorturbidez(fentrada);
				break;
			}
			case 4:{
				contador=contadorcoliformes(fentrada);
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
	
	return 0;
	}

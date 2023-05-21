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

float mejorfuente(FILE *fentrada) {
    int i=1, a;
    float valortotal = 0, valormax = 0, valorph = 0, valorconduc = 0, valorcol = 0, valorturb = 0;
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
	//if ph
	if(parametros[i].nph>7 && parametros[i].nph<8.5){
		valorph = 20;
	} else if(parametros[i].nph>8.5){
		valorph = 10;
	} else{
		valorph = 5;
	}
	//if conductividad
	if(parametros[i].nconductividad>50 && parametros[i].nconductividad<500){
		valorconduc = 20;
	} else{
		valorconduc = 5; 
	}
	//if coliformes
	if(parametros[i].ncoliformes>0 && parametros[i].ncoliformes<2){
		valorcol = 10;
	} else if(parametros[i].ncoliformes == 0){
		valorcol = 20;
	} else{
		valorcol = 5;
	}
	//if turbidez
    if(parametros[i].nturbidez>=1 && parametros[i].nturbidez<5){
    	valorturb = 10;
	} else if(parametros[i].nturbidez>0 && parametros[i].nturbidez<1){
		valorturb = 15;
	} else if (parametros[i].nturbidez == 0){
		valorturb = 20;
	}else{
		valorturb = 5;
	}
	
	valortotal = valorph + valorturb + valorconduc + valorcol;
	if (valortotal > valormax) {
		valormax = valortotal;
		a=i;
	}
	i++;
	}
	printf("Basándonos en los valores de sus parámetros, la mejor fuente es la fuente %d\n", a);
	return valortotal;
}

float peorfuente(FILE *fentrada) {
    int i=1, a = 0;
    float valortotal = 0, valormin = 80, valorph = 0, valorconduc = 0, valorcol = 0, valorturb = 0;
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
	//if ph
	if(parametros[i].nph>7 && parametros[i].nph<8.5){
		valorph = 20;
	} else if(parametros[i].nph>8.5){
		valorph = 10;
	} else{
		valorph = 5;
	}
	//if conductividad
	if(parametros[i].nconductividad>50 && parametros[i].nconductividad<500){
		valorconduc = 20;
	} else{
		valorconduc = 5; 
	}
	//if coliformes
	if(parametros[i].ncoliformes>0 && parametros[i].ncoliformes<2){
		valorcol = 10;
	} else if(parametros[i].ncoliformes == 0){
		valorcol = 20;
	} else{
		valorcol = 5;
	}
	//if turbidez
    if(parametros[i].nturbidez>=1 && parametros[i].nturbidez<5){
    	valorturb = 10;
	} else if(parametros[i].nturbidez>0 && parametros[i].nturbidez<1){
		valorturb = 15;
	} else if (parametros[i].nturbidez == 0){
		valorturb = 20;
	}else{
		valorturb = 5;
	}
	valortotal = valorph + valorturb + valorconduc + valorcol;
	if (valortotal < valormin) {
		valormin = valortotal;
		a=i;
	}
	i++;
	}
	printf("Basándonos en los valores de sus parámetros, la peor fuente es la fuente %d\n", a);
	return valortotal;
}

float compararfuentes(FILE *fentrada) {
    int b = 1, c = 1, i = 1;
    float comparacion;
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
	i++;
    }
	printf("Introduzca las fuentes que desea comparar:\n");
	scanf("%d" "%d", &b, &c);
	//comparacion ph
	if(parametros[b].nph > parametros[c].nph){
		printf("El ph de la fuente %d es %.2f y es mayor que el ph de la fuente %d, que es %.2f\n", b, parametros[b].nph, c, parametros[c].nph);
	} else if(parametros[b].nph < parametros[c].nph){
		printf("El ph de la fuente %d es %.2f y es mayor que el ph de la fuente %d, que es %.2f\n", c, parametros[c].nph, b, parametros[b].nph);
	} else{
		printf("Los valores del ph de las fuentes %d y %d son iguales con un valor de: %.2f\n", b, c, parametros[b].nph);
	}
	//comparacion conductividad
	if(parametros[b].nconductividad > parametros[c].nconductividad){
		printf("La conductividad de la fuente %d es %d y es mayor que la conductividad de la fuente %d, que es %d\n", b, parametros[b].nconductividad, c, parametros[c].nconductividad);
	} else if(parametros[b].nconductividad < parametros[c].nconductividad){
		printf("La conductividad de la fuente %d es %d y es mayor que la conductividad de la fuente %d, que es %d\n", c, parametros[c].nconductividad, b, parametros[b].nconductividad);
	} else{
		printf("Los valores de conductividad de las fuentes %d y %d son iguales con un valor de: %f\n", b, c, parametros[b].nconductividad);
	}
	//comparacion turbidez
	if(parametros[b].nturbidez > parametros[c].nturbidez){
		printf("La turbidez de la fuente %d es %d y es mayor que la turbidez de la fuente %d, que es %d\n", b, parametros[b].nturbidez, c, parametros[c].nturbidez);
	} else if(parametros[b].nturbidez < parametros[c].nturbidez){
		printf("La turbidez de la fuente %d es %d y es mayor que la turbidez de la fuente %d, que es %d\n", c, parametros[c].nturbidez, b, parametros[b].nturbidez);
	} else{
		printf("Los valores de turbidez de las fuentes %d y %d son iguales con un valor de %d\n", b, c, parametros[b].nturbidez);
	}
	//comparacion coliformes
	if(parametros[b].ncoliformes > parametros[c].ncoliformes){
		printf("El número de coliformes de la fuente %d es %d y es mayor que el número de coliformes de la fuente %d, que son %d\n", b, parametros[b].ncoliformes, c, parametros[c].ncoliformes);
	} else if(parametros[b].ncoliformes < parametros[c].ncoliformes){
		printf("El número de coliformes de la fuente %d es %d y es mayor que el número de coliformes de la fuente %d, que son %d\n", c, parametros[c].ncoliformes, b, parametros[b].ncoliformes);
	} else{
		printf("Los valores de coliformes de las fuentes %d y %d son iguales: %d\n", b, c, parametros[b].ncoliformes);
	}
	return comparacion;
    }
    
    float repararfuentes(FILE *fentrada){
 	int i=1,costeph,f=0,cambio,elecc,valorconductividad=0,valorturbidez=0,valorcoliformes=0;
 	float coliformescambio=0,phcambio=0,conductividadcambio=0,turbidezcambio=0,difph=0,difconductividad=0;
 	float litrosne=0,coste=0,valorph=0,gramosne=0,cambioconductividad=0,cambioturbidez=0,cambiocoliformes=0,difconduc,difturb,difcolif;
 	struct Tfuentes parametros[TAM_MAX];
 	char nombreFichero[200];
    
       	printf("Introduce el nombre del fichero que contiene los datos\n");
		scanf("%s",nombreFichero);
		fentrada = fopen(nombreFichero,"r");
		if (fentrada == NULL) {
	    	printf("Error, no puede abrir el fichero.\n");
	    	return 0;}
 		printf("Introduce el número de la fuente a cambiar:");
 		scanf("%d",&f);
 		fscanf(fentrada, "%s %s %s %s %s", &parametros[i].fuente, &parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente,&parametros[i].fuente);
		while(fscanf(fentrada, "%s %f %d %d %d", &parametros[i].fuente, &parametros[i].nph,&parametros[i].nconductividad,&parametros[i].nturbidez,&parametros[i].ncoliformes) != EOF){
	  				i++;
  			}
  		valorph=parametros[f].nph;
  		valorconductividad=parametros[f].nconductividad;
  		valorturbidez=parametros[f].nturbidez;
  		valorcoliformes=parametros[f].ncoliformes;
 		printf("Estos son los valores de la fuente seleccionada %f %d %d %d \n", valorph,valorconductividad,valorturbidez,valorcoliformes);
 		printf("Introduce el parametro a cambiar:\n1.Ph\n2.Conductividad\n3.Turbidez\n4.Coliformes\n");
 		scanf("%d",&cambio);
 		
 		switch(cambio){
 			case 1:{
 				printf("Introduce el ph al que se quiere cambiar:");
 				scanf("%f",&phcambio);
 				if(phcambio<7||phcambio>8){
 					printf("El valor al que quiere cambiar esta fuera de los parámetros recomendados por sanidad\n");
 					do{
 						printf("Como el valor al que se desea cambiar esta fuera de los parametros recomendados por la OMS esta seguro que desea seguir de ser asi pulse 1 si quiere cambiar el valor de cambio pulse 2\n");
 						scanf("%d",&elecc);
					}while(elecc>2 ||elecc<1);
					}
	  			if(parametros[f].nph<7){
					printf("%f",valorph);	
					difph=phcambio-valorph;
					printf("%f",difph);
					if(difph<0){
						difph=-difph;
						printf("La diferencia de los ph es %.2f\n",difph);
						gramosne=274-(36*difph);
						if(valorph<phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar aproximdamente %.2f bicarbonato de sodio",phcambio,gramosne);
						}else if(valorph>phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar aproximadamente %.2f ácido muriático",phcambio,gramosne);
							}
					}else if(difph>0){
						printf("La diferencia de ph es %f",difph);
						gramosne=274-(36*difph);
						if(valorph<phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar %.2f bicarbonato de sodio",phcambio,gramosne);
						}else if(valorph>phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar  %.2f ácido muriático",phcambio,gramosne);
							}
						}
					}else if(parametros[f].nph>=7){
						valorph=parametros[f].nph;		
						difph=phcambio-valorph;
						printf("La diferencia de los ph es %.2f\n",difph);
						if(difph<0){
							difph=-difph;
							gramosne=274-(36*difph);
						if(valorph<phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar %.2f bicarbonato de sodio",phcambio,gramosne);
						}else if(valorph>phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar  %.2f ácido muriático",phcambio,gramosne);
							}
						}else if(difph>0){
						printf("La diferencia de ph es %f",difph);
						gramosne=274-(36*difph);
						if(valorph<phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar %.2f bicarbonato de sodio",phcambio,gramosne);
						}else if(valorph>phcambio){
							printf("Para modificar el valor del ph hasta %f de la fuente se necesitaran aplicar  %.2f ácido muriático",phcambio,gramosne);
							}
						}
					}
					break;
					}
			case 2:{
				printf("Introduce la conductividad a la que se quiere cambiar:");
 				scanf("%f",&cambioconductividad);
 				if(cambioconductividad<50||cambioconductividad>500){
 					printf("El valor al que quiere cambiar esta fuera de los parámetros recomendados por sanidad\n");
 					do{
 						printf("Como el valor al que se desea cambiar esta fuera de los parametros recomendados por la OMS esta seguro que desea seguir de ser asi pulse 1 si quiere cambiar el valor de cambio pulse 2\n");
 						scanf("%d",&elecc);
 						if(elecc==2){
 							printf("Vuelva a introducir el valor de la conductividad al que se quiere cambiar");
 							scanf("%f",&cambioconductividad);
						 }
					}while(elecc!=2 ||elecc!=1);
					}
	  			if(parametros[f].nconductividad<500){	
					difconduc=cambioconductividad-(float)valorconductividad;
					printf("%f",difconduc);
					if(difconduc<0){
						difconduc=-difconduc;
						printf("La diferencia de las conductividades es %.2f\n",difconduc);
						if(valorconductividad<cambioconductividad){
							printf("Para modificar el valor de la conductividad hasta %f se necesitara ionizar el agua de la fuentge ",cambioconductividad);
						}else if(valorconductividad>cambioconductividad){
							printf("Para modificar el valor de la conductividad hasta %f se necesitara desionizar el agua de la fuente ",cambioconductividad);
						}
					}else if(difconduc>0){
						printf("La diferencia de las conductividades es %.2f\n",difconduc);
						if(valorconductividad<cambioconductividad){
								printf("Para modificar el valor de la conductividad hasta %f se necesitara ionizar el agua de la fuentge ",cambioconductividad);
						}else if(valorconductividad>cambioconductividad){
							printf("Para modificar el valor de la conductividad hasta %f se necesitara desionizar el agua de la fuente ",cambioconductividad);
						}
						}
					}else if(parametros[f].nconductividad>=500){
						difturb=cambioconductividad-(float)valorconductividad;
						if(difconduc<0){
							difconduc=-difconduc;
							printf("La diferencia de las conductividades es %.2f\n",difconduc);
							if(valorconductividad<cambioconductividad){
								printf("Para modificar el valor de la conductividad hasta %f se necesitara ionizar el agua de la fuentge ",cambioconductividad);
							}else if(valorconductividad>cambioconductividad){
								printf("Para modificar el valor de la conductividad hasta %f se necesitara desionizar el agua de la fuente ",cambioconductividad);
							}
						}else if(difconduc>0){
							printf("La diferencia de las conductividades es %.2f\n",difconduc);
							if(valorconductividad<cambioconductividad){
								printf("Para modificar el valor de la conductividad hasta %f se necesitara ionizar el agua de la fuentge ",cambioconductividad);
							}else if(valorconductividad>cambioconductividad){
								printf("Para modificar el valor de la conductividad hasta %f se necesitara desionizar el agua de la fuente ",cambioconductividad);
							}
						}
					}
					break;
				}
			case 3: {
					printf("Introduce la conductividad a la que se quiere cambiar:");
 					scanf("%f",&cambioturbidez);
 					if(cambioturbidez>5){
 						printf("El valor al que quiere cambiar esta fuera de los parámetros recomendados por sanidad\n");
 						do{
 							printf("Como el valor al que se desea cambiar esta fuera de los parametros recomendados por la OMS esta seguro que desea seguir de ser asi pulse 1 si quiere cambiar el valor de cambio pulse cualquier tecla\n");
 							scanf("%d",&elecc);
 							if(elecc==2){
 								printf("Vuelva a introducir el valor de la turbidez al que se quiere cambiar");
 								scanf("%f",&cambioturbidez);
							 }
						}while(elecc!=1);
					}
					if(parametros[f].nturbidez<=5){	
						difturb=cambioturbidez-(float)valorturbidez;
						printf("%f",difconduc);
						if(difturb<0){
							difturb=-difturb;
							printf("La diferencia de las conductividades es %.2f\n",difconduc);
							if(valorturbidez<cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara aplicar ",cambioturbidez);
							}else if(valorturbidez>cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara aplicar ",cambioturbidez);
							}
						}else if(difturb>0){
							printf("La diferencia de las conductividades es %.2f\n",difturb);
							if(valorturbidez<cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara aplicar ",cambioturbidez);
							}else if(valorturbidez>cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara aplicar ",cambioturbidez);
							}
						}
						}else if(parametros[f].nturbidez>5){
							difturb=cambioturbidez-(float)valorturbidez;
							if(difturb<0){
								difturb=-difturb;
								printf("La diferencia de las conductividades es %.2f\n",difturb);
								if(valorturbidez<cambioturbidez){
									printf("Para modificar el valor de la turbidez hasta %f se necesitara ionizar el agua de la fuentge ",cambioturbidez);
								}else if(valorturbidez>cambioturbidez){
									printf("Para modificar el valor de la turbidez hasta %f se necesitara desionizar el agua de la fuente ",cambioturbidez);
								}
						}else if(difturb>0){
							printf("La diferencia de las conductividades es %.2f\n",difturb);
							if(valorturbidez<cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara ionizar el agua de la fuentge ",cambioturbidez);
							}else if(valorturbidez>cambioturbidez){
								printf("Para modificar el valor de la turbidez hasta %f se necesitara desionizar el agua de la fuente ",cambioturbidez);
							}
						}
					}
					break;
				}
			case 4: {
					printf("Introduce los coliformes a los que se quiere cambiar:");
 					scanf("%f",&cambiocoliformes);
 					if(cambiocoliformes==valorcoliformes){
 						printf("Estas introduciendo el mismo valor por favor introduzca de nuevo el valor al que se desea cambiar ");
 						scanf("%f",cambiocoliformes); 
					 }
 					if(cambiocoliformes>2){
 						printf("El valor al que quiere cambiar esta fuera de los parámetros recomendados por sanidad\n");
 						do{
 							printf("Como el valor al que se desea cambiar esta fuera de los parametros recomendados por la OMS esta seguro que desea seguir de ser asi pulse 1 si quiere cambiar el valor de cambio pulse cualquier tecla\n");
 							scanf("%d",&elecc);
 							if(elecc==2){
 								printf("Vuelva a introducir el valor de la turbidez al que se quiere cambiar");
 								scanf("%f",&cambiocoliformes);
							 }
						}while(elecc!=1);
					}
					if(parametros[f].ncoliformes<=2){	
						difcolif=cambiocoliformes-(float)valorcoliformes;
						printf("%f",difcolif);
						if(difcolif<0){
							difcolif=-difcolif;
							printf("La diferencia de las conductividades es %.2f\n",difcolif);
							if(valorcoliformes<cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara aplicar ",cambiocoliformes);
							}else if(valorcoliformes>cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara aplicar ",cambiocoliformes);
							}
						}else if(difcolif>0){
							printf("La diferencia de las conductividades es %.2f\n",difcolif);
							if(valorcoliformes<cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara aplicar ",cambiocoliformes);
							}else if(valorcoliformes>cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara aplicar ",cambiocoliformes);
							}
						}
						}else if(parametros[f].ncoliformes>2){
							difcolif=cambiocoliformes-(float)valorcoliformes;
							if(difcolif<0){
								difcolif=-difcolif;
								printf("La diferencia de las conductividades es %.2f\n",difcolif);
								if(valorcoliformes<cambiocoliformes){
									printf("Para modificar el valor de los coliformes hasta %f se necesitara ionizar el agua de la fuentge ",cambiocoliformes);
								}else if(valorturbidez>cambiocoliformes){
									printf("Para modificar el valor de los coliformes hasta %f se necesitara desionizar el agua de la fuente ",cambiocoliformes);
								}
						}else if(difcolif>0){
							printf("La diferencia de las conductividades es %.2f\n",difcolif);
							if(valorcoliformes<cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara ionizar el agua de la fuentge ",cambiocoliformes);
							}else if(valorcoliformes>cambiocoliformes){
								printf("Para modificar el valor de los coliformes hasta %f se necesitara desionizar el agua de la fuente ",cambiocoliformes);
							}
						}
					}
					break;
				}
		 }
 	return coste;
fclose(fentrada);
 }

    
	int main(){
	setlocale(LC_CTYPE, "spanish"); //permite utilizar tildes
	
	struct Tfuentes parametros[TAM_MAX];
	char nombreFichero[200];
	int contador,elec,elecdatos,nfuentes,i,a,b, fuentes=0,fuentephmax=0,coste;
	float valor,valormax,valormin,desvtip,media,sumapH, nphMax=0,nphMin=14, valortotal, comparacion;
	
	FILE *fentrada, *fsalida;
	
	do{printf("\nBuenos días,introduzca con número lo que deseas hacer en este programa\n1.Guardar nuevos datos\n2.Guardar datos de un fichero en otro\n3.Mostrar un fichero por pantalla\n4.Realizar estadísticas\n\nPulse cualquier otra tecla para salir\n");
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
	printf("A continuación, escribe lo que quieras hacer con el programa:\n1.Media de alguno de los parámetros\n2.Desviación típica de alguno de los parámetros\n3.Valor máximo o mínimo de alguno de los parámetros\n4.Buscar cuantas veces se repite un parametro\n5.Mejor o peor fuente\n6.Comparar parametros entre 2 fuentes\n7.Corregir valores\n");
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
		case 5: {
	    printf("¿Qué desea saber?\n1.Mejor fuente\n2.Peor fuente\n");
		scanf("%d",&elec);
		switch(elec){
			case 1:{
				valortotal=mejorfuente(fentrada);
				break;
			}
			case 2:{
				valortotal=peorfuente(fentrada);
				break;
			}
		}
			break;	
	    }
	    case 6: {
	    	comparacion=compararfuentes(fentrada);
			break;
		}
		case 7:{
			coste=repararfuentes(fentrada);
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

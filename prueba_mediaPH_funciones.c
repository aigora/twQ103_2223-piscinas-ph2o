#include <stdio.h>
#define TAM_MAX 200
struct Tfuentes{
	char fuente[200],buffer[100];
	float nph;
	int nconductividad;
	int ncoliformes;
	int nturbidez;
};

float fmedia(float parametros[i].nph , int nfuentes)

int main(){
   struct Tfuentes parametros[TAM_MAX];
   
        printf("Media de ph: %.2f\n",fmedia(parametros[i].nph), nfuentes );
        return 0;
}

int i,nfuentes;
	float fmedia(float parametros[i].nph , int nfuentes) {
        int i;
        for (i=0; i<nfuentes; i++) {
            sumapH += parametros[i].nph;
        }
        return (sumapH/nfuentes);
    }

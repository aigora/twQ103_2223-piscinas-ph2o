#include <stdio.h>

int main(){
	int conductividad, turbidez, coliformes;
	float pH;
	char parametros;
	
	FILE*piscinaspH20;
	piscinaspH20 = fopen("202201_Lavapies.txt", "r");
	
	if (piscinaspH20 == NULL) {
		printf("Error, no puede abrir el fichero.\n");
		return 0;
	}
	/*
	fscanf(piscinaspH20, "%d", &conductividad);
	printf("La conductividad es: %d\n", conductividad);
	*/
	
	fclose(piscinaspH20);
	return 0;
}

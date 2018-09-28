#include <stdio.h>
#define INTRO '\n'
#define TABULADO '\t'


int main(int argc, char** argv){
	
	int c='\0';
	int numCaracteres=0;
	int numLinea=0;
	//char c='\0';
	
	c=getchar(); //coge datos de un fichero o del teclado	
	
	/*
	while(c!=INTRO){
		
		putchar(c);//mostrar por pantalla
		c=getchar();
	}
	printf("\n");
	// otra forma 
	while((c=getchar())!=INTRO){
		++numCaracteres;
		putchar(c);//mostrar por pantalla
		
	}
	printf("\nWHILE El numero de caracteres con el segundo while es: %d", numCaracteres);
	
	//con un for
	numCaracteres=0;
	for(numCaracteres=0; (c=getchar())!=INTRO; numCaracteres++);//si no hay instrucciones dentro del for podemos finalizar con ;
	printf("\nFOR El numero de caracteres con el segundo while es: %d", numCaracteres);
	*/
	
	//trabajo con ficheros
	//EOF finalizacion de fichero -1 de base o 0 dependiendo del compilador, es un define de la librearia stdio.h
	/*while((c=getchar())!=EOF){
		
		numCaracteres++;
		
		if(c==INTRO)
			++numLinea;
	}
	
		printf("\nEl numero de caracteres en el fichero es %d y %d lineas", numCaracteres, numLinea);
	*/
	//trabajo con ficheros contando elementos 
	numLinea=0;
	for(numCaracteres=0;(c=getchar())!=EOF;++numCaracteres){
		
		if(c==INTRO)
			++numLinea;
		
	}
	printf("\nEl numero de caracteres en el fichero es %d y %d lineas", numCaracteres, numLinea);
}
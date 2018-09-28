#include <stdio.h>
#define SPACE ' '
#define INTRO '\n'
#define TABULAR '	'

int main(int argc, char** argv){
	int c='\0', d='\0';
	int vocales=0, consonantes=0;
	int comillas=0, i=0;
	int caracteres=0, espacios=0, tabuladores=0, intros=0;
	int contadorPalabra=0, longitudPalabra=0, comparacion=0;
	//1.-Construir un programa que imprima el valor de la constante definida EOF en tu ordenador.
	// ¿Qué ha devuelto? ▒ ¿Qué valor tiene? ¿Dónde está definida?
		/*putchar(EOF);
		
		printf("\ndevuelve ▒ ; valor %d; esta definida en la libreria stdio.h\n\n", EOF);*/
	
	//2.-Escribir un programa que copie la entrada en la salida, reemplazando cada tabulador por \t,
	//cada espacio en blanco por \b y cada barra invertida “\” por \\.
	
	
		/*while((c=getchar())!=INTRO){
		
			if(  c == SPACE  ){
				
				putchar('\\');
				putchar('b');
			}
			else if(c == TABULAR  ){
				
				putchar('\\');
				putchar('t');
			}
			else if(  c == '\\'  ){
				
				putchar('\\');
				putchar('\\');
			}
			else
			putchar(c);
		
		
		}*/
	//3.-Escribir un programa que determine cuántas vocales y consonantes se introducen por teclado
	
	/*
	do{
		switch(c){
			
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vocales++;
				break;
			default:
				consonantes++;
				break;
			
			
			
		}
		
		
	}while((c=getchar()) != INTRO);
	
	printf("\n %d vocales y %d consonantes\n", vocales, consonantes);
	
	*/
	
	//4.-Escribir un programa que copie la entrada en la salida eliminando todos los espacios en blanco, 
	//excepto aquellos entre comillas.
	
	while((c=getchar())!= INTRO){
		
		if(c=='"'){
			
			if(comillas==0 || comillas==1)
				comillas++;
			
			if(comillas==2)
				comillas=0;
			putchar(c);	
		}
		
		else if(comillas!=1 && c==SPACE){}
			
		
		else if(c==SPACE && comillas==1)
			putchar(c);
		
		else 
			putchar(c);

	}
	
	
	
	
	
	
	//5.-Imprimir los caracteres imprimibles de la tabla ASCII de 7 bits (valores de 33 a 126)
	//mediante un for en dos columnas de la forma:
	
	//decimal        caracter           decimal           caracter
	/*
	for(i=33; i<=80;i++)
	{
		
		printf("%d\t",i);
		putchar(i);
		printf("\t");
		printf("%d\t",i+46);
		putchar(i+46);
		printf("\t");
		printf("\n");
			
	}	
	*/
	
	
	
	
	
	
	//6.-Imprimir una tabla con los caracteres ASCII expandidos del ordenador (hasta el 144) en tres columnas
	/*for(i=0; i<=144;i++)
	{
		
		printf("%d  ",i);
		putchar(i);
		printf("  ");
		printf("%d  ",i+48);
		putchar(i+48);
		printf("  ");
		printf("%d  ",i+96);
		putchar(i+96);
		printf("  ");
		printf("\n");
			
	}*/
	
	
	
	
	//7.-Escribir un programa que reemplace los tabuladores de la entrada por un número
	// de blancos definido como constante (por ejemplo 10)
	/*
	while((c=getchar())!=INTRO){
		i=0;
		
		if(c=='\t')
			for(i=1;i<=10;i++)
				putchar('*');
			
		else
			putchar(c);
		

	}
	*/
	
	//8.-Escribir un programa que indique el número de veces que aparece una palabra en un fichero
	/*	d=getchar();
		
	while(d!=SPACE && d!=INTRO && d!=TABULAR){
		
		putchar(d);
		d=getchar();
		longitudPalabra++;
	}	
	printf("longitud de la palabra %d",longitudPalabra);
	
	
	printf("\n pulsar 0 para salir\n");*/
	
	//////////////////////////
	/*while((c=getchar())!='0'){
		
		if(c==SPACE || c==INTRO || c==TABULAR){
			espacios++;
			
			
			if(espacios==2)
				espacios=0;
			
		}
		
		if(espacios==1){
			
			for(i=1;i<=longitudPalabra;i++){
				//c==2
				if(c-(longitudPalabra+i)==d-(longitudPalabra+i))
					comparacion++;
				else
					comparacion=0;
				
			}
			
			
			
		}
					//!=0
		if(comparacion==longitudPalabra)
			contadorPalabra++;
		
		

	}
	*/
	///////////////////////////////////////
	/*while((c=getchar())!='0'){
		
		for(i=1;i<=longitudPalabra;i++){
			
			if(i==1)
				comparacion=0;
			
			//while/if
			while(c==d){
				
				comparacion++;
				
			
			}
			
			if(c==SPACE || c==INTRO || c==TABULAR){
				
				i=longitudPalabra+1;
			}
			
		
			
			
		}
		
		if(comparacion==longitudPalabra)
			contadorPalabra++;
		
		
		
		
		
	}*/
	/////////////////////////////////////
	
	//con la palabra en el fichero
	
	
	
	
	
	//printf("\n la palabra sale %d veces\n", contadorPalabra);
	
	
	
	
	
	
	
	
	//9.-Indicar el número de caracteres, espacios en blanco, tabuladores y caracteres fin de línea de un archivo introducido al programa 
	//(comentar el ejercicio anterior para poder disponer del fichero introducido al ejecutar).
	/*printf("\nutiliza ? para salir del bucle\n");
	while((c=getchar())!='?'){
			
		if(  c == SPACE  ){
				
				espacios++;
		}
		else if(c == TABULAR  ){
				
				tabuladores++;
		}
		
		else if(c ==INTRO){
			
			intros++;
		}
		
		else
			caracteres++;
		

	}
	
	printf("\n %d espacios %d tabuladores %d intros %d caracteres", espacios, tabuladores, intros, caracteres);*/
	
	
	
	
	return 0;
	
	
}
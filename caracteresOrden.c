#include <stdio.h>
#define SPACE ' '
#define INTRO '\n'
#define TABULAR '	'
/**
*Función ejercicio 1  @date 05/08/2018
* un programa que imprime el valor de la constante definida EOF en tu ordenador.
*y devuelve el valor que tiene ▒ y donde esta definida								
*/
void ejercicio1(){
	
		putchar(EOF);		
		printf("\ndevuelve ▒ ; valor %d; esta definida en la libreria stdio.h\n\n", EOF);
		
}
/**
*Función ejercicio 2  @date 05/08/2018
*programa que copia la entrada en la salida, reemplazando cada tabulador por \t,
*cada espacio en blanco por \b y cada barra invertida “\” por \\.							
*/
void ejercicio2(){
	

		int c='\0';
	
		while((c=getchar())!=INTRO){
		
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
		
		
		}
}
/**
*Función ejercicio 3  @date 05/08/2018
*un programa que determina cuántas vocales y consonantes se introducen por teclado							
*/
void ejercicio3(){
	
	
	int c='\0';
	int vocales=0, consonantes=0;

	
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
	
}
/**
*Función ejercicio 4  @date 05/08/2018
*un programa que copia la entrada en la salida eliminando todos los espacios en blanco, 
*excepto aquellos entre comillas.						
*/
void ejercicio4(){
		
	int c='\0';
	int comillas=0, i=0;

	
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
	
}
/**
*Función ejercicio 5  @date 05/08/2018
*Imprime los caracteres imprimibles de la tabla ASCII de 7 bits (valores de 33 a 126)
*mediante un for en dos columnas de la forma:
*	decimal        caracter           decimal           caracter						
*/
void ejercicio5(){
	
	int i=0;
	
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
	
}
/**
*Función ejercicio 6  @date 05/08/2018
*Imprime una tabla con los caracteres ASCII expandidos del ordenador (hasta el 144) en tres columnas						
*/
void ejercicio6(){
	
	int i=0;

	for(i=0; i<=144;i++)
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
			
	}
	
}
/**
*Función ejercicio 7  @date 05/08/2018
*un programa que reemplaza los tabuladores de la entrada por un número
*de blancos definido como constante (por ejemplo 10)					
*/
void ejercicio7(){
		
	int c='\0';
	int i=0;
	
	while((c=getchar())!=INTRO){
		i=0;
		
		if(c=='\t')
			for(i=1;i<=10;i++)
				putchar('*');
			
		else
			putchar(c);
		

	}
	
}
/**
*Función ejercicio 8  @date 05/08/2018
*un programa que indica el número de veces que aparece una palabra en un fichero en este caso KB					
*/
void ejercicio8(){
	
	
	int c='\0', k='K', b='B';
	int caracter=0;
	int comparacion=0;
	int palabraKB=0;
		
	while( (c=getchar()) != EOF){
		
		
		//controlamos palabra KB
		if(c!=SPACE && c!=INTRO && c!= TABULAR){
			
			caracter++;

			
			
			if(caracter==1 && c==k){
				comparacion=1;
				
			}
			else if(caracter==2 && c==b && comparacion==1){
			
				palabraKB++;
				comparacion=0;
			}
			
				
		}
		
		else{
			caracter=0;
		}
	}
	
	printf("la palabra KB sale %d veces", palabraKB);
	
}
/**
*Función ejercicio 9  @date 05/08/2018
*Indica el número de caracteres, espacios en blanco, tabuladores y caracteres fin de línea de un archivo introducido al programa 					
*/
void ejercicio9(){
			
	int c='\0';
	int caracteres=0, espacios=0, tabuladores=0, intros=0;
	
	//comentar el sig printf y cambiar el while a  while((c=getchar())!=EOF) para utilizar el fichero
	printf("\nutiliza ? para salir del bucle\n");
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
	
	printf("\n %d espacios %d tabuladores %d intros %d caracteres", espacios, tabuladores, intros, caracteres);
		
}
/**Función MAIN
*@author Joni Fernández
*/
int main(int argc, char** argv){
	
	//ejercicio1();
	//ejercicio2();
	//ejercicio3();
	//ejercicio4();
	//ejercicio5();
	//ejercicio6();
	//ejercicio7();
	//ejercicio8();
	//ejercicio9();
	
	return 0;
}
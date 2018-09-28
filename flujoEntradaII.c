#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SPACE ' '
#define INTRO '\n'
#define TABULAR '	'

int primo(int n){
	
	
	int i=0, a=0;
	
	for(i=1;i<=n;i++){
	
		if(n%i==0)
			a++;
	}
	
	if(a==2 || n==1)
		return 1;
	return 0;
	
}

int fibonacci(int n){
	
	
	if(n==1)// || n==2
		return 1;
	if(n>=2)//n>2
		return fibonacci(n-1)+fibonacci(n-2);
	
	return 0;
		
}

int fibonacciNR(int n){
	
	int i=0, suma=1, previo=1, sumaPrevio=1;
	
	
	if(n==1 || n==2)
		return 1;
	
	if(n>2){
	
		for(i=2;i<=n;i++){
			suma=sumaPrevio+previo;
			previo=sumaPrevio;
			sumaPrevio=suma;
		}
		return suma;
	}
	
	return 0;
	
}

int factorial(int n){
	
	if(n==1){
		return 1;
	}
	
	if(n>1){
		return n*factorial(n-1);	
	}
	
	return 0;	
}

double numeroAleatorio(){
	
	srandom(time(NULL));
	return ((rand()%10000)/10000.0);
}

void pasarMinusculas(int c){
	 
	 if(c>=65 && c<=90){
		 c=c+32;
	 }
	 putchar(c);
}
//Algoritmo de Euclides
int MaxComunDivisor(int a, int b){
	
	if(b==0){
		return a;
	}
	
	return MaxComunDivisor(b, a%b);
}

//minimo comun multiplo utilizando el max comun divisor
int MinComunMultiplo(int a, int b){
	return (a*b)/MaxComunDivisor(a,b);
}
//funcion pow echa por nosotros
int elevar(int a, int b){
	
	int i=0, res=1;
	
	if(b>0){
		for(i=1; i<b;i++)
			res*=a;
	}
	
	else
		for(i=b;i<=1;i--){
			res*=a;
		}
	return res;
	
}


int main(int argc, char** argv){
	
	int i=0,  caracteres=0, contador=0;
	int max='\0',c='\0';
	int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, otros=0;
	float suma=0;
	double aleatorio=0;
	int signo=0, espacios=1;
	
	
/*
1-Escribir un programa que imprima un diagrama de barras horizontales con la frecuencia 
de las longitudes de palabras que lee de la entrada.

Por ejemplo leer palabras hasta un determinado código y determinar la frecuencia de longitud de las palabras.
Realizar la misma operación mediante un fichero
*/
/*
printf("introduce un espacio despues de la ultima palabra\n");
while(c=getchar() != '\n'){
	
	
	
	//hay que poner un espacio despues de la ultimaplabra
	while(c!=SPACE ){
		
		caracteres++;
		c=getchar();
		
		
	}
	
	for(i=1;i<=caracteres;i++){
		putchar('|');
	}
	
	
	putchar(SPACE);
	
	
	switch(caracteres){
		
		case 1:
			c1++;
			break;
		case 2:
			c2++;
			break;
		case 3:
			c3++;
			break;
		case 4:
			c4++;
			break;
		case 5:
			c5++;
			break;
		case 6:
			c6++;
			break;
		default:
			otros++;
			break;
	}
	
	caracteres=0;
	

}

printf("\n %d de 1 caracter",c1);
printf("\n %d de 2 caracter",c2);
printf("\n %d de 3 caracter",c3);
printf("\n %d de 4 caracter",c4);
printf("\n %d de 5 caracter",c5);
printf("\n %d de 6 caracter",c6);
printf("\n %d de otros caracteres",otros);
*/

/*2-Escribir un programa que imprima los ‘n’ primeros números primos, siendo n un número introducido por teclado.*/
/*
printf("introduce cantidad de numeros\n");
scanf("%d", &max);

	for(i=1;i<=max;i++){
		
		if(primo(i)){
			//printf("%d ", i);
			putchar(i+48);
			putchar('|');
			max++;
		}

		
		
		
	}

*/

/*3-Escribir un programa que escriba una tabla de conversión de temperaturas expresadas en
 grados centígrados a grados Fahrenheit y viceversa.
 (se pide de 0º a 300ºF en tramos de 20º).*/
 /*
 for(i=0; i<=300; i+=20){
	 
	 if(i<10){
		 putchar('0');
		 putchar('0');
		 putchar(i+48);
	 }
	  else if(i>9 && i<100){
		putchar('0');
		putchar((i/10)+48);
		putchar('0');
	  }
	  
	  else{
		  
		  putchar((i/100)+48);
		  putchar (((i%100)/10)+48);
		  putchar((i%10)+48);
		  
	  }
		  putchar('|');
	 
	 
	 //putchar((((float)i*1.8)+32)+48);((i*1.8)+32)
	 
	 //Farenheit
		suma=((float)i*1.8+32);
		c1=suma/100;
		c2=suma/10 -(c1*10);
		c3=suma-(c1*100 + c2*10);
	 
	 
		putchar(c1+48);
		putchar(c2+48);
		putchar(c3+48);
		 putchar('|');
		 //4-Trabajar a partir del ejercicio anterior también la conversión con una tabla a grados kelvin.
	 //kelvin

	 	suma=(float)i+273.15;

		c1=suma/100;
		c2=suma/10 -(c1*10);
		c3=suma-(c1*100 + c2*10);
	 
	 
		putchar(c1+48);
		putchar(c2+48);
		putchar(c3+48);
	 
	 putchar('\n');
	 
	
	 
	 
	 
	 
 }*/
 
 /*5-Escribir un programa que imprima los ‘n’ primeros números de la serie de Fibonacci (‘n’ introducido por teclado)
 Método iterativo (no recursivo)
 Utilizando una función recursiva (llamada en una función a sí misma)
 */
/* 
printf("introduce cantidad de numeros\n");
scanf("%d", &max);*/
 
 	//for(i=1;i<=max;i++){
		
		
			//printf("%d ", fibonacci(i));
			//para forma recursiva
			/*putchar('|');
			if(fibonacci(i)<10)
				putchar(fibonacci(i)+48);
			
			if(fibonacci(i)>9 && fibonacci(i)<100){
				putchar(fibonacci(i)/10+48);
				putchar(fibonacci(i)%10+48);
			}*/
			//hasta 12 numeros de la serie de fibonacci
			
			//--------------------------------------------
			//para forma no recursiva
			//----------------------------------------
			
			/*putchar('|');
			if(fibonacciNR(i)<10)
				putchar(fibonacciNR(i)+48);
			
			if(fibonacciNR(i)>9 && fibonacciNR(i)<100){
				putchar(fibonacciNR(i)/10+48);
				putchar(fibonacciNR(i)%10+48);
			}*/
		
	//}
 

 /*6-Factorial de un número dado por teclado calculado de forma recursiva.*/
 
 /*
 printf("\n Introduce un numero para saber el factorial\n");
 scanf("%i", &i); 
 
 printf("\nel factorial=\t");
 //hasta 2 cifras
	
	
 
	if(factorial(i)<10)
		putchar(factorial(i)+48);
	if(factorial(i)>9 && factorial(i)<100){
		putchar(factorial(i)/10+48);
		putchar(factorial(i)%10+48);	
	}
	if(factorial(i)>99 && factorial(i)<1000){
		
		putchar(factorial(i)/100 +48);
		
		putchar(((factorial(i)%100)/10)+48);
		
		putchar(factorial(i)%10 +48);
		
		
		
	}
 
 */
 
 /*7-Escribir una función que genere 500 números aleatorios en un intervalo [0-1]
 representando la frecuencia mediante una barra de frecuencia en modo texto
 Utilizar para ello la función srandom (time(NULL)) y rand () de las bibliotecas <time.h> (ctime en C++) y <stdlib.h>*/
 

/*
 for(i=1; i<=500; i++){
	 
	
	aleatorio=numeroAleatorio();
	printf("%i->%f\n",i, aleatorio);
	 
	 
 }
 
 */
 
 
 /*8-Escribir una función que pase a minúsculas un carácter si es una letra*/
 
	c=getchar();
	pasarMinusculas(c);


  
 
 
 /*9-Escribir un programa que imprima solo aquellas entradas de teclado
 que dispongan de un mínimo de 'n' caracteres obtenido por el propio teclado.*/
 
 /*
caracteres=3;
 
 while((c=getchar()) != '0'){
	 
	if(c!=SPACE && c!=INTRO && c!=TABULAR){
		 contador++;
	}
	else{contador=0;}
	
	if(contador==1){
		c1=c;
	}
	if(contador==2){
		c2=c;
	}
	if(contador==3){
		c3=c;
	}
	
	if(contador==caracteres){
		putchar(c1);
		putchar(c2);
		putchar(c3);
	}

	
	else if(contador>caracteres ){
			
		
		if(c!=SPACE && contador>3)

				
			putchar(c);
				
	
	}
	
	if(c==SPACE || c==INTRO || c==TABULAR){
	

		contador=0;
		putchar(SPACE);
		
	}		
	 

}
 */
 
 
 /*10-Escribir un programa que lea la entrada y cuente el número de signos de puntuación que tiene.
 Si el texto contiene un punto seguido de un carácter 
 minúscula deberá retornar en qué palabra se encuentra dicho error.*/
 //. 46 ;59 ,44 -45 ...
 /*
 while( (c=getchar()) !='0'){
	 
					//minus
	if(signo==1 && (c>=97 && c<=122) && c!=SPACE){
		 
		 putchar(c);	 
	}
	 
	if(c==SPACE){
		signo=0;	
	}
	  
	if(c=='.' || c==',' || c==';' || c=='-'){
		  
		signo=1;
		putchar(SPACE); 
	}

 }
 
 */
 
 
 /*11-Dado dos números comprobar mediante un programa si son primos o no y decir cuáles son sus mínimo común múltiplo
 y máximo común divisor.*/
 
 /*
 printf("\n Introduce el primer numero\n");
 scanf("%i", &c1);
 printf("\n Introduce el segundo numero\n");
 scanf("%i", &c2);
 
 if(primo(c1))
	 printf("\nel numero %i es primo\n", c1);
 else
	 printf("\nel numero %i no es primo\n", c1);
 
 if(primo(c2))
	 printf("\nel numero %i es primo\n", c2);
 else
	 printf("\nel numero %i no es primo\n", c2);
 
 //se hace mcd con recursividad por el Algoritmo de Euclides
	
 printf("el Max comun divisor es %i\n", MaxComunDivisor(c1,c2));
 
 printf("el Min comun multiplo es %i\n", MinComunMultiplo(c1,c2));
 
 */
 
 
 /*12-Escibir un progrma que devuelva las potencias de 2 y de -3 sin utilizar la función pow y mediante al menos un bucle for.
 Mostrar el resultado de la forma: Y        2^Y        (-3)^Y
 */
 /*
 printf("\n Introduce numero\n");
 scanf("%i", &c1);
 printf("\tY\t2^Y\t(-3)^Y\n");

	 
	 printf("\t%i\t%i\t%i\n", c1,elevar(2,c1), elevar((-3),c1));
	 
	 
	 */

	return 0;
}
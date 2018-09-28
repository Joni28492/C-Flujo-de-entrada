#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SPACE ' '
#define INTRO '\n'
#define TABULAR '	'
/**
*Funcion Primo  @date 06/09/2018
*@param  n  int del que vamos a detectar si es primo									
*@return retorna 1 o 0 para saber si es primo
*/
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
/**
*Realizacion de la funcion fibonacci @date 06/09/2018
*consiste en la sucesion de fibonacci
*@param  n  int lo utilizamos como el numero del que vamos a sacar el maximo de numeros de la serie de fibonacci									
*@return retorna 0 o fibonacci(n-1)+fibonacci(n-2);  de forma recursiva
*/
int fibonacci(int n){
	
	
	if(n==1)// || n==2
		return 1;
	if(n>=2)//n>2
		return fibonacci(n-1)+fibonacci(n-2);
	
	return 0;
		
}
/**
*Realizacion de la funcion fibonacci no recursiva @date 06/09/2018
*consiste en la sucesion de fibonacci
*@param  n  int lo utilizamos como el numero del que vamos a sacar el maximo de numeros de la serie de fibonacci									
*@return retorna 0  1 o la suma 
*/
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
/**
*Realizacion de la funcion factorial @date 06/09/2018
*consiste sacar el factorial de un numero
*@param  n  int lo utilizamos como el numero del que vamos a sacar el factorial									
*@return retorna 1, 0 o n*factorial(n-1) de forma recursiva
*/
int factorial(int n){
	
	if(n==1){
		return 1;
	}
	
	if(n>1){
		return n*factorial(n-1);	
	}
	
	return 0;	
}
/**
*Realizacion de la funcion numAleatorio @date 06/09/2018
*consiste en devolver un numero random									
*@return retorna un numero aleatorio entre 1 y 0
*@see #include <time.h>
*/
double numeroAleatorio(){
	
	srandom(time(NULL));//srand si no funciona
	return ((rand()%10000)/10000.0);
}
/**
*Realizacion de la funcion pasar a minusculas @date 06/09/2018
*consiste cambiar un caracter en mayusculas a minusculas(solo uno)
*@param  c  int 								
*cambia el ascii para convertirlo en minus
*/
void pasarMinusculas(int c){
	 
	 if(c>=65 && c<=90){
		 c=c+32;
	 }
	 putchar(c);
}
/**
*Realizacion de la funcion maximo comun divisor @date 06/09/2018
*consiste en obtener el maximo comun divisor mediante el metodo de Euclides
*@param a int @param b int								
*@return retorna a o MaxComunDivisor(b, a%b); de forma recursiva
*/
int MaxComunDivisor(int a, int b){
	
	if(b==0){
		return a;
	}
	
	return MaxComunDivisor(b, a%b);
}
/**
*Realizacion de la funcion minimo comun multiplo utilizando el max comun divisor @date 06/09/2018
*@param  a int @param b int							
*@return retorna la formula del minimo comun multiplo
*@see MaxComunDivisor(int a,int b);
*/
int MinComunMultiplo(int a, int b){
	return (a*b)/MaxComunDivisor(a,b);
}
/**
*Realizacion de la funcion pow/elevar @date 06/09/2018
*consiste en crear nosotros nuestra funcion pow
*@param  a  int @param b int									
*@return retorna el resultado de elevar a lo indicado
*/
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
/**
*Realizacion del ejercicio 1 @date 06/09/2018
*Escribir un programa que imprima un diagrama de barras horizontales con la frecuencia 
*de las longitudes de palabras que lee de la entrada.
*Por ejemplo leer palabras hasta un determinado código y determinar la frecuencia de longitud de las palabras.
*Realizar la misma operación mediante un fichero
*/
void ejercicio1(){
	
	int i=0,  caracteres=0, contador=0;
	int c='\0';
	int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, otros=0;
	

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
	
}
/**
*Realizacion del ejercicio 2  @date 06/09/2018
*consiste en un programa que imprima los ‘n’ primeros números primos, siendo n un número introducido por teclado.
*/
void ejercicio2(){

	int i=0;
	int max='\0';
	
printf("introduce cantidad de numeros\n");
scanf("%d", &max);

	for(i=1;i<=max;i++){
		
		if(primo(i)){
			
			putchar(i+48);
			putchar('|');
			max++;
		}

	}
}
/**
*Realizacion del ejercicio 3 y 4 @date 06/09/2018
*Escribir un programa que escriba una tabla de conversión de temperaturas expresadas en
*grados centígrados a grados Fahrenheit y viceversa.
*(se pide de 0º a 300ºF en tramos de 20º).
*/
void ejercicio3(){
	
	

 
 	int i=0;
	int c1=0, c2=0, c3=0;
	float suma=0;

 
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
	}
}
/**
*Funcion ejercicio 5  @date 06/09/2018
*Escribir un programa que imprima los ‘n’ primeros números de la serie de Fibonacci (‘n’ introducido por teclado)
*Método iterativo (no recursivo)
*Utilizando una función recursiva (llamada en una función a sí misma)
*@see int fibonacci(int n);
*@see int fibonacciNR(int n); no recursiva
*/
void ejercicio5(){
	
	

 	int i=0;
	int max='\0';

 
 
	printf("introduce cantidad de numeros\n");
	scanf("%d", &max);
 
 	for(i=1;i<=max;i++){
		
		
			
			//para forma recursiva
			putchar('|');
			if(fibonacci(i)<10)
				putchar(fibonacci(i)+48);
			
			if(fibonacci(i)>9 && fibonacci(i)<100){
				putchar(fibonacci(i)/10+48);
				putchar(fibonacci(i)%10+48);
			}
			//hasta 12 numeros de la serie de fibonacci
			
			//--------------------------------------------
			//para forma no recursiva
			//----------------------------------------
			
			putchar('|');
			if(fibonacciNR(i)<10)
				putchar(fibonacciNR(i)+48);
			
			if(fibonacciNR(i)>9 && fibonacciNR(i)<100){
				putchar(fibonacciNR(i)/10+48);
				putchar(fibonacciNR(i)%10+48);
			}
		
	}
 	
	
}
/**
*Funcion ejercicio6  @date 06/09/2018
*Factorial de un número dado por teclado calculado de forma recursiva
*@see int factorial(int n);
*/
void ejercicio6(){
	
	
	
	
	int i=0;
 
	printf("\n Introduce un numero para saber el factorial\n");
	scanf("%i", &i); 
 
	printf("\nel factorial=\t");
	//hasta 3 cifras
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
 	
}
/**
*Funcion ejercicio 7  @date 06/09/2018
*función que genera 500 números aleatorios en un intervalo [0-1]
*representando la frecuencia mediante una barra de frecuencia en modo texto
*@see #include<time.h>
*@see #include<stdlib>
*@see srandom(time(NULL))
*@see rand()
*/
void ejercicio7(){
	
	
	int i=0;
	double aleatorio=0;
	
	for(i=1; i<=500; i++){
	 
		aleatorio=numeroAleatorio();
		printf("%i->%f\n",i, aleatorio);
	 
	}
 
	
}
/**
*Funcion ejercicio8  @date 06/09/2018
*una función que pasa a minúsculas un carácter si es una letra
*@see psarMinusculas(int c);
*/
void ejercicio8(){
		
	int c='\0';
 
	c=getchar();
	pasarMinusculas(c);	
}
/**
*Funcion ejercicio 9  @date 06/09/2018
*un programa que imprima solo aquellas entradas de teclado
*que dispongan de un mínimo de 'n' caracteres obtenido por el propio teclado.
*/
void ejercicio9(){
	
	int i=0,  caracteres=0, contador=0;
	int c='\0';
	int c1=0, c2=0, c3=0;
	
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
	
}
/**
*Funcion ejercicio10  @date 06/09/2018
*programa que lee la entrada y cuenta el número de signos de puntuación que tiene.
*Si el texto contiene un punto seguido de un carácter 
*minúscula deberá retornar en qué palabra se encuentra dicho error.
*/
void ejercicio10(){
	
	
	int c='\0';
	int signo=0;
	//. 46 ;59 ,44 -45 ...
 
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
 
}
/**
*Funcion ejercicio11  @date 06/09/2018
*Dado dos números comprobar mediante un programa si son primos o no y decir cuáles son sus mínimo común múltiplo
*y máximo común divisor.
*@see int primo(int n)
*@see int MinComunMultiplo(int a, int b);
*@see int MaxComunDivisor(int a, int b);
*/
void ejercicio11(){
	
	
	int c1=0, c2=0;
 
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
 

}
/**
*Funcion ejercicio12  @date 06/09/2018
*un progrma que devuelve las potencias de 2 y de -3 sin utilizar la función pow y mediante al menos un bucle for.
*Mostrar el resultado de la forma: Y        2^Y        (-3)^Y
*@see int elevar(int a, int b);
*/
void ejercicio12(){
	
	int c1=0;
	
 
	printf("\n Introduce numero\n");
	scanf("%i", &c1);
	
	printf("\tY\t2^Y\t(-3)^Y\n");
	
	printf("\t%i\t%i\t%i\n", c1,elevar(2,c1), elevar((-3),c1));
	 
	 
}
/**funcion Main*/
int main(int argc, char** argv){
	
	
	int opcion=0;
	
	
	printf("EJERCICIOS DE FLUJO DE ENTRADA\n");
	printf("1-Diagrama de barras de frecuencia horizontal, Nota:poner espacio al final de escribir antes de darle al enter\n");//poner espacio al final de escribir antes de darle al enter
	printf("2-N primeros numeros primos\n");
	printf("3-Tabla de conversion de temperaturas\n");//el 4 va con el 3 incluido
	printf("4-N primeros numeros de la sucesion de Fibonacci\n");
	printf("5-Factorial, Limite:solo hasta 3 cifras del resultado del factorial\n");//solo hasta 3 cifras del resultado del factorial
	printf("6-Numeros aleatorios\n");
	printf("7-PASAR A minusculas. Nota:solo un caracter escribirlo despues del 7 sin el espacio\n");//solo un caracter escribirlo despues del 7 sin el espacio
	printf("8-Palabars con numero minimo de caracteres\n");
	printf("9-contar signos de puntuacion\n");
	printf("10-Primos, Minimo comun multiplo y maximo comun divisor\n");
	printf("11-Tabla de potencias\n");
	scanf("%d", &opcion);
	
	
	switch(opcion){
		
		case 1:
			ejercicio1();
			break;
		case 2:
			ejercicio2();
			break;
		case 3:
			ejercicio3();
			break;
		case 4:
			ejercicio5();
			break;
		case 5:
			ejercicio6();
			break;
		case 6:
			ejercicio7();
			break;
		case 7:
			ejercicio8();
			break;
		case 8:
			ejercicio9();
			break;
		case 9:
			ejercicio10();
			break;
		case 10:
			ejercicio11();
			break;
		case 11:
			ejercicio12();
			break;
			
		default:
			break;
			
	}
 
	return 0;
}/**@author Joni Fernandez*/
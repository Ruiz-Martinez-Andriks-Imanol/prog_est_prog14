/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 21/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programaci�n Estructrada
Ciclo: 01/2022<

Este es un programa de ciclos en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -do-while
    -Contador
    -Comentarios para la doumentaci�n interna del programa.
*/
#include<stdio.h>

int main() {
	//Declaraci�n de variables
	float numero, suma=0;
	int i=1; //contador
	//Proceso
	do { //Ciclo
		printf("Introduce un numero %d: ", i);
		scanf("%f", &numero);
		suma=suma+numero;
		i++;
	} while(numero !=0);
	//Salida
	printf("La suma es %.2f", suma);
	return 0;	
}

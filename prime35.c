#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#define true 1
#define false 0

int lista[450000000];

void main() {
	int i;
	int maxNum = 1000000;
	int element = 0; //The element number that is being used to check for prime
	int maxElement = 0; //The number of elements in lista
	bool prime = true;
	lista[maxElement] = 2;
	clock_t start_t;
	printf("%d\n", lista[maxElement]);
	maxElement++;
	lista[maxElement] = 3;
	printf("%d\n", lista[maxElement]);
	maxElement++;
	i = 5;
	while(i < maxNum) {
		while((prime == true) && (sqrt(i) >= lista[element]) && (maxElement >= element)){
			if(i%(lista[element]) == 0) {
				prime = false;
			}
			element++;
		}
		if(prime == true) {
			lista[maxElement] = i;
			printf("%d\n", lista[maxElement]);
			maxElement++;
		}
		element = 0;
		prime = true;
		i = i + 2;
		while((prime == true) && (sqrt(i) >= lista[element]) && (maxElement >= element)){
			if(i%(lista[element]) == 0) {
				prime = false;
				}
			element++;
		}
		if(prime == true) {
			lista[maxElement] = i;
			printf("%d\n", lista[maxElement]);
			maxElement++;
		}
		element = 0;
		prime = true;
		i = i + 4;
	}
	printf("Number of primes:\n%.5d\n", maxElement);
	printf("Number of seconds: \n%.5lf\n", (double)(clock())/CLOCKS_PER_SEC);
}
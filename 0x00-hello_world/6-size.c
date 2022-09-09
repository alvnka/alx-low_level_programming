/*this files contains this header files
 *Stdio.h
 * */
#include<stdio.h>
int main(){
	char charType;
	int intType;
	long int longInt;
	long long int longLongInt;
	float floatType;

	/*sizeof evaluates size of variable*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
}

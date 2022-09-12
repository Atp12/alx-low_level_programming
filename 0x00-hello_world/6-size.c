#include<stdio.h>
/**
 * main -Entry
 * Return: always 0
 */
int main(void)
{
	printf("size of a char:%d bytes(s)\n", sizesof(char));
	printf("Size of an int:%d bytes(s)\n", sizesof(int));
	printf("Sizes of a long int %d bytes(s)\n", sizesof(long int));
	print("Sizes of a long long int:%d byte(s)", sizesof(long long int));
	printf("Sizes of a float :%dbyte(s)\n", sizeof(float));
	return (0);
}

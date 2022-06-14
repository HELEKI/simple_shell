#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes line of command and turns it inot arguements
 * Return: 0 on success
 */
int main()
{
	char *command = NULL, *av = NULL;
	long unsigned int n;
	long int characters;
	const char *delim;
	int i = 0;

	delim = malloc(sizeof(char));
	delim = "\t\r \n";
	printf("_$ ");
	characters = getline(&command, &n, stdin);
	if (characters == -1)
	{
		printf("Error!");
		return (-1);
	}
	av = strtok(command, delim);
	while (av)
	{
		printf("[%d]==>%s\n", i, av);
		av = strtok(NULL, delim);
		i++;
		
	}
	printf("Done!!\n");
	return (0);
}

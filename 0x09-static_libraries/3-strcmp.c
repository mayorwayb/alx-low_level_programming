#include "main.h"
/**
 * _strcmp - function that compares two string
 * @s1: parameter
 * @s2: parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0 ; s1[a] != '\0' || s2[a] != '\0' ; a++)
	{
		if (s1[a] != s2[a])
		{
			if (s1[a] < s2[a])
				return (s1[a] - s2[a]);
			else if (s2[a] < s1[a])
				return (s1[a] - s2[a]);
		}
	}
	return (0);
}

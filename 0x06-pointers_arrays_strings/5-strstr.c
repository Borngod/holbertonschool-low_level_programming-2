#include "holberton.h"
#define NULL 0

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: string to be searched & printed
 * @needle: comparison
 * Return: needle haystack comp.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		for (p = haystack; *p == needle[a]; p++)
		{
			a++; /* doesn't pass the checker if in the for loop */
			if (needle[a] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}

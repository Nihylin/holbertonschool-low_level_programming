#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string being capitalized
*
* Return: string (char *)
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		if (
		(str[i - 1] == ' ') || (str[i - 1] == '\t') || (str[i - 1] == '\n') ||
		(str[i - 1] == ',') || (str[i - 1] == ';') || (str[i - 1] == '.') ||
		(str[i - 1] == '!') || (str[i - 1] == '?') || (str[i - 1] == '"') ||
		(str[i - 1] == '(') || (str[i - 1] == ')') || (str[i - 1] == '{') ||
		(str[i - 1] == '}')
		)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}
	return (str);
}

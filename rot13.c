#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string
 * Return: void
 */

void rot13(char *s)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot_13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x = 0, y;

	while (s[x])
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == alphabet[y])
			{
				s[x] = rot_13[y];
				break;
			}
		}
		x++;
	}
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates random valid passwords for 101-crackme program
 *
 * Return: Always void 
 */
int main(void)
{
	int a, b, d, e;
	char c[] = "MAAMEserwaa1991";
	char pw[58];

	srand(time(NULL));
	while (e != 2772)
	{
		a = d = e = 0;
		while ((2772 - 122) > e)
		{
			b = rand() % 62;
			pw[a] = c[b];
			e += c[b];
			a++;
		}
		while (c[d])
		{
			if (c[d] == (2772 - e))
			{
				pw[a] = c[d];
				e += c[d];
				a++;
				break;
			}
			d++;
		}
	}
	pw[a] = '\0';
	printf("%s", pw);
	return (0);
}


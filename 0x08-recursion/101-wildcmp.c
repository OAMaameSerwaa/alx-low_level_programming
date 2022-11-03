#include "main.h"

int wildcmp(char *s1, char *s2);
void iterate_wild(char **wildstr);
int strlen_no_wilds(char *str);
char *postfix_match(char *str, char *postfix);

/**
 * strlen_no_wilds - Returns the length of a string, no wildcards
 * @str: The string being measured
 *
 * Return: The length of the string 
 */
int strlen_no_wilds(char *str)
{
	int length = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			length++;

		i++;
		length += strlen_no_wilds(str + i);
	}

	return (length);
}

/**
 * iterate_wild - Iterates through a string 
 * @wildstr: The string to be iterated through
 *
 * Return: Void
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Checks if a string matches the postfix of another string
 * @str: The string 
 * @postfix: The postfix
 *
 * Return: a pointer to the null byte located at the end of postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 *  wildcmp - Compares two strings, considering wildcard characters.
 *  @s1: The first string 
 *  @s2: The second string 
 *
 *  Return: If the strings are identical - 1, othwerwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

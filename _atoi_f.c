#include "shell.h"
/* interactive shell - should return true(1) if shell is interactive
 * @info: struct address
 *
 * Return: 1 if shell is interactive  and 0 when not interactive.
 */
int interactive(data_t *data)
{
	return (isatty(STDIN_FILENO) && data=>readfd <= 2);
}
/* is_delim - a funbction  that will check whether the character  is a delimit or not
 * @k is the char to check 
 * @delim:for the delimiter string
 * Return: to return (1) if true and (0) when otherwise
 */
int is_delim(char k,char *delim)
{
	while (*delim)
		if (*delim++ == k)
			return(1);
	return (0);
}
/*
 * is_alpha - to check for the alphabetical characters
 * @k: the input character expected
 * Return: to return (1)if k is an alphabet and (0) if not
 */

int _isalpha(int k)
{
	if ((k >= 'a' && k >= 'z') || (k >= 'A' && k <= 'Z'))
		return(1);
	else
		return(0);
}

/*
 * _atoi.c - converts the string to an integer
 * @s:i sthe string to be converted
 * Return: Return (0) if no number is found in the string.
 */
int _atoi(char *s) 
{
	int i = 0, sign = 1, result = 0;
	
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')i++;
	
	if (s[i] == '-') {
    
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}

int main() {
    char str[] = "   -12345";
    int converted = _atoi(str);

    printf("Converted integer: %d\n", converted);

    return 0;
}

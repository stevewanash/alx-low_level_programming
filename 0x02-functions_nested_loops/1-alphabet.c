/**
 * print_alphabet - prints the alphabet
 * in lower case
 * no arguments
 *
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}

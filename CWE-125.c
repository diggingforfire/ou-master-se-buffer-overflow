#include <stdio.h>
#include <string.h>
#define BUF_SIZE 10
/**
 *	CWE-125: The software reads data past the end, or before the beginning, of the intended buffer.
 *	https://cwe.mitre.org/data/definitions/125.html
 */
int main(int argc, char *argv[])
{
	char buf[BUF_SIZE] = "adminpower";
	int secret = 42;
	strcat(buf, ".");

	printf(buf);

	return 0;
}
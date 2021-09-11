#include <stdio.h>
#include <string.h>

/**
 *	CWE-787: The software writes data past the end, or before the beginning, of the intended buffer.
 *	https://cwe.mitre.org/data/definitions/787.html
 */
int main(int argc, char *argv[])
{
	char buf[10];
	int valid_password = 0;

	strcpy(buf, argv[1]);

	if (strcmp(buf, "letmein") == 0)
	{
		valid_password = 1;
	}

	if (valid_password)
	{
		printf("Password is valid\n");
	}
	else
	{
		printf("Password is not valid\n");
	}

	return 0;
}
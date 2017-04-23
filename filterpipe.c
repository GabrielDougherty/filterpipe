#include <stdio.h>
#include <stdbool.h>

int main()
{
	char c;
	bool is_comment = false;

	while ((c = getchar()) != EOF)
	{
		if (!is_comment)
			is_comment = (c == '#');

		// only print non-comments, don't print newline at end of comment
		if (!is_comment)
			putchar(c);
		else if (c == '\n')
			is_comment = false;
	}

	return 0;
}

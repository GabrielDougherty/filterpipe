#include <stdio.h>
#include <stdbool.h>

int main()
{
	char c;
	bool is_comment = false;
	bool end_comment = false;

	for (c = getchar(); c != EOF; c = getchar())
	{
		end_comment = false;

		if (!is_comment)
			is_comment = (c == '#') ? true : false;
		else if (c == '\n')
		{
			is_comment = false;
			end_comment = true;
		}
		
		// only print non-comments, don't print newline at end of comment
		if ( !is_comment && !end_comment)
			putchar(c);
	}

	return 0;
}

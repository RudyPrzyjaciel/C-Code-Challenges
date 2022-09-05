#include <stdio.h>

char *ordinal(int v)
{
	int tmp = v % 10;
	switch (tmp)
	{
	case 1:
		return v == 11 ? "th" : "st";
	case 2:
		return v == 12 ? "th" : "nd";
	case 3:
		return v == 13 ? "th" : "rd";
	default:
		return "th";
	}
}

int main()
{
	int c;

	for( c=1; c<=20; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
				c, ordinal(c),
				c+20, ordinal(c+20),
				c+40, ordinal(c+40),
				c+60, ordinal(c+60),
				c+80, ordinal(c+80)
			  );
	}

	return(0);
}

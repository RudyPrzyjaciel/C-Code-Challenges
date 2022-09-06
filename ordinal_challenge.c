#include <stdio.h>

//#define RUN_TEST
#define TEST_CASE
#define TIMES 1000000000

#ifdef TEST_CASE
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
#else
	char *ordinal(int v)
	{
		if (v == 11 || v == 12 || v == 13) return "th";

		int tmp = v % 10;
		switch (tmp)
		{
		case 1:
			return "st";
		case 2:
			return "nd";
		case 3:
			return "rd";
		default:
			return "th";
		}
	}
#endif


int main()
{
	#ifdef RUN_TEST
		printf("Starting test of %d instanes\n", TIMES);
		for (int i = 1; i < TIMES; i++)
		{
			ordinal(i);
		}
		printf("Finished test!\n");
	#else
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
	#endif
	return(0);
}
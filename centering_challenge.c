#include <stdio.h>

#define SCREEN_WIDTH 80

int findCharArrLength(char *charArrPtr);

void center_text(int width, char *text)
{
	char lineOfText[width+1];
	for(int i = 0; i < width; i++) lineOfText[i]=' ';
	lineOfText[width] = '\0';
	
	int lengthOfText = findCharArrLength(text);

	if(lengthOfText < width)
	{
		int numberOfSpaces = width - lengthOfText;
		
		for(int i = 0; i < lengthOfText; i++, text++) lineOfText[i + (int)(numberOfSpaces/2)] = *text;
		printf("%s\n", lineOfText);
	}
	else
	{
		for(int i = 0; i < width; i++, text++) lineOfText[i] = *text;
		printf("%s\n", lineOfText);
		center_text(width, text);
	}
}


int main()
{
	char *title[] = {
	   "",
	   "March Sales",
	   "Some slightly longer text",
	   "Centering output is so much fun!",
	   "This title is very long, just to see whether the code can handle such a long title"
	};
	int x;

	for( x=0; x<5; x++ )
	{
		center_text( SCREEN_WIDTH, title[x] );
	}

	return(0);
}


int findCharArrLength(char *charArrPtr)
{
	int arrayLength = 0;
	while (charArrPtr[arrayLength] != '\0')
	{
		arrayLength += 1;
	}
	return arrayLength;
}
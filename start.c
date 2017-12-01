/*
Title: 
Creator: Marble
CDate: 5th Nov, 2017
Desc: Yay header files. Main driver for the game
*/

#include "tops.h"
#include "Dia.c"

int main (void)
{
	int end = FALSE;
	int txt = 20;
	char *name[8]; /*defined outside dia bc memory leaks*/
	
	while (end == FALSE)
	{
		txt = dial(txt, *name);
		/*printf("txt#%i", txt);*/
		if (txt == -1)
		{
			end = TRUE;
		}
	}
	
	return 0;
}



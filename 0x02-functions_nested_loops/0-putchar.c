#include "main.h"

#define MAXSTRING 40

int main(void){

	char message[]= "_putchar\n";

	for (int count = 0; count < MAXSTRING; count++)

	{ 

			if (message[count] == '\0')

					{

				         putchar('\n');
                                                       
					 break;
                                        }

				else               
                                                    
			        puchar(message[count]);

	}

	return 0;

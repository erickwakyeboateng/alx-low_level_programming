/*Auth: Eric Kwakye Boateng
 * Task: islower
 */
#include "main.h"
/**
 * int _islower - that checks for lowercase character
 * @C: The character to be checked.
 */
int _islower(int c)
{ 
	if(c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

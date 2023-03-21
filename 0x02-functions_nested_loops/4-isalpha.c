/*
 * Auth: Eric Kwakye Boateng
 * Task: 4. isalpha
 */
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Alphabet that is used to check 
 * Return: 1 when  its lowercase and 0 when its lowercase  
 */
int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	else
		return(0);
}

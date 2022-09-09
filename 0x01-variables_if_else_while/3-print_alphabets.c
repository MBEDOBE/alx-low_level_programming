#include <stdio.h>

<<<<<<< HEAD
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
  
{
  
  char a, b;
  

  
  for (a = 'a'; a <= 'z'; a++)
    
    {
      
      putchar(a);
      
    }
  
  for (b = 'A'; b <= 'Z'; b++)
    
    {
      
      putchar(b);
      
    }
  
  putchar('\n');
  
  return (0);
  
=======
/* printing the alphabet */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
		putchar('\n');

	return (0);
>>>>>>> d5dead0e93e3ea1fe25fd18bafc1ce847f844677
}

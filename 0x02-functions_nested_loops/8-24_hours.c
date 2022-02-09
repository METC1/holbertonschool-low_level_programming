#include "main.h"
/**
 * jack_bauer - Function to combine numbers
 *
 *Return: Void
 */
void jack_bauer(void)
{
	int hr1;
	int hr2;
	int min1;
	int min2;
	
	for (hr1 = '0'; hr1 <= '2'; hr1++)
	{
		for (hr2 = '0' ; hr2 <= '9'; hr2++)
		{
			for (min1 = '0'; min1 <= '6'; min1++)
			{
				for (min2 = '0'; min2 <= '9'; min2++)
				{
				if ((hr1 != 2 && hr1 > 4)||(min1 <= 5))
				{
				_putchar(hr1);
				_putchar(hr2);
				_putchar(':');
				_putchar(min1);
				_putchar(min2);
				_putchar('\n');
				}
				}
			}
		}
		
	}
}

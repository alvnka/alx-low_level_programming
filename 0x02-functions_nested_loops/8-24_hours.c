#include "main.h"
/**
 * jack_bauer - prints time of the day
 *
 * Returns: time;
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m <= 59; m++)
		printf("%02d:%02d\n", h, m);
	}
}

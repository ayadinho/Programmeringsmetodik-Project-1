#include "header.h"


int main (void) 
{
	setup ();

	while (1)
	{
		if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED)
		{
			leds_blink_forward(100);
		}
		else if (!BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_blink_backward(100);
		}
		else if (ALL_BUTTONS_PRESSED)
		{
			leds_on();
		}
		else
		{
			leds_off();
		}
	}
	return 0; 
}
	
	




#include <stdio.h>
#include <string.h>

/*
 * Implementing a basic Finite State Machine using the "switch-case" approach.
 * In this example, I am using a lightswitch to illustate a person choosing to
 * turn a light on or off given the current state of the lightbulb.
 *
 * NOTES:
 * 	- Ideally, there would be n+1 states for n events
 * 	- Also, there would be more events
 */

// Different state of light switch
typedef enum light_switch_state
{
	off,
	on
} light_switch_state;

// Different type events
typedef enum light_switch_event
{
	turn_on,
	turn_off
} light_switch_event;

// Prototype of eventhandlers
light_switch_state light_turn_on_event(void)
{
	printf("Lights on!\n");
	return on;
}

light_switch_state light_turn_off_event(void)
{
	printf("Lights off!\n");
	return off;
}

light_switch_event operate_light()
{
	char input[100];
	printf("Do you want the lights on or off?\n");
	scanf("%3s", input);
	if (!strcmp("on", input))
	{
		return turn_on;
	}
	else
	{
		return turn_off;
	}
}

int main()
{
	// Light switch is off to start, next state can only be off
	light_switch_state current_state = off;
	while (1)
	{
		// Get user command, either off or on. This is the event that could
		// cause the state to change.
    	light_switch_event new_light_switch_event = operate_light();
		// Switch states based on current state and the event that occurred.
		switch (current_state)
		{
		// Light is currently on.
		case on:
		{
			if (new_light_switch_event == turn_off)
			{
				current_state = light_turn_off_event();
			}
		}
		break;
		case off:
		{
			if (new_light_switch_event == turn_on)
			{
				current_state = light_turn_on_event();
			}
		}
		break;
		default:
			break;
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdbool.h>
int transition(int state, char input)
{
    switch (state)
	{
        case 0:
            if (input == '0') return 1;
            break;
        case 1:
            if (input == '1') return 2;
            if (input == '0') return 1;
            break;
        case 2:
            if (input == '1') return 2;
            break;
    }
    return -1;
}
bool simulateNFA(const char *input)
{
    int currentState = 0;
    while (*input != '\0')
	{
        int nextState = transition(currentState, *input);
        if (nextState == -1)
		{
            return false;
        }
        currentState = nextState;
        input++;
    }
    return currentState == 2;
}
int main()
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (simulateNFA(input))
        printf("String accepted!\n");
    else
        printf("String not accepted.\n");
    return 0;
}


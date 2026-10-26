#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    // Set the 3rd bit (bit index 2)
    reg = reg | (1u << 2);

    // Clear the 6th bit (bit index 5)
    reg = reg & (unsigned char)~(1u << 5);

    // Toggle the 1st bit (bit index 0)
    reg = reg ^ (1u << 0);

    return reg;
}

int main(void)
{
    unsigned int input;

    printf("Enter register value (0-255): ");
    if (scanf("%u", &input) != 1 || input > 255)
    {
        printf("Please enter a value between 0 and 255.\\n");
        return 1;
    }

    unsigned char reg = (unsigned char)input;
    reg = modifyRegister(reg);

    printf("Modified register value = %u\\n", (unsigned int)reg);

    return 0;
}

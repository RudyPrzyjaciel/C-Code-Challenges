#include <stdio.h>

int main()
{
    int value = 1;
    int count = 1;

    printf("Enter starting integer: ");
    scanf("%d", &value);
    
    printf("Hailstone sequence:\n   %d", value);
    while (value != 1)
    {
        value = (value % 2 == 1) ? (value = value * 3 + 1) : (value = value / 2);
        count++;
        printf(", %d", value);
    }
    printf("\nSequence length: %d\n", count);
    
    return 0;
}
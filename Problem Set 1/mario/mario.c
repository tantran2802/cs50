#include <stdio.h>
#include <cs50.h>
int main()
{
    int height;
    do 
    {
        height = get_int("Input the height of pyramid between 1 and 8: ");
    }
    while (height < 1 || height > 8); // Accepts input only between 1 and 8
    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }
        for (int z = 0; z <= i; z++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
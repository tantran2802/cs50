#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(void)
{
    string text = get_string("Text: ");
    int wordCount = 1, letters = 0, sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ' && text[i+1] != ' ')
            wordCount++;
        if (isalpha(text[i]))
        {
            letters += 1; // If is a letter, let's add one
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences += 1; // If there's punctuation, let's add one
        }
    }
    float L = (letters / (float) wordCount) * 100, 
    S = (sentences / (float) wordCount) * 100,
    index = 0.0588 * L - 0.296 * S - 15.8;
    printf("Number of words %d\n", wordCount);
    int grade = round(0.0588 * L - 0.296 * S - 15.8); // Coleman-Liau index
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }   
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }    
    else
    {
        printf("Grade %i\n", grade);
    }
    return 0;
}
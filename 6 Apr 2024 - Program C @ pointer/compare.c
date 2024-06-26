/**
 * C program to compare two string without using string library functions
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Compare function declaration */
int compare(char * str1, char * str2);


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    /* Call the compare function to compare strings */
    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}


/**
 * Compares two strings lexicographically. 
 * Returns 0 if both strings are equal, 
 *         negative if first string is smaller
 *         otherwise returns a positive value
 */
int compare(char * str1, char * str2)
{
    int i = 0;

    /* Iterate till both strings are equal */
    while(str1[i] == str2[i])
    {
        i++;
        
        if(str1[i] == '\0' && str2[i] == '\0')
            break;
    }

    // Return the difference of current characters.
    return str1[i] - str2[i];
}

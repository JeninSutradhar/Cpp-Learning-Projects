//////////////////////
// File name : Functions overloading
//////////////////////

#include <iostream>
using namespace std;

//dest = destination
//src = source

/*This program demonstrates function overloading, which allows the same 
function name to be used for different functions that have different 
parameter lists.

The program defines two versions of a function called string_copy(), 
which are used to copy strings from one character array to another. 
The first version takes two arguments: a destination character array (dest) 
and a source character array (src). It copies the characters in src to dest 
until it reaches the end of the string (indicated by the null character '\0').*/

//first version od string_copy().
void string_copy(char *dest, const char* src)
{
    while((*dest++ = *src++) !='\0');
}
//second version of string copy
void string_copy(char *dest, const char* src, int len )
{
    while (len && (*dest++ = *src++) !='\0')
        len--;
    while (len--)
        *dest++ = '\0';
}

char misspiggy[20], kermit[20];

int main()
{
    string_copy(misspiggy, "Miss Piggy");
    string_copy(kermit, "Kermit, the file transfer protocol", 6);
    cout << kermit << " and " << misspiggy;
}
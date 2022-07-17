/** quiz09-03.c
* ===========================================================
*    Name: 
* Section:
* Purpose: Quiz 9
* ===========================================================
*/

#include <stdio.h>
#include <string.h>

// YOUR FUNCTION WILL GO HERE


int main(void){

    int result = 0;
    char* testString = "aaabbbbccccc";
    char  testLetter = 'a'; 

    result = countLetters(testString, testLetter);
    printf("The result of countLetters(\"%s\", '%c') is %d\n", testString, testLetter, result);

    return 0;

}
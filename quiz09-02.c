/** quiz09-02.c
* ===========================================================
*    Name: 
* Section:
* Purpose: Quiz 9
* ===========================================================
*/

#include <stdio.h>

// YOUR FUNCTION WILL GO HERE


int main(void){

    int result = 0;
    int testNum1 = 12;
    int testNum2 = 36;

    result = gcd(testNum1, testNum2);
    printf("The result of gcf(%d, %d) is %d\n", testNum1, testNum2, result);

    return 0;

}
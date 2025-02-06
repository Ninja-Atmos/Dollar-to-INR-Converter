// dollar to inr conversion by Suvam.
#include <stdio.h>
int main()
{
    int put;
    float dollar;
    // taking current dollar value from user
    printf("Enter Current Dollar Value: ");
    scanf("%f", &dollar);

    // taking total dollar amount from user which we can convert dollar to inr
    printf("Enter Dollar Amount: ");
    scanf("%d", &put);

    // now we have to enter the formula.

    printf("The INR Value is: %f", dollar * put);

    return 0;
}
/* A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.
Author Majid Mujahid Hussain dated 8 December 2020 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount = 0, notes = 0;
    printf("Hello world!\n");
    printf("\n Please enter the amount (in hundreds)\n ");
    scanf("%d", &amount);

    //calculating  the amount for denominations of 100
    notes = amount / 100;
    printf("\n the number of hundred rupees notes required to give amount of %d will %d", amount, notes);

    //calculating the amount for denominations of 50 rupees notes
    notes = (amount % 100) / 50;
    printf("\n the number of fifty rupees notes required to give the amount of %d will be %d", amount, notes);

    //calculating the amount for denominations of 10 rupees notes
    notes = ((amount % 100) % 50) / 10;
    printf("\n the number of fifty rupees notes required to give the amount of %d will be %d", amount, notes);

    //calculating the amount left after all the denominations are over
    notes = (((amount % 100) % 50) %10);
    printf("\n the number of change left to give the amount of %d will be %d", amount, notes);

    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get first and last name
    string first = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");

    // get age
    int x = get_int("What is your age? ");


    // get phone number
    int d1, s2, d3;
    int val; // to check if scanf was successful

    printf("Please enter phone number as (xxx) xxx-xxxx: ");
    val = scanf("(%d)%d-%d", &d1, &s2, &d3);

    // answers
    printf("Your name: %s %s\n", first, last);
    printf("Your age: %i\n", x);
     if(val == 3)
        printf("Your phone number: %d.%d.%d\n", d1, s2, d3);
    else
        printf("input not in the correct format.\n");
}

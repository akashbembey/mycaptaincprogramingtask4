#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("I have decided to eat junk food today so what should I eat");
    printf(" there are 3 thing in the menu\n\n1. Pizza\n\n2.Burger\n\n3. French fries\n\n\n\n");
    int ch=0;
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            {
                printf("\n\nYou want to eat Pizza");
                break;
            }
        case 2:
            {
                printf("\n\nYou want to eat Burger");
                break;
            }
        case 3:
            {
                printf("\n\nYou want to eat French fries");
                break;
            }
        default:
            printf("\n\nInvalid choice");
    }
    printf("\n\n\n\n\n\n\n\n");

}

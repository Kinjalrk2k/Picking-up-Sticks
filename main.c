#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void print_sticks(int n)
{
    for(int i=0; i<n; i++)
        printf("%c ", 179);
    printf("\n");
}

int main()
{
    bool compturn=false;
    int sticks=21, u_in;

    printf("PICKING UP STICKS\n");
    printf("Pick any number of sticks from 1-4. The one picking the last stick looses\n\n");

    while(u_in>0)
    {
        printf("Number of Sticks: %d\n", sticks);
        print_sticks(sticks);
        printf("\n");
        printf("Enter the number of sticks to pick: ");
        scanf("%d", &u_in);

        sticks-=u_in;
        compturn=!compturn;
        if(sticks==1)
            break;

        printf("\nNumber of Sticks: %d\n", sticks);
        print_sticks(sticks);
        printf("\n");

        sticks-=(5-u_in);
        printf("COMPUTER picks up: %d\n", (5-u_in));
        compturn=!compturn;
        if(sticks==1)
            break;

        printf("\n");
    }

    printf("\nNumber of Sticks: %d\n\n", sticks);
    if(compturn)
        printf("Player Wins!");
    else
    {
        printf("Player has to pick the last stick\n");
        printf("Player Looses!");
    }

    _getch();
    return 0;
}

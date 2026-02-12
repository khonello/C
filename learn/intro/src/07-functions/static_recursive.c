#include <stdio.h>

void func(void)
{

    static int i;
    char shortcode[5];

    printf("Enter shortcode\n");
    fflush(stdout);

    scanf("%s", &shortcode);
    fflush(stdin);

    char strt = (char)shortcode[0];
    char end = (char)shortcode[4];

    if ( *(shortcode) == strt && *(shortcode + 4) == end )
    {
        if (*(shortcode + 1) == '1' && *(shortcode + 2) == '7' && *(shortcode + 3) == '0')
        {
            printf("Welcome to MTN Mobile money\n");
            fflush(stdout);
        }
        else
        {
            printf("You dialed the wrong code\nTry again\n");
            fflush(stdout);
            
            if (i != 2)
            {
                i++;
                func();
            }
            else
            {
                printf("Sorry something went wrong");
                fflush(stdout);
            }
        }
    }
    else
    {
        printf("You dialed the wrong shortcode\n");
        fflush(stdout);
    }
}

int main()
{
    func();
    return 0;
} 
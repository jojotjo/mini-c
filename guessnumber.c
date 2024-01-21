#include <stdio.h>
int main()
{
    int secert_number;
    printf("there is a secert number in between among 100 natural number \n");
    secert_number = 56;
    int guess_number;
    printf("you have to guess the number \n");

    int guess_limit;
    guess_limit = 3;
    int i;
    i = 1;
    while (i <= guess_limit)
    {

        printf("guess the number %d = ", i);
        scanf("%d", &guess_number);
        i = i + 1;

        if (guess_number == secert_number)
        {
            printf("you won");
            break;
        }
        else
        {
            printf("you lost \n");
        }
    }

    // for (int i=1;i<=guess_limit;i++)
    // {
    //     printf("guess the number %d = ",i);
    //     scanf("%d",&guess_number);

    //     if (guess_number==secert_number)
    //     {
    //         printf("you won");
    //         break;
    //     }
    // }

    // if (guess_number!=secert_number)
    // {
    //     printf("you lost");
    // }
    return 0;
}
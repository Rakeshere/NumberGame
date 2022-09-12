#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, nnumber = 1;
    srand(time(100));
    number = rand() % 100 + 1;

    // printf("The Number is %d \n", number);

    do
    {
        printf("Guess the Number Between 1 to 100 \n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower Number Please: \n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please: \n");
        }

        else
        {
            printf("You nailed it in %d attempts \n", nnumber);
        }

        nnumber++;

    } while (guess != number);
    return 0;
}

// number game
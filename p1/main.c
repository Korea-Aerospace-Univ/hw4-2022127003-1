#include <stdio.h>

int main(void)
{
    int answer, guess;
    int i = 0;

    scanf("%d", &answer);

    do {
        scanf("%d", &guess);
        i++;

        if (guess > answer)
            printf("%d>?\n", guess);
        else if (guess < answer)
            printf("%d<?\n", guess);
        else
            printf("%d==?\n", guess);

    } while (guess != answer);

    printf("%d\n", i);

    return 0;
}

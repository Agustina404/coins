#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int numbers[] = {25 ,10 ,5 ,1};
    int num_coins = sizeof (numbers) / sizeof (numbers[0]);

    int user_number;
    printf("Change owed: ");

    while (1) {
    scanf("%d", &user_number);
    if (user_number < 1) {
        printf ("");
        while (getchar() != '\n');
        printf("Change owed: ");
         } else {
             int totalCoins = 0;
            for (int i = 0; i < num_coins; i++) {
                totalCoins += user_number / numbers[i];
                user_number %= numbers[i];

                     }
                      printf("%d\n", totalCoins);
            break;
    }
    }



return 0;

}
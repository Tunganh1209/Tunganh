#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int random;
    int enter;

    for (int i = 1; i <= 10; i++){


    printf("\nEnter your number:");
    scanf("%d",&enter);
    
    srand(time(NULL));
    random = rand() % 10-0;
    printf("The random number was:%d ", random );

    if (enter > random) {
       printf("\nYour number is bigger than the random number");
    } else if (random > enter) {
        printf("\nYour number is smaller than the random number");
    }
      else {
        printf("\nYou guess the number, you pretty lucky aren't you");
      } 
    }


    return 0;
}
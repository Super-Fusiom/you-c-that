#include <stdio.h>

void war() {
    printf("war");
   for (int i = 0; i < 10; i++)
    {
        puts(i);
    }
    
}

int main() {
    int number = 45;
    printf("The number of the variable is %d\n", number);
    char wish[] = "fly";
    printf("I wish I can %s since my lucky number is %d\n", wish, number);

    int fishNum = 22;
    fishNum = number;

    printf("fish wants their luckey number to be %d\n", fishNum);
    war();
    
}
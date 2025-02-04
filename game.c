#include <stdio.h>
#include <stdlib.h>

char GetPlayerMove()
{
    char playerInput;

    printf("Enter your move (r for rock, p for paper, s for scissors): ");
    scanf(" %c", &playerInput);

    while (playerInput != 'r' && playerInput != 'p' && playerInput != 's')
    {
        printf("Invalid move. Enter your move (r for rock, p for paper, s for scissors): ");
        scanf(" %c", &playerInput);
    }

    return playerInput;
}

char GetComputerMove()
{
    char computerInput;
    int computerRand = rand() % 3;

    switch(computerRand)
    {
        case 0:
            computerInput = 'r';
            break;
        case 1:
            computerInput = 'p';
            break;
        case 2:
            computerInput = 's';
            break;
    }

    printf("Computer's Move: %c\n", computerInput);

    return computerInput;
}

void PlayRockPaperScissorsGame()
{
    char playerMove = GetPlayerMove();
    char computerMove = GetComputerMove();

    if (playerMove == computerMove)
    {
        printf("It was a tie!\n");
    }
    else if ((playerMove == 'r' && computerMove == 's') || (playerMove == 'p' && computerMove == 'r') || (playerMove == 's' && computerMove == 'p'))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}

int main()
{
    char c;

    printf("Welcome to Rock, Paper, Scissors! Press 'q' to quit or any other key to continue:\n");
    scanf("%c", &c);
    
    while (c != 'q')
    {
        PlayRockPaperScissorsGame();

        printf("Press 'q' to quit or any other key to continue: ");
        scanf(" %c", &c);
    }

    printf("Bye Bye!");

    return 0;
}
#include <stdio.h>

void main_menu();
void movie_menu();
void sudo();

int main()
{
    main_menu();

}

void main_menu() {
    char main[0];
    puts(" @@@@@ Bienvenido al menú del cinema @@@@@ ");
    puts(" En qué modo deseas acceder:");
    puts("0. Sudo");
    puts("1. Customer");
    scanf("%s",main);
    switch (main[0]) {
    case '0':
        sudo();
        break;
    case '1':
        movie_menu();
        break;
    default:
        puts("Incorrecto, ingresa de nuevo: ");
        main_menu();
    }

}

void movie_menu(){
    puts("hi");
}

void sudo(){
    printf("ingrsas sudo");
}

/*
    char tictactoe[10][13];
    int x,y;

    for(x=0;x<10;x++)
        for(y=0;y<13;y++)
            tictactoe[x][y] = '#';

    puts("Tic Tac Toe");
    for(x=0;x<10;x++)
    {
        for(y=0;y<13;y++)
            printf(" %c ",tictactoe[x][y]);
        putchar('\n');
    }

    return(0);
 */

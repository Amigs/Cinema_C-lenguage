#include <stdio.h>
#include <string.h>

#define value 10000

struct movies
{
    char name[20];
    int sala;
    char time[20];
}movies1={"name",1,"0"}, movies2={"name2",2,"0"}, movies3={"name3",3,"0"}, movies4={"name4",4,"0"}, movies5={"name5",5,"0"};

void main_menu();
void movie_menu();
void movie_in();
void sudo();
void movies_print();

int i,j,k;
char in[0];

int main()
{
    main_menu();
}

void main_menu() {
    puts(" @@@@@ Bienvenido al menú del cinema @@@@@ ");
    puts(" En qué modo deseas acceder:");
    puts("0. Sudo");
    puts("1. Customer");
    scanf("%s",in);
    switch (in[0]) {
    case '0':
        sudo();
        break;
    case '1':
        movie_menu();
        break;
    default:
        puts("Incorrecto, ingresa de nuevo: ");
        main_menu();
        break;
    }

}

void movie_menu(){
    puts("  @@@@@ Bienvenido al menú del cinema @@@@@ ");
    puts("        ¡¡¡ Películas en cartelera !!!");
    puts("¿cuál prefieres hoy? ");
    puts("Sala     Película    Horario");
    movies_print();
    printf("si desea comprar presione (y)");
    scanf("%s",in);
    if (in[0] == 'y')
        printf("");
    else {
        puts("Te esperamos de nuevo :)");
        main();
    }
}

void sudo(){
    puts("Bienvenidos a modo administrador");
    puts("¿Qué haccion deseas tomar?");
    puts("a. ==> Ingresar peliulas de la cartelera");
    puts("b. ==> Ingresar a contabilidad");
    puts("c. ==> Regresar al menú principal");
    scanf("%s",in);
    switch (in[0]) {
    case 'a':
        movie_in();
        break;
    case 'b':
        break;
    case 'c':
        main_menu();
        break;
    default:
        puts("Incorrecto, ingresa de nuevo: ");
        sudo();
        break;
    }
}

void movie_in(){
     puts("películas actualmente en cartelera:");
     puts("Sala     Película    Horario");
     movies_print();
     puts("en que sala se desea agregar la película:");
     scanf("%s",in);
     switch (in[0]) {
     case '1':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies1.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies1.time);
         puts("hecho");
         sudo();
         break;
     case '2':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies2.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies2.time);
         puts("hecho");
         sudo();
         break;
     case '3':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies3.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies3.time);
         puts("hecho");
         sudo();
         break;
     case '4':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies4.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies4.time);
         puts("hecho");
         sudo();
         break;
     case '5':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies5.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies5.time);
         puts("hecho");
         sudo();
         break;
     default:
         puts("Incorrecto, ingresa de nuevo: ");
         movie_in();
         break;
     }

}

void movies_print(){
    printf(" %d      %s     %s\n",movies1.sala,movies1.name,movies1.time);
    printf(" %d      %s     %s\n",movies2.sala,movies2.name,movies2.time);
    printf(" %d      %s     %s\n",movies3.sala,movies3.name,movies3.time);
    printf(" %d      %s     %s\n",movies4.sala,movies4.name,movies4.time);
    printf(" %d      %s     %s\n",movies5.sala,movies5.name,movies5.time);
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

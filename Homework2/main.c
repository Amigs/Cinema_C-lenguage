#include <stdio.h>
#include <stdlib.h>


#define value 10000

struct movies
{
    char name[20];
    int sala;
    char time[20];
    char sillas[11][14];
}movies1={"name1",1,"0",{{' ','A','B','C','D','E','F',' ','G','H','I','J','K','L'},
                         {'0','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'1','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'2','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'3','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'4','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'5','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'6','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'7','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'8','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'9','-','-','-','-','-','-',' ','-','-','-','-','-','-'}}},
 movies2={"name2",2,"0",{{' ','A','B','C','D','E','F',' ','G','H','I','J','K','L'},
                         {'0','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'1','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'2','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'3','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'4','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'5','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'6','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'7','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'8','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'9','-','-','-','-','-','-',' ','-','-','-','-','-','-'}}},
 movies3={"name3",3,"0",{{' ','A','B','C','D','E','F',' ','G','H','I','J','K','L'},
                         {'0','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'1','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'2','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'3','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'4','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'5','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'6','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'7','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'8','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'9','-','-','-','-','-','-',' ','-','-','-','-','-','-'}}},
 movies4={"name4",4,"0",{{' ','A','B','C','D','E','F',' ','G','H','I','J','K','L'},
                         {'0','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'1','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'2','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'3','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'4','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'5','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'6','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'7','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'8','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'9','-','-','-','-','-','-',' ','-','-','-','-','-','-'}}},
 movies5={"name5",5,"0",{{' ','A','B','C','D','E','F',' ','G','H','I','J','K','L'},
                         {'0','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'1','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'2','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'3','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'4','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'5','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'6','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'7','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'8','-','-','-','-','-','-',' ','-','-','-','-','-','-'},
                         {'9','-','-','-','-','-','-',' ','-','-','-','-','-','-'}}};

void customer_menu();
void sudo_menu();
void movie_in();
void movies_print();
void read_file(char path[]);
void write_file(char path[]);
void sillas_print(struct movies movie,int boletas);
int interpreter_col (char col);
int interpreter_fil (int fil);
double calculo_bill (int fil);
void accounting (struct movies movie, double total);
void read_sillas (char path[]);
void write_sillas (char path[]);

int x,y;
char in[0];
int numero_boletas = 0;


int main()
{
    read_file("movies.txt");
    puts(" @@@@@ Bienvenido al menú del cinema @@@@@ ");
    puts(" En qué modo deseas acceder:");
    puts("0. Sudo");
    puts("1. Customer");
    scanf("%s",in);
    switch (in[0]) {
    case '0':
        sudo_menu();
        break;
    case '1':
        customer_menu();
        break;
    default:
        puts("Incorrecto, ingresa de nuevo: ");
        main();
        break;
    }
    return EXIT_SUCCESS;
}

void customer_menu(){
    numero_boletas = 0;
    puts("  @@@@@ Bienvenido al menú del cinema @@@@@ ");
    puts("        ¡¡¡ Películas en cartelera !!!");
    puts("¿cuál prefieres hoy? ");
    puts("Sala    Película    Horario");
    movies_print();
    printf("si desea comprar presione (y) ");
    scanf("%s",in);
    if (in[0] == 'y'){
        printf("digite el número de la sala de la película que desea ver: ");
        scanf("%s",in);
        putchar('\n');
        switch (in[0]) {
        case '1':
            printf("%s sala %d %s  ",movies1.name,movies1.sala, movies1.time);
            printf("¿cúantas boletas desea comprar: ");
            scanf("%d",&numero_boletas);
            putchar('\n');
            sillas_print(movies1, numero_boletas);
            break;
        case '2':
            printf("%s sala %d %s\n",movies2.name,movies2.sala, movies2.time);
            printf("¿cúantas boletas desea comprar: ");
            scanf("%d",&numero_boletas);
            putchar('\n');
            sillas_print(movies2, numero_boletas);
            break;
        case '3':
            printf("%s sala %d %s\n",movies3.name,movies3.sala, movies3.time);
            printf("¿cúantas boletas desea comprar: ");
            scanf("%d",&numero_boletas);
            putchar('\n');
            sillas_print(movies3, numero_boletas);
            break;
        case '4':
            printf("%s sala %d %s\n",movies4.name,movies4.sala, movies4.time);
            printf("¿cúantas boletas desea comprar: ");
            scanf("%d",&numero_boletas);
            putchar('\n');
            sillas_print(movies4, numero_boletas);
            break;
        case '5':
            printf("%s sala %d %s\n",movies5.name,movies5.sala, movies5.time);
            printf("¿cúantas boletas desea comprar: ");
            scanf("%d",&numero_boletas);
            putchar('\n');
            sillas_print(movies5, numero_boletas);
            break;
        default:
            puts("Incorrecto, ingresa de nuevo: ");
            customer_menu();
            break;
        }
    }
    else {
        puts("Te esperamos de nuevo :)");
        main();
    }
}

void sudo_menu(){
    write_file("movies.txt");
    puts("Bienvenidos a modo administrador");
    puts("¿Qué acción deseas tomar?");
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
        main();
        break;
    default:
        puts("Incorrecto, ingresa de nuevo: ");
        sudo_menu();
        break;
    }
}

void movie_in(){
     puts("películas actualmente en cartelera:");
     puts("Sala    Película    Horario");
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
         sudo_menu();
         break;
     case '2':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies2.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies2.time);
         puts("hecho");
         sudo_menu();
         break;
     case '3':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies3.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies3.time);
         puts("hecho");
         sudo_menu();
         break;
     case '4':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies4.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies4.time);
         puts("hecho");
         sudo_menu();
         break;
     case '5':
         printf(" ingresa el nombre de la película: ");
         scanf(" %s",movies5.name);
         printf(" ingresa el horario de la película: ");
         scanf(" %s",movies5.time);
         puts("hecho");
         sudo_menu();
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

void read_file(char path[]){
    FILE *archivo;
    archivo = fopen(path,"r");
    if (archivo != 0){
        while (!feof(archivo)) {
            fscanf(archivo, "%s%d%s\n",movies1.name,&movies1.sala,movies1.time);
            fscanf(archivo, "%s%d%s\n",movies2.name,&movies2.sala,movies2.time);
            fscanf(archivo, "%s%d%s\n",movies3.name,&movies3.sala,movies3.time);
            fscanf(archivo, "%s%d%s\n",movies4.name,&movies4.sala,movies4.time);
            fscanf(archivo, "%s%d%s\n",movies5.name,&movies5.sala,movies5.time);
        }
    }
        fclose(archivo);
}

void write_file(char path[]){
    FILE *archivo;
    archivo = fopen(path,"w");
    if (archivo != 0){
        fprintf(archivo,"%s %d %s\n",movies1.name,movies1.sala,movies1.time);
        fprintf(archivo,"%s %d %s\n",movies2.name,movies2.sala,movies2.time);
        fprintf(archivo,"%s %d %s\n",movies3.name,movies3.sala,movies3.time);
        fprintf(archivo,"%s %d %s\n",movies4.name,movies4.sala,movies4.time);
        fprintf(archivo,"%s %d %s\n",movies5.name,movies5.sala,movies5.time);
    }
    fclose(archivo);
}

void sillas_print(struct movies movie, int boletas){
    int fil,col;
    double sub = 0;
    puts("..........................................");
    puts("..................PANTALLA................");
    puts("..........................................");
    for(x=0;x<11;x++)
    {
        for(y=0;y<14;y++)
            printf(" %c ",movie.sillas[x][y]);
        putchar('\n');
    }
    puts("(-)=>Sillas disponibles (+)=>sillas ocupadas");
    putchar('\n');
    for(x=0;x<boletas;x++){
        char columna;
        int fila = 0;
        puts("seleccione las silla que deseas");
        printf("Columna: ");
        scanf("%s",&columna);
        fflush(stdin);
        printf(" Fila  : ");
        scanf("%d",&fila);
        fflush(stdin);
        col = interpreter_col(columna);
        fil = interpreter_fil(fila);
        if (movie.sillas[fil][col]=='-')
            movie.sillas[fil][col] = '+';
        else
            puts("la silla no se encuentra disponible");
        sub += calculo_bill(fila);
        puts("************boleta generada************");
        puts("---------------------------------------");
        printf("            %s\n",movie.name);
        printf("            sala %d\n",movie.sala);
        printf("            Horario %s\n",movie.time);
        printf("            silla %c%d\n",columna,fila);
        puts("***************************************");
    }
    puts ("¡¡Su solicitud se ha realizado con éxito!!");
    putchar('\n');
    puts("..........................................");
    puts("..................PANTALLA................");
    puts("..........................................");
    for(x=0;x<11;x++){
        for(y=0;y<14;y++)
            printf(" %c ",movie.sillas[x][y]);
        putchar('\n');
        }
    putchar('\n');
    puts("/////////////////////////////////////////");
    printf("El valor total de las boletas es: %0.f\n",sub);
    puts("Gracias por su compra, regresa pronto :)");
    puts("/////////////////////////////////////////");

}

int interpreter_col(char col){
    int copy[0];
    if (col == 'A')
        copy[0]=1;
    else if (col == 'B')
        copy[0]=2;
    else if (col == 'C')
        copy[0]=3;
    else if (col == 'D')
        copy[0]=4;
    else if (col == 'E')
        copy[0]=5;
    else if (col == 'F')
        copy[0]=6;
    else if (col == 'G')
        copy[0]=8;
    else if (col == 'H')
        copy[0]=9;
    else if (col == 'I')
        copy[0]=10;
    else if (col == 'J')
        copy[0]=11;
    else if (col == 'K')
        copy[0]=12;
    else if (col == 'L')
        copy[0]=13;
    return copy[0];
}

int interpreter_fil (int fil){
    int copy[0];
    if (fil == 0)
        copy[0]=1;
    else if (fil == 1)
        copy[0]=2;
    else if (fil == 2)
        copy[0]=3;
    else if (fil == 3)
        copy[0]=4;
    else if (fil == 4)
        copy[0]=5;
    else if (fil == 5)
        copy[0]=6;
    else if (fil == 6)
        copy[0]=7;
    else if (fil == 7)
        copy[0]=8;
    else if (fil == 8)
        copy[0]=9;
    else if (fil == 9)
        copy[0]=10;
    return copy[0];
}

double calculo_bill (int fil){
    double total;
    if (fil == 0)
        total=value;
    else if (fil == 1)
        total=value+200;
    else if (fil == 2)
        total=value+400;
    else if (fil == 3)
        total=value+600;
    else if (fil == 4)
        total=value+800;
    else if (fil == 5)
        total=value+1000;
    else if (fil == 6)
        total=value+1200;
    else if (fil == 7)
        total=value+1400;
    else if (fil == 8)
        total=value+1600;
    else if (fil == 9)
        total=value+1800;
    return total;
}

void accounting (struct movies movie, double total){
    puts("bienvenido a la contabilización");
    printf("ventas totales: %f", total);
}

void read_sillas (char path[]){
    FILE *archivo;
    archivo = fopen(path,"r");
    if (archivo != 0){
        while (!feof(archivo)) {

        }
    }
}
void write_sillas (char path[]){
    FILE *archivo;
    archivo = fopen(path,"w");
    if (archivo != 0){

    }
    fclose(archivo);
}

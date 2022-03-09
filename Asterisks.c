// Versao usando um ciclo while:

#include <stdio.h>

/** Desenha uma linha de asteriscos em sequencia e um fim de linha. */
void desenhaLinhaDeAsteriscos( int numero_de_asteriscos)
{
    int i = 0;
    while( i != numero_de_asteriscos ) {
        printf( "%c", '*' );
        ++i;
    }
    printf( "\n" );
}

int main()
{
    printf( "Qual o tamanho da linha? " );
    int n;
    scanf( "%d", &n );

    if(n < 0) {
	    printf( "Tamanho inválido!\n" );
    }
    else
        desenhaLinhaDeAsteriscos(n);

    return 0;
}

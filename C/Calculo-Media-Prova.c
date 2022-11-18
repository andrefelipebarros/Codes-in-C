#include <stdio.h>

int main()
{

    //declaro variável
    float x;
    float y;
    float N1, N2, N3, N4, NotaFinal;

    //escrevo o código


    //primeiro participante
    printf("Coloque sua primeira nota\n");
    scanf("%f", &N1);
    printf("Coloque sua segunda nota\n");
    scanf("%f", &N2);

    x = ( N1 + N2 / 2);


    //segundo participante
    printf("Coloque a primeira nota do seu amigo\n");
    scanf("%f", &N3);
    printf("Coloque a segunda nota do seu amigo\n");
    scanf("%f", &N4);

    y = ( N3 + N4 / 2);

    if(y >= x){
        printf("Nota do seu amigo ficou maior que a sua.");
    }
    else{
        printf("Sua Nota ficou maior que a de seu amigo.");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int id, nota1,nota2,nota3;
    float media,MA;
    char aval_final;
    char reprovado[]="Reprovado";
    char aprovado[]= "Aprovado";
    printf("Introduzir o ID:\n");
    scanf("%d", &id);
    printf("Colocar 3 notas:\n");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    media=(nota1 + nota2 + nota3)/3;
    MA=(nota1+2*nota2+3*nota3+media)/7;
    // printf("%.f\n",MA);
    if(MA>=17){
        aval_final = 'A';
        }
    else if(MA>=14 && MA <17){
        aval_final='B';
        }
    else if(MA >=10 && MA < 14){
        aval_final='C';
        }
    else if(MA>=8 && MA<10){
        aval_final='D';
        }
    else {
        aval_final='E';
        }
    

    switch(aval_final)
    {
        case 'A':
        printf("Aluno ID-%d\n", id);
        printf("Notas: %d, %d ,%d\n", nota1, nota2,nota3);
        printf("Media:%.2f \n", media);
        printf("Avaliação Final= %c\n",aval_final);
        printf("%s \n", aprovado);
        break;

        case 'B':
        printf("Aluno ID-%d\n", id);
        printf("Notas: %d, %d ,%d\n", nota1, nota2,nota3);
        printf("Media:%.2f \n", media);
        printf("Avaliação Final= %c\n",aval_final);
        printf("%s \n", aprovado);
        break;

        case 'C':
        printf("Aluno ID-%d\n", id);
        printf("Notas: %d, %d ,%d\n", nota1, nota2,nota3);
        printf("Media:%.2f \n", media);
        printf("Avaliação Final= %c\n",aval_final);
        printf("%s \n", aprovado);
        break;

        case 'D':
        printf("Aluno ID-%d\n", id);
        printf("Notas: %d, %d ,%d\n", nota1, nota2,nota3);
        printf("Media:%.2f \n", media);
        printf("Avaliação Final= %c\n",aval_final);
        printf("%s \n", reprovado);
        break;

        case 'E':
        printf("Aluno ID-%d\n", id);
        printf("Notas: %d, %d ,%d\n", nota1, nota2,nota3);
        printf("Media:%.2f \n", media);
        printf("Avaliação Final= %c\n",aval_final);
        printf("%s \n", aprovado);
        break;

        default:
        printf("Olá!!");

    }

    return 0;

}

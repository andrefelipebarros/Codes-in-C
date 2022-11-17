
#include <iostream>

using namespace std;

int main()
{
    //declaracao de variaveis
    char str[10] = {'j','o','a','o'};
    char str1[10] = {"Joao"};
    char str_vect[3][10] = {"Joao", "Maria", "Jose"};
    float vect[6] = {1.3, 4.5, 2.7, 4.1, 0.0, 100.1};
    int matrx[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int numero[10] = {1,2,3,4,5,6,7,8,9,10};
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    
    //código
    cout << str[1] <<"\n";
    cout << str_vect[1][1] << "\n";
    cout << vect[2] << "\n";
    cout << matrx[1][2] << "\n";
    
    //Vetor ele consegue guardar dados da funcao, e guarda a posicao de cada coisa.
    
    //pensei em fazer a soma através da criação de numeros aleatorios guardados.
    
    //uma dica é pensar como se fosse uma tabela do excel com dados dentro
    
    cout << "Soma aleatória da tabela: " << numero[3] + numero[7] << "\n";
    
    
    //usar repetição e utilização do cin para enviar um número a lista
    
    int notas[3];
    
    for(int i=0; i<3; i++){
        cout << "Digite o valor da nota " << i+1 << " : ";
        cin >> notas[i];
    }
    for(int i = 0; i<3; i++){
    cout << "Nota " << i+1 << "digitada: " << notas[i] << "\n";
    }
    
    cout << "A média das notas são : " << (notas[0] + notas[1] + notas[2]) / 3;
    
    float media;
    
    media = (notas[0] + notas[1] + notas[2]) / 3;
    
    //if para a aprovação ou não
    
    if(media >= 7){
        cout << "  Aluno Aprovado!";
    }
    else{
        cout << "  Aluno Reprovado!";
    }
    
}

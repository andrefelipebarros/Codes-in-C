#include <iostream>

using namespace std;

int main(){
    //decalarando variável
    int x;
    int y;
    char continua;
    // início do código e declarando repetição "do"
    do{
        // gerando lista de escolhas
        cout << "Bem vindo ao Mac Donalds!\n";
        cout << "-------------------------\n\n";
        cout << "Escolha o seu lanche pelo número:\n";
        cout << "1 - Big Mac\n";
        cout << "2 - Mc Chicken\n";
        cout << "3 - Quarteirão\n";
        cout << "4 - Mc Fish\n";
        cout << "5 - Cheddar McMelt\n";
        cout << "Sua opção: ";
        //linkando as escolhas a lista inteira de case denominada x
        cin >> x;
       
       //declarando a lista por switch x
        switch(x){
            case 1:
                cout << "\nVocê escolheu Big Mac";
                break;
            case 2:
                cout << "\nVocê escolheu Mc Chicken";
                break;
            case 3:
                cout << "\nVocê escolheu Quarteirão";
                break;
            case 4:
                cout << "\nVocê escolheu Mc Fish";
                break;
            case 5:
                cout << "\nVocê escolheu Cheddar McMelt";
                break;
        // para quem escolher uma case que n existe aparecerá normalmente essa mensagem:
            default :
                cout << "\nVocê escolheu uma opção inválida";
                break;
                
        }
        
        //mesma coisa de cima mas com a lista "y" lista de bebida
        cout << "Bem vindo ao Mac Donalds!\n";
        cout << "-------------------------\n\n";
        cout << "Escolha sua bebida pelo número:\n";
        cout << "1 - CocaCola\n";
        cout << "2 - GuaranáAntartica\n";
        cout << "3 - Pepsi\n";
        cout << "4 - CocaColaZero\n";
        cout << "5 - Água\n";
        cout << "Sua opção: ";
        cin >> y; //linkando a lista
        
        switch(y){
            case 1:
            cout << "Você escolheu CocaCola\n";
            break;
            case 2:
            cout << "Você escolheu GuaranáAntartica\n";
            break;
            case 3:
            cout << "Você escolheu Pepsi\n";
            break;
            case 4:
            cout << "Você escolheu CocaColaZero\n";
            break;
            case 5:
            cout << "Você escolheu Água\n";
            break;
            // para quem escolher uma case que n existe aparecerá normalmente essa mensagem:
            default :
                cout << "\nVocê escolheu uma opção inválida";
                break;
        }
        //declarando a variável para a repetição
        cout << "\nDeseja continuar escolhendo? (S/N) ";
        cin >> continua;
    }
         while (continua != ('N','n'));
}
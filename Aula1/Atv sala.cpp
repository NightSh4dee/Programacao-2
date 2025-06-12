#include <iostream> // necessário para acessar o objeto cout e cin

int main()
{
    int n1{0}

    std::cout << "Entre com um inteiro de 5 digitos: ";
    std::cin >> n1;

    //extrai os digitos usando o resto da divisao inteira
    int d1 = n1 % 10;
    n1 = n1 / 10;

    int d2 = n1 % 10;
    n1 = n1 / 10;

    int d3 = n1 % 10;
    n1 = n1 / 10;

    int d4 = n1 % 10;
    n1 = n1 / 10;

    int d5 = n1 

    std::cout << d5 <<"   "<< d4 <<"   "<< d3 <<"   "<< d2 <<"   "<< d1;
    
}
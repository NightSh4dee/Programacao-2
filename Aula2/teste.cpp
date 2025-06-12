#include <iostream> // para I/O
#include <format>

int main()
{
    std::string nome{"Joao"};
    int idade{};
    char sexo{'M'};
    std::cout << std::format("Nome: {}, Sexo: {} \n", nome, sexo);

    return 0;
}

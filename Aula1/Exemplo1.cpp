#include <iostream> // necessário para acessar o objeto cout e cin

int main()
{
    int numero1{0};
    float numero2{0.0f};
    double numero3{0.0};
    char letra{' '};
    bool flag{false};

    std::cout << "Entre com um int, um float, um double, um char, um boleando: \n";
    std::cin >> numero1 >> numero2 >> numero3 >> letra >> flag;
    std::cout << numero1 <<" "<< numero2 <<" "<< numero3 <<" "<< letra <<" "<< std::boolalpha << flag;

    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string input;
    
    std::cout << "Digite sua mensagem: ";
    std::getline(std::cin, input);
    
    std::cout << "Você digitou: " << input << std::endl;
    
    return 0;
}

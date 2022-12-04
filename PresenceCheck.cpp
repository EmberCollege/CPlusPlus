#include <iostream>
#include <string>

int main(){
    bool len = false;
    std::string password;
    std::cout << "Enter a password";
    std::cin >> password;

    if (password.size() == 0) {
        std::cout << "Enter a Password!";
    } else if (password.size() > 0) {
        std::cout << "Verified";
        len = true;
    }
}
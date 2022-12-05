#include <iostream>
#include <string>

int main(){
    std::string password;
    std::cout << "Enter a password ";
    std::cin >> password;
    int passLen = password.size();

    if(passLen <= 8){
        std::cout << "Too Short! Please use a password with eight characters or more!";
    }else if (passLen >= 9){
        std::cout << "\nThis is a good length for a password!";
    }
    
    return 0;
}
#include <iostream>
#include <string>

// Initialises main
int main(){
    std::string password; // Creates string variable password
    std::cout << "Enter a password - ";
    std::cin >> password;
    int passLen = password.size(); // Gets the size of the password and stores it in passLen

    if(passLen <= 8){
        std::cout << "Too Short! Please use a password with eight characters or more!";
    }else if (passLen >= 9){
        std::cout << "\nThis is a good length for a password!";
    }
    
    return 0; // Ends the loop
}
//#include <string>
//#include <iostream>
//#include <regex>
//
//int main()
//{
//    std::string password;
//    std::cout << "Enter password: ";
//    std::getline(std::cin, password);
//
//    bool is_valid = true;
//    std::string message;
//
//    
//    if (password.length() < 8) {
//        is_valid = false;
//        message = "Password must be at least 8 characters long.";
//    }
//
//    
//    if (!std::regex_search(password, std::regex("[A-Z]"))) {
//        is_valid = false;
//        message = "Password must contain at least one uppercase letter.";
//    }
//
//    
//    if (!std::regex_search(password, std::regex("[a-z]"))) {
//        is_valid = false;
//        message = "Password must contain at least one lowercase letter.";
//    }
//
//    
//    if (!std::regex_search(password, std::regex("[0-9]"))) {
//        is_valid = false;
//        message = "Password must contain at least one digit.";
//    }
//
//    
//    if (!std::regex_search(password, std::regex("[^a-zA-Z0-9]"))) {
//        is_valid = false;
//        message = "Password must contain at least one special character.";
//    }
//
//    
//    if (is_valid) {
//        std::cout << "Password is valid.\n";
//    }
//    else {
//        std::cout << "Password is not valid: " << message << "\n";
//    }
//
//    return 0;
//}



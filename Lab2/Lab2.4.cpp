#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
    std::string userName;
    std::string password;
    bool login = false;

    std:: cout << "Please enter user name: ";
    std::cin >> userName;
    std::cout << "Please enter password: ";
    std::cin >> password;

    while (login == false)
    {
        if (userName.compare("21_cse_c++_faLL")==0 && password.compare("278A&B")==0)
        {
                std::cout << "Login success" <<std::endl;
                login = true;
            }
        else
        {
                std::cout << "Login Failed" <<std::endl;
                break;
        }
    }
}

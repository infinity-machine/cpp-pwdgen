#include <iostream>
#include "../headers/Password.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int pwdlen = atoi(argv[1]);
        Password pwd(pwdlen);
        pwd.print();
        return 0;
    }

    if (argc == 6)
    {
        int pwdlen = atoi(argv[1]);
        int lowercase = atoi(argv[2]);
        int uppercase = atoi(argv[3]);
        int digits = atoi(argv[4]);
        int specials = atoi(argv[5]);
        Password pwd(pwdlen, lowercase, uppercase, digits, specials);
        pwd.print();
        return 0;
    }

    else
    {
        Password pwd;
        pwd.print();
        return 0;
    }
}

#include "Password.h"
#include "utils.cpp"
#include <iostream>

using namespace std;

Password::Password()
{
    length = 20;
    lowercase = true;
    uppercase = true;
    digits = true;
    specials = true;

    setCharArray();
    generatePassword();
}

Password::Password(int len)
{
    length = len;
    lowercase = true;
    uppercase = true;
    digits = true;
    specials = true;

    setCharArray();
    generatePassword();
}

Password::Password(int len, bool lowerc, bool upperc, bool dig, bool spec)
{
    length = len;
    lowercase = lowerc;
    uppercase = upperc;
    digits = dig;
    specials = spec;

    setCharArray();
    generatePassword();
}

void Password::setCharArray()
{
    if (lowercase)
    {
        for (int i = 97; i < 123; i++)
        {
            char lc_char = static_cast<char>(i);
            charArray.push_back(lc_char);
        }
    }

    if (uppercase)
    {
        for (int i = 65; i < 91; i++)
        {
            char uc_char = static_cast<char>(i);
            charArray.push_back(uc_char);
        }
    }

    if (digits)
    {
        for (int i = 48; i < 58; i++)
        {
            char dig_char = static_cast<char>(i);
            charArray.push_back(dig_char);
        }
    }

    if (specials)
    {
        for (int i = 33; i < 127; i++)
        {
            if (i < 48 || (i >= 58 && i < 65) || (i > 122))
            {
                char spec_char = static_cast<char>(i);
                charArray.push_back(spec_char);
            }
        }
    }
}

void Password::generatePassword()
{
    for (int i = 0; i < length; i++) {
        password.push_back(charArray[randomInt(0, charArray.size())]);
    }
}

void Password::print()
{
    cout << password << endl;
}

#include <string>
#include <vector>

using namespace std;

class Password
{
private:
    string password;
    vector<char> charArray;
    int length;

    bool lowercase;
    bool uppercase;
    bool digits;
    bool specials;

public:
    Password();
    Password(int length);
    Password(int length , bool lowercase, bool uppercase, bool digits, bool special);

    void setCharArray();
    void generatePassword();
    void print();
};
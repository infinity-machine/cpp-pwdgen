#include <random>
#include <vector>

using namespace std;

int randomInt(int min, int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int random_integer = distrib(gen);
    return random_integer;
}

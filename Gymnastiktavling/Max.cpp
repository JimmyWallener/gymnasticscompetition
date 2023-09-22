#include <algorithm>
#include <string>

using namespace std;
string maxScore(int a, int b, int c)
{
    // return max of a, b, c
    int max = std::max(a, std::max(b, c));
    string winner;

    // check if equal
    if (a == b && b == c)
    {
        winner = "T\x84vlande 1, T\x84vlande 2, T\x84vlande 3";
    }
    else if (a == b)
    {
        winner = "T\x84vlande 1, T\x84vlande 2";
    }
    else if (a == c)
    {
        winner = "T\x84vlande 1, T\x84vlande 3";
    }
    else if (b == c)
    {
        winner = "T\x84vlande 2, T\x84vlande 3";
    }
    else
    {
        if (max == a)
        {
            winner = "T\x84vlande 1";
        }
        else if (max == b)
        {
            winner = "T\x84vlande 2";
        }
        else if (max == c)
        {
            winner = "T\x84vlande 3";
        }
    }


    return winner;

}

#include <iostream>
#include <random>
#include "Max.cpp"
#include <cstdlib>

using namespace std;


// should return a random number between 1 and 100
int random_number()
{
    return 1 + rand() % 100;
}

// should return the sum of the three numbers in the array
int total_sum(const int sum[])
{
    int total{ 0 };
    for (int i = 0; i < 3; i++)
    {
        total += sum[i];
    }
    return total;
}

int main() {
    
    // seed the random number generator with the current time in seconds
    srand(static_cast<unsigned int>(time(nullptr)));

    // create three arrays with three random numbers
    int competitor_one[3] { random_number(), random_number(), random_number() };
    int competitor_two[3] { random_number(), random_number(), random_number() };
    int competitor_three[3] { random_number(), random_number(), random_number() };
    

    int competitor_one_total = total_sum(competitor_one);
    int competitor_two_total = total_sum(competitor_two);
    int competitor_three_total = total_sum(competitor_three);

    // call the max_score function with the three total scores and get the winner
    string winner = max_score(competitor_one_total, competitor_two_total, competitor_three_total);

    cout << "\tDe t\x84vlandes totalpo\x84ng:\n" << endl;
    cout << "\tT\x84vlande 1:\t " << competitor_one_total << endl;
    cout << "\tT\x84vlande 2:\t " << competitor_two_total << endl;
    cout << "\tT\x84vlande 3:\t " << competitor_three_total << "\n" << endl;
    cout << "\t" << winner << " har vunnit t\x84vlingen." << endl;

    // Remove the comment below to run the testcases function
    //testcases();

    return 0;

}

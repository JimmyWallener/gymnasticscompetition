#include <iostream>
#include <random>
#include "Random.cpp"
#include "Max.cpp"
#include "Sum.cpp"

using namespace std;



int main() {

    srand(static_cast<unsigned int>(time(nullptr)));
    int competitorOne[3] { randomNumber(), randomNumber(), randomNumber() };
    int competitorTwo[3] { randomNumber(), randomNumber(), randomNumber() };
    int competitorThree[3] { randomNumber(), randomNumber(), randomNumber() };
    

    int competitorOneTotal = totalSum(competitorOne);
    int competitorTwoTotal = totalSum(competitorTwo);
    int competitorThreeTotal = totalSum(competitorThree);

    string winner = maxScore(competitorOneTotal, competitorTwoTotal, competitorThreeTotal);
    cout << "\tDe t\x84vlandes totalpo\x84ng:\n" << endl;
    cout << "\tT\x84vlande 1:\t " << competitorOneTotal << endl;
    cout << "\tT\x84vlande 2:\t " << competitorTwoTotal << endl;
    cout << "\tT\x84vlande 3:\t " << competitorThreeTotal << "\n" << endl;
    cout << "\t" << winner << " har vunnit t\x84vlingen." << endl;

    return 0;

}

#include <algorithm>
#include <string>

using namespace std;

// should return the name of the competitor with the highest score
string max_score(int player_one_score, int player_two_score, int player_three_score)
{
    // get the max score with library function max from algorithm
    int max = std::max(player_one_score, std::max(player_two_score, player_three_score));
    string winner;

    // check if there is a tie between two or three competitors
    if (player_one_score == player_two_score && player_two_score == player_three_score)
    {
        winner = "T\x84vlande 1, T\x84vlande 2, T\x84vlande 3";
    }
    else if (player_one_score == player_two_score)
    {
        winner = "T\x84vlande 1, T\x84vlande 2";
    }
    else if (player_one_score == player_three_score)
    {
        winner = "T\x84vlande 1, T\x84vlande 3";
    }
    else if (player_two_score == player_three_score)
    {
        winner = "T\x84vlande 2, T\x84vlande 3";
    }
    else
    {
        // check which competitor has the max score
        if (max == player_one_score)
        {
            winner = "T\x84vlande 1";
        }
        else if (max == player_two_score)
        {
            winner = "T\x84vlande 2";
        }
        else if (max == player_three_score)
        {
            winner = "T\x84vlande 3";
        }
    }


    return winner;

}

// write a testcases function that tests the max_score function

void testcases()
{

    cout << "\nTestar max_score\n" << endl;

	// test if player 3 wins
	int player_one_score = 10;
	int player_two_score = 20;
	int player_three_score = 30;
	string expected = "T\x84vlande 3";
	string actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
		cout << "Test 1 lyckades" << " expected: " << expected << " actual: " << actual << endl;
	}
    else
    {
		cout << "Test 1 misslyckades" << " expected: " << expected << " actual: " << actual << endl;
	}

    // test if player 1 wins
    player_one_score = 20;
    player_two_score = 10;
    player_three_score = 5;
    expected = "T\x84vlande 1";
    actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
        cout << "Test 2 lyckades" << " expected: " << expected << " actual: " << actual << endl;
    }
    else
    {
		cout << "Test 2 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

    // test if player 2 wins
    player_one_score = 5;
    player_two_score = 20;
    player_three_score = 10;
    expected = "T\x84vlande 2";
    actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
		cout << "Test 3 lyckades" << " expected: " << expected << " actual: " << actual << endl;
	}
    else
    {
        cout << "Test 3 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
    }

	// test if there is a tie between player 1 and 2
	player_one_score = 10;
	player_two_score = 10;
	player_three_score = 30;
	expected = "T\x84vlande 1, T\x84vlande 2";
	actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
		cout << "Test 4 lyckades" << " expected: " << expected << " actual: " << actual << endl;
	}
    else
    {
        cout << "Test 4 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

	// test if there is a tie between player 2 and 3
	player_one_score = 10;
	player_two_score = 20;
	player_three_score = 20;
	expected = "T\x84vlande 2, T\x84vlande 3";
	actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
		cout << "Test 5 lyckades" << " expected: " << expected << " actual: " << actual << endl;
	}
    else
    {
        cout << "Test 5 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

	// test if there is a tie between player 1, 2 and 3
	player_one_score = 10;
	player_two_score = 10;
	player_three_score = 10;
	expected = "T\x84vlande 1, T\x84vlande 2, T\x84vlande 3";
	actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
		cout << "Test 5 lyckades" << " expected: " << expected << " actual: " << actual << endl;
	}
    else
    {
        cout << "Test 5 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

    // test if there is a tie between player 1 and 3
    player_one_score = 10;
    player_two_score = 20;
    player_three_score = 10;
    expected = "T\x84vlande 1, T\x84vlande 3";
    actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
        cout << "Test 6 lyckades" << " expected: " << expected << " actual: " << actual << endl;
    }
    else
    {
        cout << "Test 6 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

    // test if there is a tie between player 2 and 3
    player_one_score = 20;
    player_two_score = 10;
    player_three_score = 10;
    expected = "T\x84vlande 2, T\x84vlande 3";
    actual = max_score(player_one_score, player_two_score, player_three_score);
    if (expected == actual)
    {
        cout << "Test 7 lyckades" << " expected: " << expected << " actual: " << actual << endl;
    }
    else
    {
		cout << "Test 7 misslyckades." << " expected: " << expected << " actual: " << actual << endl;
	}

}
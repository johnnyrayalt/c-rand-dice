#include <iostream>
#include <random>
#include <array>
#include <functional>
#include <algorithm>
#include <iterator>

struct player_score
{
    int score;
};

int main()
{
    player_score player_one;
    player_score player_two;
    std::random_device rng;
    std::mt19937 gen(rng());
    std::uniform_int_distribution<int> dist(1, 6);

    std::array<int, 2> scores;

    int n;
    for (n = 0; n < 2; n++)
    {
        int i = dist(gen);
        scores[n] = i;
    };

    player_one.score = scores[0];
    player_two.score = scores[1];

    std::cout << "player one rolled a " << player_one.score << std::endl;
    std::cout << "player two rolled a " << player_two.score << std::endl;

    if (player_one.score == player_two.score)
    {
        std::cout << "draw!" << std::endl;
    }
    else if (player_one.score > player_two.score)
    {
        std::cout << "player one wins!" << std::endl;
    }
    else
    {
        std::cout << "player two wins!" << std::endl;
    };

    std::cout
        << '\n'
        << std::endl;

    return 0;
}
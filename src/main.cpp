#include <iostream>
#include <random>
#include <array>
#include <functional>


int main()
{
    std::random_device rng;
    std::mt19937 gen(rng());
    std::uniform_int_distribution<int> dist(1,6);
    
    std::array<int, 2> arr;

    for (auto& val : arr)
    {
        val = dist(gen);
        std::cout << val << ' ';
    };
    
    std::cout << '\n' << std::endl;

    return 0;
}
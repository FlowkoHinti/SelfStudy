//Game of Life by FlowkoHinti

#include <iostream>
#include <vector>
#include <string>
#include<memory>

struct Cell
{
    bool alive{false};
};

class Game
{

    unsigned long ulMaxX{0ul};
    unsigned long ulMaxY{0ul};
    std::vector<std::vector<Cell>> game;

public:
    Game(unsigned long x, unsigned long y) : ulMaxX{x}, ulMaxY{y}
    {
        for(size_t i = 0; i < x; ++i)
        {
            game.emplace_back();
            for(size_t j = 0; j < y; ++j)
            {
                game[j].push_back(Cell{});
            }
        }
    }

    ~Game() = default;

    void display()
    {

    }

    void update()
    {

    }

    void setup(std::vector<std::vector<Cell>>& inputCells)
    {

    }
};


int main()
{
    Game newGame(200, 100);

    return 0;
}


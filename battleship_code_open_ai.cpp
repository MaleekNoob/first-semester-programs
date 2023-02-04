#include <iostream>
#include <array>
#include <random>
#include <chrono>

constexpr int numRows = 10;
constexpr int numCols = 10;

using Grid = std::array<std::array<char, numCols>, numRows>;

// Initialize the grid with water ('W')
Grid initializeGrid()
{
    Grid grid{};
    for (auto& row : grid)
        for (auto& col : row)
            col = 'W';

    return grid;
}

// Place a ship on the grid
void placeShip(Grid& grid, int shipSize)
{
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<> rowDist(0, numRows - 1);
    std::uniform_int_distribution<> colDist(0, numCols - 1);
    std::uniform_int_distribution<> orientationDist(0, 1);

    // Randomly select a starting position and orientation for the ship
    int row = rowDist(rng);
    int col = colDist(rng);
    bool isVertical = orientationDist(rng) == 1;

    // Ensure that the ship fits on the grid
    if ((isVertical && row + shipSize > numRows) ||
        (!isVertical && col + shipSize > numCols))
    {
        placeShip(grid, shipSize);
        return;
    }

    // Place the ship on the grid
    for (int i = 0; i < shipSize; ++i)
    {
        if (isVertical)
            grid[row + i][col] = 'S';
        else
            grid[row][col + i] = 'S';
    }
}

// Print the current state of the grid
void printGrid(const Grid& grid)
{
    std::cout << "  ";
    for (int i = 0; i < numCols; ++i)
        std::cout << i << " ";
    std::cout << std::endl;

    for (int i = 0; i < numRows; ++i)
    {
        std::cout << i << " ";
        for (auto cell : grid[i])
            std::cout << cell << " ";
        std::cout << std::endl;
    }
}

int main()
{
    Grid grid = initializeGrid();

    // Place a ship of size 3 on the grid
    placeShip(grid, 3);

    while (true)
    {
        std::cout << "Enter a row and column to attack: ";
        int row, col;
        std::cin >> row >> col;

        if (grid[row][col] == 'S')
        {
            std::cout << "You hit a ship!" << std::endl;
            grid[row][col] = 'X';
        }
        else
        {
            std::cout << "You missed!" << std::endl;
        }
    }
return 0;
}
           

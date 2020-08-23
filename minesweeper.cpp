#include <iostream>
#include <vector>
using namespace std;

void update(vector<string>& grid, int ro, int col)
{
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
        {
            if (ro + i < 0 || ro + i >= grid.size()) continue;
            if (col + j < 0 || col + j >= grid[0].size()) continue;
            if (grid[ro + i][col + j] == '*') continue;
            grid[ro + i][col + j] += 1;
        }
}

int main(void)
{
    int r, c; cin >> r >> c;
    vector<string> grid(r);

    for (int i = 0; i < r; i++) cin >> grid[i];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (grid[i][j] == '*') update(grid, i, j);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char ch = grid[i][j];
            if (ch == '*') cout << ch;
            else cout << (int) (ch - '.');
        }
        cout << "\n";
    }
}
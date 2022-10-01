#include "/Users/nishant/bits/stdc++.h"
using namespace std;

const int rows = 5;
const int cols = 6;

int cost(int i, int j)
{ // i is the row, j is the column
  int weight[rows][cols] = {
      {3, 4, 1, 2, 8, 6},  // cost(0,5)
      {6, 1, 8, 2, 7, 4},  // cost(1,5)
      {5, 9, 3, 9, 9, 5},  // cost(2,5)
      {8, 4, 1, 3, 2, 6},  // cost(3,5)
      {3, 7, 2, 8, 6, 4}}; // cost(4,5)

  static int memo[rows][cols] = {0}; // memo array

  // base case
  if (j == 0)
  {
    return weight[i][0];
  }

  if (memo[i][j] != 0)
  {
    return memo[i][j]; // return if value exixts in memo array
  }

  // recursive call
  int left = weight[i][j] + cost(i, j-1);
  int up = weight[i][j] + cost((i + 4) % 5, j - 1);
  int down = weight[i][j] + cost((i + 1) % 5, j - 1);
  // find the value of the shortest path through cell (i,j)
  int min = left;
  if (left <= up && left <= down)
    min = left;
  else if (up <= left && up <= down)
    min = up;
  else
    min = down;
  return min; // value of shortest path from choosing the cost
}

int main()
{
  int ex[rows];
  // get the shortest path out of each cell on the right
  for (int i = 0; i < rows; i++)
  {
    ex[i] = cost(i, cols - 1); // cols-1 moves column to the right
  }
  // now find the smallest of them
  int min = ex[0];
  for (int i = 0; i < rows; i++)
  {
    if (ex[i] < min)
    {
      min = ex[i];
    }
  }
  cout << "The sortest path is of length is " << min << endl;
  return EXIT_SUCCESS;
}

/*
  int weight[rows][cols] = {
      {3, 4, 1, 2, 8, 6},  // cost(0,5)
      {6, 1, 8, 2, 7, 4},  // cost(1,5)
      {5, 9, 3, 9, 9, 5},  // cost(2,5)
      {8, 4, 1, 3, 2, 6},  // cost(3,5)
      {3, 7, 2, 8, 6, 4}}; // cost(4,5)
*/
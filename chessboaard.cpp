#include <bits/stdc++.h>
using namespace std;

int main(){

  int i, j, k, l;
  typedef string box[5][7];

  // black box, white box, Board pointer(type=box)
  box bb, wb, *board[8][8];

  // filling up White and Black Box Array
  for (i = 0; i < 5; i++)
    for (j = 0; j < 7; j++){
      wb[i][j] = " ";
      bb[i][j] = "█";
    }

  for (i = 0; i < 8; i++)
    for (j = 0; j < 8; j++)
      if ((i + j) % 2 == 0)  // if even (sum)
        board[i][j] = &wb;   // assign white box
      else                   // if odd (sum)
        board[i][j] = &bb;   // assign black box

  // upper border
  cout << "  ";
  for (i = 0; i < 7 * 8; i++)
    cout << '_';
  cout << endl;

  // Each Row in Board printing
  for (i = 0; i < 8; i++)
    // left Border
    for (k = 0; k < 5; k++){ // down
      cout << " " << "|";

      // (White Or Black) Boxes
      for (j = 0; j < 8; j++) // right col
        for (l = 0; l < 7; l++) // print sub white & black col
          cout << (*board[i][j])[k][l];

      // right Border
      cout << "|" << endl;
    }

  // Bottom Border
  cout << "  ";
  for (i = 0; i < 7 * 8; i++)
    cout << "-";
  cout << endl;

  return 0;
}
#include "/Users/nishant/bits/stdc++.h"
/*
*   Title: Fancy 8 Queens
*	Description : The goal of this project is to print a chess board graphic of the solutions to 8
				  queens problem. This project will be utilize typedef.
	Author: I used the guideline gave by Alex Chan on his website.
	        Sulbha Aggarwal- Wrote the code for placing queens at appropriate spot
*/
using namespace std;

bool ok(int q[], int c) 
{
   for (int i = 0; i < c; ++i)
      if( ( q[i] == q[c] ) || ( abs(q[i] - q[c]) == c-i )  )  
         return false;
   return true;
}

int print( int q[] ) 
{
   static int solution = 0;
   int i, j, k, l;
   typedef string box[5][7];   	// box is now a data type: a 5x7 2D array of characters
   box bb, wb, *board[8][8]; 	// bb and wb are boxes (5x7 arrays).  board is an 8x8 array of pointers to boxes.
                             	// You don't have to clean up the board after printing, because it's not static,
                             	// so it'll be reinitialized the next time you call the function.

   // Fill in bb (black box) and wb (white box).  They each represent a square of the chessboard.
   // You only need to create one of each, since the chessboard can contain many pointers to the same box.
   for (i=0; i<5; i++)
      for (j=0; j<7; j++) 
	  {
         bb[i][j] = "█" ;
         wb[i][j] = " " ; // DONOT MISUNDERSTAND THIS, THIS IS NOT THE POWER OF YOUR CREATION.
      }
   
   // Create 2 more boxes to represent the queens, by drawing a picture of each queen in the 2D array.
   static box bq = { 
   					   {"█"     ,"█"      ,"█"      ,"█"      ,"█"      ,"█"      ,"█"},
                     {"█"     ," "      ,"█"      ," "      ,"█"      ," "      ,"█"},
                     {"█"     ," "      ," "      ," "      ," "      ," "      ,"█"},
                     {"█"     ," "      ," "      ," "      ," "      ," "      ,"█"},
                     {"█"     ,"█"      ,"█"      ,"█"      ,"█"      ,"█"      ,"█"} 
				   };
               
   static box wq = { 
   					   {" "      ," "      ," "      ," "      ," "      ," "      ," "      },
                     {" "      ,"█"      ," "      ,"█"      ," "      ,"█"      ," "      },
                     {" "      ,"█"      ,"█"      ,"█"      ,"█"      ,"█"      ," "      },
                     {" "      ,"█"      ,"█"      ,"█"      ,"█"      ,"█"      ," "      },
                     {" "      ," "      ," "      ," "      ," "      ," "      ," "      } 
				   };

   // Fill board with pointers to bb and wb in alternate positions.
   for(i=0; i<8; i++)
      for(j=0; j<8; j++)
         if((i+j)%2 == 0)
            board[i][j] = &wb;
         else
            board[i][j] = &bb;
   
   // Set up the current solution on the chessboard by placing pointers to bq and wq in the appropriate squares.
   // Place black queens on white squares and white queens on black squares, so that you will be able to see them when printing.
   for( int i = 0  ; i < 8 ; i++ )
   {
   		if( ( q[i]+i ) % 2 == 0 )
   			board[q[i]][i] = &wq ;
   		else
   			board[q[i]][i] = &bq ;
   }
   

   cout << "Solution #" << ++solution << ":\n ";
   
   for (i=0; i<7*8; i++)							// Print upper border
      cout << '_';
   cout << "\n";

   // Print the board
   for (i=0; i<8; i++)          					// for each board row
	  for (k=0; k<5; k++) 							// for each box row
	  {    
         cout << "|";
         for (j=0; j<8; j++)    					// for each board column   11
			for (l=0; l<7; l++) 					// for each box column
               	cout << (*board[i][j])[k][l];		// board[i][j] is the box pointer in the ith row, jth column of the board.
               										// *board[i][j] is the box being pointed to.
               										// (*board[i][j])[k][l] is the kth row, lth column of the box.
             	 
         cout << "|" << "\n";
      }
     
   cout << " ";										// Print lower border
   for (i=0; i<7*8; i++)
      cout << "-";
   cout << "\n\n";

   return 0;
}

void next(int q[], int c) 
{
   if (c == 8)
      print(q);
   else 
   	for (q[c] = 0; q[c] < 8; ++q[c])
      if (ok(q, c))
         next(q, c+1);
}

int main() {
   int q[8];

   next(q, 0);

   return 0;
}
/*Author : Sheldon Cook
//Lab assignment 2
  the Program from Crabs rolls a Die Randomly  between 1 to 6
*/
#include <iostream>
#include <cstdlib>
#include <ctime>




int main( ) {

  char ans;
  bool done = false;
  while ( ! done ) {
         playGame();   // YOU MUST WRITE THIS FUNCTION
         cout << " Play again (y/n) ? ";
         cin >> ans;
         if ( ans == 'y' || ans == 'Y') done = true;
             else done = false;



  }
  return 0;

int playgame {


}

}








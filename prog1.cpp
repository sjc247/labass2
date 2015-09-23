/*Author : Sheldon Cook
//Lab assignment 2
  the Program from Craps rolls a Die Randomly  between 1 to 6
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int playGame(){
srand(time(NULL));
int Die1 =(rand()%6)+1;
int Die2 =(rand()%6)+1;
int Roll = Die1+Die2;
int Point = 0;
bool PointGet = false;
cout<<"Player Rolled "<<Die1<<" + "<<Die2<<" = "<<Roll<<endl;
switch(Roll){                                            //checks first roll if its a win or Lose
case 2: cout<<"You Lose!"<<endl; PointGet = true; break;      
case 3: cout<<"You Lose!"<<endl; PointGet = true; break;
case 7: cout<<"You Win!!"<<endl; PointGet = true; break;
case 11:cout<<"You Win!!"<<endl; PointGet = true; break;
case 12:cout<<"You Lose!"<<endl; PointGet = true; break;
default: cout<<" point is "<<Roll<<endl; 
Point=Roll; break;
}
cout<<endl;
while (!PointGet){
Die1 = (rand()%6)+1;
Die2 = (rand()%6)+1;
Roll = Die1+Die2;
cout<<"Player Rolled "<<Die1<<" + "<<Die2<<" = "<<Roll<<endl;
if (Roll==7) {
cout<<"You lose!"<<endl;
PointGet = true;
}
if (Roll==Point){
cout<<"You Win!!"<<endl;
PointGet = true;
}
if (PointGet==true){
cout<<"Press Enter to Continue..."<<endl;
cin.get();
} else {
cout<<"Press Enter to Roll Dice..."<<endl;
cin.get();
}
}
return 0;
}
int main() {
char ans;
bool done = false;
while ( ! done ) {
 playGame();
cout << " Play again (y/n) ? ";
cin >> ans;
if ( ans == 'y' || ans == 'Y') done = false;
else done = true;
}
return 0;
}
<<<<<<< HEAD

=======
>>>>>>> 27eca0874d3b7d2883e8629c3e0a194aa4444998

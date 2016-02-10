#include <iostream>
#include <string>
using namespace std;

class Room {
public:
   string description;
   bool canGoNorth;
   bool canGoSouth;
   bool canGoEast;
   bool canGoWest;
   bool consume;
   string consumeText;
};

int main() {

   // global variables;
   // a string to store player input
   string input;
   // two variables to store player position
   int x = 0;
   int y = 0;
   // a 2D array to store our map
   Room map[3][3];
   // game loop will be a 'while' loop
   // check for the exit condition
   // while (!exitCondition) <-- string for play input

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         map[j][i].description = "The void of the universe curls up and threatens to swallow you whole.";
         map[j][i].canGoNorth = false;
         map[j][i].canGoEast = false;
         map[j][i].canGoWest = false;
         map[j][i].canGoSouth = false;
         map[j][i].consume = false;
      }
   }
   map[0][0].canGoEast = true;
   map[1][0].description = "The box at beginning of the world contains two different types of purple cotton candy, and invites you to approach.";
   map[1][0].consume = true;
   map[1][0].consumeText = "The cotton candy sticks to your molars and you turn into a beast.";

   map[1][0].canGoEast = true;
   map[1][0].canGoSouth = true;

   map[2][0].description = "It is believed that only the truly ignorant can perceive the pathway into the enlightened terminal. For all those otherwise initiated, best turn around.";
   map[2][0].canGoWest = true;

   map[1][1].canGoNorth = true;
   map[1][1].canGoSouth = true;
   map[1][1].canGoEast = true;

   map[1][2].canGoNorth = true;
   map[1][2].canGoEast = true;

   map[2][1].description = "You pretend to ignore it, but there is an insistent buzzing underneath the second rubber bucket on the left hand side of the hallway.";
   map[2][1].canGoWest = true;

   map[2][2].description = "Sitting on top of a napkin, there is a poisonous jelly doughnut that is half-eaten.";
   map[2][2].canGoWest = true;

   while (input != "q") {
      cout << "you are at " << x << ", " << y << endl;
      cout << map[x][y].description << endl;
      cout << "Where do you want to go?" << endl;
      cin >> input;
      // map[x][y] = '_';

      // based on what input? NORTH WEST EAST SOUTH
      if (input == "NORTH") {
         if (map[x][y].canGoNorth) {
            y--;
         } else {
            cout << "Arrogance is the origin of despair." << "\n";
         }
      } else if (input == "SOUTH") {
         if (map[x][y].canGoSouth) {
            y++;
         } else {
            cout << "Arrogance is the origin of despair." << "\n";
         }
      } else if (input == "EAST") {
         if (map[x][y].canGoEast) {
            x++;
         } else {
            cout << "Arrogance is the origin of despair." << "\n";
         }
      } else if (input == "WEST") {
         if (map[x][y].canGoWest) {
            x--;
         } else {
            cout << "Arrogance is the origin of despair." << "\n";
         }
      } else if (input == "CONSUME") {
         if (map[x][y].consume) {
            cout << map[x][y].consumeText;
         } else {
            cout << "Gluttony is an infant's  disease.";
         }
      } else {
         cout << "Arrogance is the origin of despair." << "\n";
      }
      // map[x][y] = 'p';

      // for (int i = 0; i < 10; i++) {
      //    for (int j = 0; j < 10; j++) {
      //       cout << map[j][i] << " ";
      //    }
      //    cout << endl;
      // }

   }
   return 0;

   // for (int i = 0; i > height; i++) {
   //    for (int j = 0; j > width; j++) {
   //       grid[j][i] = '0';
   //    }
   // }
}

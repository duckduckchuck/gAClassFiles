#include <iostream>
using namespace std;

int main(){

   const int COLS = 8;
   const int ROWS = 4;
   char grid[ROWS][COLS];
   for(int i = 0; i < ROWS; i++) {

      for(int j = 0; j < COLS; j++) {
         if ((j + i) % 2 == 0) {
            grid[i][j] = '0';
         } else {
            grid[i][j] = '1';
         }


      // if (i % 2 == 0) {
      //    for(int j = 0; j < COLS; j++) {
      //       if (j % 2 == 0) {
      //          cout<< 'x';
      //       } else {
      //          cout<< 'o';
      //       }
      //       // grid[j][i] = '-';
      //    }
      // cout<<'\n';
      // } else {
      //    for(int j = 0; j < COLS; j++) {
      //       if (j % 2 == 0) {
      //          cout<< 'o';
      //       } else {
      //          cout<< 'x';
      //       }
      //       // grid[j][i] = '-';
      //    }
      // cout<<'\n';
          cout << grid[i][j];
      }

         cout << endl;
   }

}

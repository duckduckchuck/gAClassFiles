#include<iostream>
using namespace std;
int main(){
   char input;
   cout <<"\"Hollow Triangle Shape\"\n\n";
   while (input != 'q') {
      cout << "do you want a triangle? (y/n)";
      cin >> input;
      if (input == 'y'){
         int size = 0;
         cout << "how tall do you want the triangle?";
         cin >> size;
         while (size > 0){
            int z=1;
            for (int i=0; i < size; i++){
               for (int j= size; j > i; j--){
                  cout<<" "; // displaying space here
               }
               cout<<"*";   // displaying asterisk here
               if (i!=0){
                  for (int k=1; k<=z; k++){
                    cout<<"*";

                  // cout<<"*";
                  z+=2;
                  }
               cout<<endl;  // endl is for new line
               }
            }
         }
         cin >> size;
       } else if (input == 'n') {
               return 0;
            } else {
            cout <<"Answer the question(?)";
      }

      return 0;
   }
}
// int z=1;

// for (int i=0; i<7; i++)
// {
//    for (int j=7; j>i; j--)
//    {
//       cout<<" "; // displaying space here
//    }
//    cout<<"*";   // displaying asterisk here

//    if (i!=0) {
//       for (int k=1; k<=z; k++)
//       {
//         cout<<"*";
//       }
//       // cout<<"*";
//       z+=2;
//     }
//     cout<<endl;  // endl is for new line
//   }

//   // for (int i=0; i<=z+1; i++)
//   // {
//   //   cout<<"*";
//   // }
//   // cout<<endl;

// return 0;
// }

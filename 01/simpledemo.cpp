#include<iostream>
using namespace std;
int main()
{
   int input = 7;
   while (input != 0) {
      cout<<"\"Triangle Shape\"\n\n";
      int z=1;
            for (int i=0; i<input; i++){
         for (int j=input; j>i; j--){
            cout<<" "; // displaying space here
         }
         cout<<"*";   // displaying asterisk here

         if (i!=0){
            for (int k=1; k<=z; k++){
               cout<<" ";
            }
            cout<<"*";
            z+=2;
         }
         cout<<endl;  // endl is for new line
      }

      for (int i=0; i<=z+1; i++){
         cout<<"*";
      }
      cout<<endl;
      cin>>input;
   }
return 0;
}

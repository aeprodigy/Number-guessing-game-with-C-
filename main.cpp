#include <iostream>
#include <cstdlib>
#include <time.h>

//Header files above this line.
using namespace std;

int main()
{
   //This is the array of five numbers
   int arr[5] = {1,2,3,4,5};
   // Initialize the srand seed.
    srand (time(NULL));

   //variables below this line.
   int Random;
   int option;
   int exit;


   //the loop below this line.
   for(int i = 0; i < 5; i++)
   {
       Random = arr[rand() % arr[i]];
   }
   //cout<< Random;

    do{
   cout<<"Enter a number between 1 - 5"<<endl;
   cin>>option;
   //The if statement to guess the numbers
   if(Random == option ){
    cout<<"Youre correct"<<endl;

   }else{
    cout<< "please Try again"<<endl;
   }


    cout<<"press 1 to continue to try again and any other number to exit"<<endl;
    cin>>exit;
   }while(exit == 1);

    return 0;
}

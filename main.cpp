#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
   int arr[5] = {1,2,3,4,5};
      // Initialize the srand seed.
    srand (time(NULL));

   int Random;
   int option;
   int exit;


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

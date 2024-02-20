// Program to implement a number guessing game


#include<iostream>
#include<cstdlib> // For random functions
#include<time.h>
using namespace std;

int main()
{
  srand(time(0));
  char response;
  do
  {
    int number = rand()%1000; // Generates number upto 1000
    cout<<"Random number generated!"<<endl;
    bool flag = true;
    do
    {
      cout<<"Guess the number: ";
      int guess;
      cin>>guess;
      if(guess == number)
      {
        cout<<"\nCongratulations!\nYou guessed it correct."<<endl;
        flag = false;
      }
      else if(guess > number)
        cout<<"Guessed number is higher"<<endl;
      else
        cout<<"Guessed number is lower"<<endl;
    }while(flag);
    cout<<"\nWant to play again(y/n): ";
    cin>>response;
  }while(response == 'y' || response == 'Y');
  return 0;
}
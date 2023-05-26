#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

srand(time(nullptr));

bool guessedNumber = false;
int ourGuess;
int guessCount = 0;
int computerNumber = rand() % 100 + 1;


while (!guessedNumber)
{
    cout<<"Enter your guess"<<endl;
    cin>>ourGuess;
    guessCount++;

if (ourGuess > 100 || ourGuess < 1)
{
  cout<<"That was a wasted guess. Pick a number between 1 and 100"<<endl;
  continue;
}

if (ourGuess == computerNumber)
{
  cout<<"Congratulations! You guessed the number in "<<guessCount<<"! Thanks for playing"<<endl;
  guessedNumber = true;
}
else if (ourGuess < computerNumber)
{
  cout<<"Your guess is too low"<<endl;
}
else
{
  cout<<"Your guess is too high"<<endl;
}
}

return 0 ;
}
//Random Number Guessing from user
#include <iostream.h>
#include <stdlib.h>
#include<conio.h>

int main() {

     int number = rand() % 50 + 1;
    int guess = 0;
clrscr();

    cout<< "I have selected a random number between 1 and 50." <<endl;

        while (guess != number) 
       {
        cout << "Enter your guess: ";
        cin >> guess;
     if (guess > number) 
   {
      cout << "Number is lesser than your guess. Try again." << endl;
        } 
  else if (guess < number) 
      {
            cout << "Number is greater than your guess. Try again." << endl;
        } else {
            cout << "Congratulations! Your guess is  correct " << endl;
        }
    }

    return 0;
}

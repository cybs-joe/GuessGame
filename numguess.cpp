#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int lives = 6;
    int number , guess;
    srand(time(0));
    number = rand() % 100+1;
    guess = 0 ;
    cout << "Guess the number from 1-100 ";

    for (int i = 0 ; i < 6; i++){
         cin >> guess;
        if (guess == number ){
            cout << "correct guess" << endl;
            break;
        }
        if(guess < number){
            cout << "higher" << endl;
        }
        else if(guess >number){
            cout << "lower" << endl;
        }
        if(guess != number){
            lives --;
            cout << "incorrect " << "lives left " << lives << endl ;
        }
    }
    if(guess != number){
    cout <<"gameover" <<endl;
    cout << number;
    }

}
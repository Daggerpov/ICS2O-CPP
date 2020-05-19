#include <iostream>

using namespace std;

int main(){
    cout << "This dice game is called SNAKE EYES & SEVENS\n"
    "To win you must roll two ones or a total of 7\n"
    "This game will ask the user to input the dice \n"
    "values and then determine the winner. Let's begin\n";

    int first_dice, second_dice, sum;

    cout << "What is the value of the first dice?\n";
    cin >> first_dice;
    
    cout << "What is the value of the second dice?\n";
    cin >> second_dice;

    sum = first_dice + second_dice;

    if((first_dice == 1 && second_dice == 1) || (sum == 7)){
        cout << "You win!";
    }else{
        cout << "You lose!";
    }
}
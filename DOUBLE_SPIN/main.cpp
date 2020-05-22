#include <iostream>

//this next library is used to store string variable types
#include <string>

using namespace std;

/*here I just need to set a random number to give something to return 
from the function so that the program ends if needed*/
int random_number = 6;

int main(){
    //this is where the program starts
    
    //I'm asking the user whether they want to play the game and storing their input
    string response;
    cout << "Would you like to play DOUBLE SPIN? Type either 'yes' or 'no'\n";
    cin >> response;
    
    /*based on the user's response, this conditional will decide whether to end the 
    program or keep it going*/
    if (response != "yes"){
        cout << "The problem will end now, goodbye!\n";

        /*this takes the variable defined earlier and returns it to end the main function
        of the program, essentially ending the program*/
        return random_number;
    }

    /*now that the user's indicated they want to play the game, I'll tell them 
    everything they need to know about the game: rules, instructions, etc.*/
    cout << "\nYou'll be given 1000 points to start DOUBLE SPIN. The objective is to\n" 
    "earn as many points as you can, without going under 0, in which case the program will end.\n"
    "You can either earn or lose points after every round based on your spin conditions\n"
    "and if they are 'winning', 'losing', or 'neither'. These are the various colours you can\n"
    "choose for either spinner: green, yellow, blue, black. You'll be asked which ones you wish\n"
    "to select at the start of every round. After each round, you may decide\n"
    "whether you would like to keep playing the game or exit with your current point total.\n";
    
    //this sets the user's initial score to 1000 before starting
    int score = 1000;

    /*after initializing the first round's score, the program will enter a
    while loop that will continue running until the user has decided to stop 
    playing the game altogether. Of course, as long as the user's score is > 0*/

    /*here I'll set this variable to true, indicating that it's the user's first time
    going through the while loop, allowing for them to not be asked if they want to 
    continue if true*/
    bool first_time = true;
    while(score >= 0){
        
        /*depending on whether or not it's the user's first time going through 
        the while loop, the program will ask if they wish to go through it*/
        if(first_time != true){
            string another_round;
            cout << "Would you like to play another round? Type either 'yes' or 'no':\n";
            cin >> another_round;
            if(another_round == "no"){
                //this will break out of the while loop if the user decides to not play another round
                break;
            }
        }

        /*now the program will ask the user for their two spinner values, then 
        store them in two separate variables*/
        string first_spinner;
        string second_spinner;
        
        cout << "\nPlease type your first spinner value: \n";
        cin >> first_spinner;
        cout << "Please type your second spinner value: \n";
        cin >> second_spinner;

        /*based on these two values, the program will evaluate whether this condition
        constitutes a 'win', 'loss', or 'neither'.*/
        if(first_spinner == "blue" && second_spinner == "blue"){
            score += 100;
            cout << "\nYeah, you win 100 points!\n";
        }else if(first_spinner == "green" && second_spinner == "green"){
            score += 100;
            cout << "\nYeah, you win 100 points!\n";
        }else if(first_spinner == "yellow" && second_spinner == "yellow"){
            score -= 100;
            cout << "\nSorry, you lose 100 points.\n";
        }else if(first_spinner == "black" && second_spinner == "black"){
            score -= 200;
            cout << "\nSorry, you lose 200 points.\n";
        }else{
            cout << "\nYou didn't earn, nor lose any points that round.\n";
        }

        //now I'll tell the user their current point total
        cout << "Your current point total is: " << score << "\n\n";

        /*here I'm now setting the first_time variable to false, since they've now
        ran through all the code inside of it*/
        first_time = false;

        /*then, the while loop will check if the score is above or below 0 in the
        conditional, breaking the loop if it's below*/
    }
    
    if(score < 0){
        cout << "Your score has gone below 0. You lose the game";
    }

    cout << "\nYour score in DOUBLE SPIN ended up being: " << score << ".\n\nGoodbye. The Program will end now.\n";

    //just like earlier, the command below will end the program
    return random_number;
}
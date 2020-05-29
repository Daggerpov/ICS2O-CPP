#include <iostream>

//this next library is used to store string variable types
#include <string>

//this other library is the one you gave us, in order to generate a random number in C++
#include <ctime>

using namespace std;

/*here I just need to set a random number to give something to return 
from the function so that the program ends if needed*/
int random_number = 6;

int main(){
    //this is where the program starts
    
    //I'm asking the user whether they want to play the game and am storing their input
    string response;
    cout << "Would you like to play DOUBLE SPIN? Type either 'yes' or 'no'\n";
    cin >> response;
    
    /*based on the user's response, this conditional will decide whether to end the 
    program or keep it going*/
    if (response != "yes"){
        cout << "The program will end now, goodbye!\n";

        /*this takes the variable defined earlier and returns it to end the main function
        of the program, essentially ending the program as a whole*/
        return random_number;
    }

    /*now that the user's indicated they want to play the game, I'll tell them 
    everything they need to know about the game: rules, instructions, etc.*/
    cout << "\nYou'll be given 1000 points to start DOUBLE SPIN. The objective is to\n" 
    "earn as many points as you can, without going under 0, in which case the program will end.\n"
    "You can either earn or lose points after every round based on your spin conditions\n"
    "and if they are 'winning', 'losing', or 'neither'. These are the various colours you can\n"
    "receive for either spinner: green, yellow, blue, black, and red. You'll be given 2\n"
    "at the start of every round. After each round, you may decide whether\n"
    "you would like to keep playing the game or exit with your current point total.\n";
    
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
        
        
        if(first_time != true){

            /*this conditional checks whether the user's score is above or below 0 before asking if 
            they want to play another round*/
            if(score < 0){
                cout << "Your score has gone below 0. You lose the game";
                /*this will break out of the while loop if the user's score has gone below 0, 
                since they can't keep playing*/
                break;
            }

            /*depending on whether or not it's the user's first time going through 
            the while loop, the program will ask if they wish to go through it*/  
            string another_round;
            cout << "Would you like to play another round? Type either 'yes' or 'no':\n";
            cin >> another_round;
            if(another_round == "no"){
                //this will break out of the while loop if the user decides to not play another round
                break;
            }
        }

        cout << "\nHere's what the each of the spinners would look like to give you a decent visual:\n\n"
        //not the best visual ever, but gets the job done to display the spinners
        "          ---------------------------          \n"
        "         |            | black|       |         \n"
        "        |             |    |          |        \n"
        "       |    green     | |     red      |       \n"
        "      |               |                 |      \n"
        "     |-----------------------------------|     \n"
        "      |               |                 |      \n"
        "       |    blue      |     yellow     |       \n"
        "        |             |               |        \n"
        "         |            |              |         \n"
        "          ---------------------------          \n\n"
        ;
        
        /*now the program will ask the user for their two spinner values, then 
        store them in two separate variables
        string first_spinner;
        string second_spinner;

        cout << "\nPlease type your first spinner value: \n";
        cin >> first_spinner;
        cout << "Please type your second spinner value: \n";
        cin >> second_spinner;
        */

        //here I'm declaring the variables I'll need to store the spinner values in, once I randomly generate them
        string first_spinner;
        string second_spinner;

        for(int i= 0; i<2; i++){
            string spinner_number;
            
            if(i == 0){
                spinner_number = "first";
            }else if(i ==1){
                spinner_number = "second";
            }
            
            //this just supports the rand() function that generates random numbers
            int random_int;

            /*since there should be 12 different triangles for the spinner to land on, the range of 
            randomly generated numbers will be between 0 and 12, then based on the odds will 
            convert to the proper spinner value*/
            srand(time(NULL));

            //this randomly generated number after the % sign will be stored in the variable declared earlier

            //since we only need 12 possible values, I made the max number of the range 11 so it'll be from 0-11
            random_int = rand() %11;

            switch(random_int){
                case 0:
                    cout << "You got green for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "green";
                    }else if(spinner_number == "second"){
                        second_spinner = "green";
                    }
                    break;
                case 1:
                    cout << "You got yellow for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "yellow";
                    }else if(spinner_number == "second"){
                        second_spinner = "yellow";
                    }
                    break;
                case 2: 
                    cout << "You got blue for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "blue";
                    }else if(spinner_number == "second"){
                        second_spinner = "blue";
                    }
                    break;
                case 3: 
                    cout << "You got black for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "black";
                    }else if(spinner_number == "second"){
                        second_spinner = "black";
                    }
                    break;
                case 4: 
                    cout << "You got green for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "green";
                    }else if(spinner_number == "second"){
                        second_spinner = "green";
                    }
                    break;
                case 5: 
                    cout << "You got yellow for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "yellow";
                    }else if(spinner_number == "second"){
                        second_spinner = "yellow";
                    }
                    break;
                case 6: 
                    cout << "You got blue for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "blue";
                    }else if(spinner_number == "second"){
                        second_spinner = "blue";
                    }
                    break;
                case 7: 
                    cout << "You got red for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "red";
                    }else if(spinner_number == "second"){
                        second_spinner = "red";
                    }
                    break;
                case 8: 
                    cout << "You got green for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "green";
                    }else if(spinner_number == "second"){
                        second_spinner = "green";
                    }
                    break;
                case 9: 
                    cout << "You got yellow for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "yellow";
                    }else if(spinner_number == "second"){
                        second_spinner = "yellow";
                    }
                    break;
                case 10: 
                    cout << "You got blue for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "blue";
                    }else if(spinner_number == "second"){
                        second_spinner = "blue";
                    }
                    break;
                case 11: 
                    cout << "You got red for your " << spinner_number << " spinner value\n";
                    if(spinner_number == "first"){
                        first_spinner = "red";
                    }else if(spinner_number == "second"){
                        second_spinner = "red";
                    }
                    break;
            }
        }


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

    cout << "\nYour score in DOUBLE SPIN ended up being: " << score << ".\n\nGoodbye. The Program will end now.\n";

    //just like earlier, the command below will end the program
    return random_number;
}
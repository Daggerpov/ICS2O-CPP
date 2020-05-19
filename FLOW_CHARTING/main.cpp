#include <iostream>

// this is being included in order to store variables as the string data type
#include <string>

/* this is being included for the purpose of running the transform() function
so that I can turn whatever the input is into uppercase letters, in case the 
user inputs "yes" or "no" in lowercase */
#include<bits/stdc++.h> 

using namespace std;

int main(){
    //the program is started

    string play_response;
    cout << "Would you like to play DOUBLE SPIN?\nType either 'YES' or 'NO'\n";
    cin >> play_response; 
    transform(play_response.begin(), play_response.end(), play_response.begin(), ::toupper);

    if(play_response != "YES"){
        cout << "You've indicated that you would not like to continue playing."
        " The game will end now.";
        
        // this is provided so I can return something from this function to end it
        int random_number = 6;
        return random_number;
    }
}
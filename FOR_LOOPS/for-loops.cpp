#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void read_text(string filename){
    string myText;
    int lines;
    string response;
    
    cout << "Please type how many lines of the text you would like to be printed:" << "\n";
    cin >> lines;

    while(1){
        cout << "You want " << lines << " lines of the text printed, correct?" << "\n";
        cout << "y/n? ";
        cin >> response;
        if(response == "n"){
            cout << "Well, how many lines do you want printed then?" << "\n";
            cin >> lines;
        }else if(response == "y"){
            break;
        }else if(response != "y" || response != "n"){
            cout << "What you entered as an answer to that question was invalid. Please enter either the letter y or n to answer the question next time." << "\n";
            cout << "In case you didn't know, y means 'yes' and n means 'no'." << "\n";
        }
    }

    ifstream myFile(filename);
    for(int line = 0; line < lines; line++){
        if(getline(myFile, myText)){
            cout << myText << "\n";
        }else{
            cout << "\n" << "You've exceeded the amount of lines in your text file to print to the terminal. " << "\n";
            break;
        }
    }
    myFile.close();
}

void is_prime(int number){
    int i, half = 0, flag = 0;
    half = number/2;
    for(i = 2; i<= half; i++){
        if(number % i == 0){
            cout << "This number isn't prime" << "\n";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "This number is prime" << "\n";
    }
}

int main(){
    bool firstTime = true;
    bool quit = false; 
    string like_to_quit;

    while(quit == false){
        string answer;
        
        if(firstTime == true){
            cout << "\n" << "Would you like to print text from a text file you have in this folder?" << "\n";
        }else if(firstTime == false){
            cout << "\n" << "Would you like to print text from a text file you have in this folder again?" << "\n";
        }
        cout << "y/n? ";
        cin >> answer;
        
        bool fileExtensionValid = false;
        while(fileExtensionValid == false){
            if(answer == "y"){
                string filename;
                cout << "\n" << "Please type the file name you want to print text from with the extension: " << "\n";
                cin >> filename;
                
                int dotPosition = filename.find(".");
                string fileExtension = filename.substr(dotPosition + 1);
                if(fileExtension != "txt"){
                    cout << "Uh oh! It seems like your file extension isn't .txt, which means that this program can't handle "
                    "reading it." << "\n" << "You're going to have to input another filename with the .txt extension." << "\n";
                }else{
                    fileExtensionValid = true;
                    read_text(filename);
                    break;
                }
            }else if(answer != "n"){
                cout << "What you entered as an answer to that question was invalid. Please enter either the letter y or n to answer the question next time." << "\n";
                cout << "In case you didn't know, y means 'yes' and n means 'no'." << "\n";
            }

        }
        int number; 
        string proceed;
        
        cout << "\n" << "----------------------------------------------------------------------------------" << "\n";
        cout << "\n" << "Now I will be showcasing to you my second for loop of this program." << "\n";
        cout << "It'll allow for you to check if a number is prime or not." << "\n" << "\n";
        cout << "Would you like to proceed?" << "\n" << "y/n? ";
        cin >> proceed;
        
        if(proceed == "y"){
            cout << "\n" << "Please type which number you would like to check: " << "\n";
            cin >> number;
            is_prime(number);
        }else if(proceed != "n"){
            cout << "What you entered as an answer to that question was invalid. Please enter either the letter y or n to answer the question next time." << "\n";
            cout << "In case you didn't know, y means 'yes' and n means 'no'." << "\n";
        }  

        firstTime = false;

        cout << "\n" << "Would you like to quit the program?" << "\n" << "y/n? ";
        cin >> like_to_quit;
        if(like_to_quit == "y"){
            quit = true;
        }else if(like_to_quit == "n"){
            quit = false;
        }else if(like_to_quit != "n"){
            cout << "What you entered as an answer to that question was invalid. Please enter either the letter y or n to answer the question next time." << "\n";
            cout << "In case you didn't know, y means 'yes' and n means 'no'." << "\n";
        }
    }
}

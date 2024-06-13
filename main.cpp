#include <iostream>
#include <ctime>
#include <iostream>

using namespace std;

 char getComputerMove(){
    int move;

    // generating random number between 0 - 2
    srand(time(NULL));
    move = rand() % 3;

    // returning move based on the random number generated
    if(move == 0){
        return 'p';
    }
    else if (move == 1){
        return 's';
    }
    else {
        return 'r';
    }
}

int getResults(char playerMove, char computerMove){

    if (playerMove == computerMove){
        return 0;
    }

    if (playerMove == 'r' && computerMove == 's' ){
            return 1;
    }

    if (playerMove == 's' && computerMove == 'r'){
        return -1;
    }

    if (playerMove == 's' && computerMove == 'p' ){
            return 1;
    }

     if (playerMove == 'p' && computerMove == 's' ){
            return -1;
    }

     if (playerMove == 'p' && computerMove == 'r' ){
            return 1;
    }

    if (playerMove == 'r' && computerMove == 'p' ){
            return -1;
    }

    return 0;

}


int main()
{
    char player;

    char computer = getComputerMove();



    cout << "Welcome to Rock - Paper - Scissor Game " << endl;

    cout << "Enter r for Rock , p for Paper and s for Scissor" << endl;

    // input from the user
    while(1) {
        cout << "Player move: ";
        cin >> player ;

        if (player == 'p' || player == 'r' || player == 's') {
            break;
        }
        else {
            cout << "\t\t\tInvalid Player Move!!! Please Try Again." << endl;
        }
    }

    int result = getResults(player,computer);

    if (result == 0) {
         cout << "Game Draw!!" << endl;
    }

    else if (result == 1){
        cout << "You are the winner!" << endl;
    }

    else {
        cout << "Compuer won the game" << endl;
    }


    // showing both  moves
    cout << "Your Move: " << player << endl;
    cout << "Computer's Move: " << computer << endl;

    return 0;
}

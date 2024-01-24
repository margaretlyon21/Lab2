#include <iostream>
using namespace std;


class player{
    private:
    string Name;
    int ShotsTaken;
    int ShotsMade;
    int PassesAttempted;
    int PassesMade;

    public:

    // Getters for private variables
    string getName(){
        return Name;};
    int getShotsTaken(){
        return ShotsTaken;};
    int getShotsMade(){
        return ShotsMade;};
    int getPassesAttempted(){
        return PassesAttempted;};
    int getPassesMade(){
        return PassesMade;};
    
    //Setters for private variables 
    void setShotsTaken(int a){
        ShotsTaken += a;
    };
    void setShotsMade(int a){
        ShotsMade += a;
    };
    void setPassesAttempted(int a){
        PassesAttempted += 1;
    };
    void setPassesMade(int a){
        PassesMade += 1;
    }

};

int OpposingTeamPossesion(int opponentscore){
    while (true){
        bool shotMade = (rand() % 100) < 60;

        if (shotMade){
            cout << "Opposing team made the shot! (2 Points)";
            opponentscore += 2;
        } 
        else{
            bool rebound = (rand() % 100) < 50;
            if (rebound){
                cout << "Opposing team made the rebound!";
            }
            else{
                cout << "Opposing team missed the rebound... Its your ball!";
                return false;
            }
        }
    }
    return opponentscore;
};


int main(){
// Asks the user to choose an option, moves to what they chose
    cout << "Choose an Action:\n 1. Shoot \n 2.Pass \n 3. See Player Stats \n 4. See score";
    int choice;
    cin >> choice;

    //shoot
    if (choice == 1){
        currentplayer.TakeShot();
    }
    //pass
    else if (choice == 2){
        currentplayer.PassBall();
    }
    //print stats
    else if (choice == 3){
        cout << "*****************************************\n";
        cout << "Player Name: " << currentplayer.getName() << "\n";
        cout << "Shots Taken: " << currentplayer.getShotsTaken() << "\n";
        cout << "Shots Made: " << currentplayer.getShotsMade() << "\n";
        cout << "Passes Attempted: " << currentplayer.getPassesAttempted() << "\n";
        cout << "Passes Made: " << currentplayer.getPassesMade() << "\n";
        cout << "******************************************\n";
    }
    //print score
    else if (choice == 4){
        cout << score1 << "  -  " << score2;
    }



}

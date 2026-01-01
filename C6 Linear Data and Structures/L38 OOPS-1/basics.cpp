#include<iostream>
using namespace std;
class Player{
    public:
    int score; // data members
    int health;

    void showHealth(){ // member functions
        cout<<"Health is: "<<health<<endl;
    }
    void showScore(){
        cout<<"Score is: "<<score<<endl;
    }
};
int main(){
    Player ratan;
    ratan.score = 90;
    ratan.health = 100;

    ratan.showHealth();
    ratan.showScore();
}
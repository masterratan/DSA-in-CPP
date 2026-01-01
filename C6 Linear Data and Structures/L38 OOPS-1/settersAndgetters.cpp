// It is advisable to set your data member to private
// Access them using setter & getter member functions

#include<iostream>
using namespace std;
class Player{
    private:
        int score;
        int health;

    public:
        // setter
        void setScore(int s){
            cout<<"Score set kiya ja rha hai\n";
            score = s;
        }
        void setHealth(int h){
            cout<<"Health change kiya ja rha hai\n";
            health = h;
        }

        // getter
        int getScore(){
            return score;
        }
        int getHealth(){
            return health;
        }
};

int main(){
    Player Ratan;
    Ratan.setScore(225);
    Ratan.setHealth(100);

    cout<<Ratan.getScore()<<endl;
    cout<<Ratan.getHealth();

    return 0;
}
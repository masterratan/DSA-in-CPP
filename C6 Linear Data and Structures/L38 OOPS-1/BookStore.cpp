// Ques. Create a class 'book' with name, price and number of pages as its attributes. The class should contain following member functions:
// 1. countBooks(int price): This function will return count of all the books that have a price less than the given price.
// 2. isBookPresent(string title): This will return a boolean value indicating whther any book with the given title is present or not.

#include<iostream>
using namespace std;
class book{
    private:
        string name;
        int price;
        int numberOfpages;
    
    public:
        void setName(string n){
            name = n;
        }
        void setPrice(int p){
            price = p;
        }
        void setNoOfPages(int pg){
            numberOfpages = pg;
        }
        int countBooks(int p){
            if(price < p) return 1;
            return 0;
        }
        bool isBookPresent(string book){
            if(name == book) return true;
            return false;
        }
};
int main(){
    book hp;
    hp.setName("Harry Potter");
    hp.setPrice(1000);
    hp.setNoOfPages(500);

    cout<<hp.isBookPresent("Harry Potter");
}
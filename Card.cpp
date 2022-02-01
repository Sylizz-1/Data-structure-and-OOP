#include<iostream>
#include<vector>
using namespace std;

class Card {
    private:
        string nameBook;
        string nameAuthor;
        int numberBook;
    public:
        Card() {
            
            cout<<"enter name book:";cin>> this->nameBook;
            cout<<"enter author'name:";cin>> this->nameAuthor;
            cout<<"enter number book:";cin>> this->numberBook;
        }
        
        int getnumberBook() {
            return this->numberBook;
        }
        static void sortCards(vector<Card> &cards){
            for(int i = 0; i < cards.size() - 1; i++){
                for(int j = i + 1; j < cards.size(); j++){
                    if(cards[i].getnumberBook() > cards[j].getnumberBook())
                        swap(cards[i], cards[j]);
                }
            }
        }    
        void display() {
            cout<<"name book: "<<this->nameBook<<endl;
            cout<<"author name: "<<this->nameAuthor<<endl;
            cout<<"number book: "<<this->numberBook<<endl;
        }
};
int main() {
    vector<Card> cards;
    Card a;
    Card b;
    Card c;
   
    cards.push_back(a);
    cards.push_back(b);
    cards.push_back(c);
    Card::sortCards(cards);
    for (int i = 0; i < cards.size(); i++){
        cards[i].display();
        cout<<endl;
    }
}
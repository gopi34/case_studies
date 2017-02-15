// Example program
#include <iostream>
using namespace std;

class abraarCafe
{    
    public:
    int userChoice;
    int no;
    int pCoffee = 20;
    int pLTea = 30;
    int pMilk = 10;
    int pGTea = 30;
    int pTea = 20;
    
    void displayMenu() {
        cout << "Welcome to Abraar cafe ! \n \n";
        cout << "Today's Menu \n 1 for Coffee \t\t (Rs20). \n 2 for Lemon Tea \t (Rs30). \n 3 for Milk \t\t (Rs10). \n 4 for Ginger Tea \t (Rs30). \n 5 for Tea \t\t (Rs20).\n";
    }
    
    void getMenu(){
        
        cout << "What would you like to have ? \n";
        cin  >>  userChoice;
        cout << "How much do you need? \n";
        cin  >> no;
        }
    void printBill(){
        switch(userChoice){
            case 1:
            cout <<"\n Your bill amount is " << no << " Coffee * " << pCoffee << "\n" << no * pCoffee;
            break;
            case 2:
            cout <<"\n Your bill amount is " << no << " Lemon Tea * " << pLTea << "\n" << no * pLTea;
            break;
            case 3:
            cout <<"\n Your bill amount is " << no << " Milk * " << pMilk << "\n" << no * pMilk;
            break;
            case 4:
            cout <<"\n Your bill amount is " << no << " Ginger Tea * " << pGTea << "\n" << no * pGTea;
            break;
            case 5:
            cout <<"\n Your bill amount is " << no << " Tea * " << pTea << "\n" << no * pTea;
            break;
            }
        }
};


int main()
{
  abraarCafe abr;
  abr.displayMenu();
  abr.getMenu();
  abr.printBill();
  
}

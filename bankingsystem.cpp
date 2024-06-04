#include <iostream>
#include<iomanip>
using namespace std;

class bankaccount{
    private:
    double balance;
    
    public:
    bankaccount(double initialbalance= 0.0) : balance(initialbalance){}
    
    void deposit(double amount){
        balance += amount;
        cout<<endl<<"you deposit "<<amount<<" rupees in your account."<<endl<<endl;
    }
    
    bool withdraw(double amount){
        if(balance >= amount){
            balance -= amount;
            cout<<endl<<"withdraw rupees"<<amount<<" from your account"<<endl<<endl;
            return true;
        }
        else{
            cout<<endl<<"aukaat bahar mat jao bhai"<<endl<<endl;
            return false;
        }
    }
    
    void displaybalance() const{
        cout<<endl<<"current balance is "<<balance<<endl<<endl;
    }
};    
int main() {
     bankaccount account;
     
     int choice;
     double amount;
     cout<<"welcome to arpan banking system !!!"<<endl;
     
     do{
         cout<<"MENU :"<<endl<<"1.deposit:"<<endl<<"2.withdraw"<<endl<<"3.check balance"<<endl<<"4.exit"<<endl<<"Enter your choice :";
         cin>>choice;
         
         switch(choice){
             case 1:
             cout<<"enter amount to deposit :";
             cin>>amount;
             account.deposit(amount);
             break;
             case 2:
             cout<<"enter amount to withdraw :";
             cin>>amount;
             account.withdraw(amount);
             break;
             case 3:
             account.displaybalance();
             break;
             case 4:
             cout<<"thank you for using Arpan banking system..."<<endl;
             break;
             default:
             cout<<"invalid choice..."<<endl;
         }
     }while(choice != 4);
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;
class Account{
    public:
       Account(){
           id = 0;
           balance =0 ;
           annualInterestRate = 0;
           dateCreated = time(0);
       }
       Account(int userId,double initialBalance){
           id = userId;
           balance=initialBalance;
           dateCreated = time(0);
       }
       int getId(){
           return id;
       }
       void setId(int userId){
           id = userId;
       }
       double getBalance(){
         return balance;
       }
       void setBalance(double initialBalance){
         balance=initialBalance;
       }
       void setAnnualInterestRate( double air){
            annualInterestRate = air;
       }
       double getAnnualInterestRate(){
           return annualInterestRate;
       }
       string getCreateDate(){
        return ctime(&dateCreated);
       }
       double getMonthlyInterestRate(){
           return (annualInterestRate / 12.0);
       }
       double getMonthlyInterest(){
         return (balance/100)*getMonthlyInterestRate();
       }
       double withdraw(double w){
            balance -= w;
       }
       double deposit(double d){
            balance += d;
       }
    private:
        int id;
        double balance;
        double annualInterestRate ;
        time_t dateCreated;
};
int main()
{
      Account account(1122,20000);
      account.setAnnualInterestRate(4.5);
      account.withdraw(2500);
      account.deposit(3000);
      cout<< "Id is : 1122"<<endl <<"Withdraw  : 2500 : "<< endl << "Annual Interest rate: 4.5%" << endl << "Deposite : 3000"<<endl ;
      cout<<"Current Balance :"<<account.getBalance()<<" $"<<endl;
      cout<<"Monthly Interest: "<<account.getMonthlyInterest()<<" $"<<endl;
      cout<<"Created Date: "<<account.getCreateDate()<<endl;
    return 0;
}
#include<bits/stdc++.h>

// simple bank system functions - oop training 13/1/2021
// using only one class - multiple functions - methods
class simple_Bank {
private:
    std::string name;
    double account_number;
    double amount=0;
    double balance=0;
    char account_type[100];

public:
    void Details(){
        std::cout<<"Enter Your Name: "<<std::endl;
        std::cin>>name;
        std::cout<<"Enter Your Account Number: "<<std::endl;
        std::cin>>account_number;
        std::cout<<"Enter Your Account type: "<<std::endl;
        std::cin>>account_type;
        std::cout<<"Enter Your Balance: "<<std::endl;
        std::cin>>balance;
    }
    void display(){
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Account Number: "<<account_number<<std::endl;
        std::cout<<"Account Type: "<<account_type<<std::endl;
        std::cout<<"Balance: "<<balance<<std::endl;
    }
    void balanceDisplay(){
        balance+=amount;
        std::cout<<"Your Account Total Balance is: "<< balance << std::endl;
    }
    void withdrawl(){
        double available_balance;
        double main_v;
        std::cout<<"Enter Withdraw Amount: "<<std::endl;
        std::cin>>main_v;
        available_balance = balance - main_v;
        std::cout<<"Your Available Balance is: " << available_balance;
    }
    void deposit(){
        std::cout<<"Enter Deposit Transaction Amount: "<<std::endl;
        std::cin>>amount;
    }

};
int main() {
    simple_Bank sb;
    int Operation;
    while(true){
        std::cout<<"      Welcome!      "<<std::endl;
        std::cout<<"Enter Your Choice: " <<std::endl;
        std::cout<<"1- Enter Your Account Name, Account Number, Account Type"<<std::endl;
        std::cout<<"2- Balance Enquiry"<<std::endl;
        std::cout<<"3- Balance overview"<<std::endl;
        std::cout<<"4- Deposit Money"<<std::endl;
        std::cout<<"5- Withdraw Money"<<std::endl;
        std::cout<<"6- Close"<<std::endl;
        std::cin>>Operation;

        if(Operation == 1){
            sb.Details();
        }
        else if(Operation == 2){
            sb.display();
        }
        else if(Operation == 3){
            sb.balanceDisplay();
        }
        else if(Operation == 4){
            sb.deposit();
        }
        else if(Operation == 5){
            sb.withdrawl();
        }
        else if(Operation == 6){
            exit(false);
        }
        else{
            std::cout<<"Invalid Operation! "<<std::endl;
        }
    }
    return 0;
}

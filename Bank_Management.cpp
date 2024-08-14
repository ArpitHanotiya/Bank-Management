#include<stdio.h>
#include<conio.h>
#include <iostream>

using namespace std;

class bank{
    char name[100], add[100], y;
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
};

void bank :: open_account(){
    cout<<"enter your full name :: ";
    cin.ignore();
    cin.getline(name, 100);
    cout<<"enter your adress :: ";
    cin.ignore();
    cin.getline(add, 100);
    cout<<"what type of account you want to open saving (s) or current (c)";
    cin>> y;
    cout<<"enter amount for deposit :: ";
    cin>> balance;
    cout<<"your account is created \n";
}

void bank :: deposit_money(){
    int a;
    cout<<"enter how much you deposit :: ";
    cin>>a;
    balance += a;
    cout<<"total amount you deposit :: \t"<<balance;
}

void bank :: display_account(){
    cout<<"your full name :: \t"<<name;
    cout<<"Your address :: \t"<<add;
    cout<<"type of account that you open :: \t"<<y;
    cout<<"amount you deposit :: \t"<<balance;
}

void bank :: withdraw_money(){
    float amount;
    cout<<"\n withdraw :: ";
    cout<<"enter amount to withdraw :: ";
    cin>>amount;
    balance -= amount;
    cout<<"now total amount left is :: "<<balance;
}

int main()
{
    int ch;
    char x;
    bank obj;
    do{
        cout<<"1) Open account \n";
        cout<<"2) deposit money \n";
        cout<<"3) withdraw money \n";
        cout<<"4) display account \n";
        cout<<"5) Exit \n";
        cout<<"select the option from above \n";
        cin>> ch;
        switch(ch){
            case 1 : 
            obj.open_account();
            break;
            case 2 : 
            obj.deposit_money();
            break;
            case 3 : 
            obj.withdraw_money();
            break;
            case 4 : 
            obj.display_account();
            break;
            case 5 : 
                if(ch==5){
                    exit(1);
                }
            default:
                cout<<"this does not exist, try again \n";
        }    
        cout<<"\n do you want to select next option then press :: y \n";
        cout<<"if you want to exit then press :: N ";
        cin>>x;
        if(x == 'n' || x == 'N')
            exit(0);
    }while(x == 'y' || x == 'Y');

    // getchar();
    return 0;
}
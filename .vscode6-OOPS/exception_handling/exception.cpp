#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int balance,account_number;
    public:
    customer(string name, int balance, int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }

    //deposit
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<" is credited successfully"<<endl;
        }
        else throw "Invalid Amount and should be greater than 0";
    }

    //withdraw
    void withdraw(int amount){
        if(amount>0 and amount<=balance){
            balance-=amount;
            cout<<amount<<"is debited successfully"<<endl;
        }
        else throw "Insufficient Balance";
    }
};
int main(){
    customer c1("Ravi",1000,123456);
    try{
        c1.deposit(5000);
        c1.withdraw(50000);
    }
    catch(const char *msg){
        cout<<"exception occured: "<<msg<<endl;
    }
    catch(...){ //"catch-all" handler,
        cout<<"Some other exception occured"<<endl; 
    }
return 0;
}
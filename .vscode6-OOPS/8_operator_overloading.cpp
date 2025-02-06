#include<iostream>
using namespace std;
class Fraction{
private:
    int num;
    int den;
public:
    Fraction(){

    }
    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }

    void display(){
        cout<<num<<"/"<<den<<endl;
    }

    Fraction add(Fraction f){
        int newNum=this->num*f.den + this->den*f.num;
        int newDen=this->den*f.den;

        Fraction ans(newNum,newDen);
        return ans;
    }

    Fraction operator+ (Fraction &f){ //binary operator overloading
        Fraction ans(0,0);
        ans.num=this->num*f.den + this->den*f.num;
        ans.den=this->den*f.den;
        return ans;
    }

    Fraction operator- (){ //unary operator overloading
        Fraction ans;
        ans.num=num;
        ans.den=-den;
        return ans;
    }
};
int main(){
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.display();
    f2.display();

    Fraction f3=f1.add(f2);
    f3.display();
    
    Fraction f4=f1+f2; //binary operator overloading
    f4.display();


    Fraction f5=f1.operator-(); //unary operator overloading
    f5.display();

    Fraction f6=-f1; //unary operator overloading
    f6.display();


return 0;
}
#include<iostream>
#include<string.h>
using namespace std;
class simcard
{
public:
string company;
long number;
float balance;
int dataplan;
void getcompany()
{
cin >>company;
}
void getnumber()
{
cin >>number;
}
void balancecheck()
{
cin >>balance;
cin >>dataplan;
}
void showdetails()
{
cout <<"\n"<<company<<"\n"<<number<<"\n"<<balance<<"\n";
}
void isplanactive()
{
    
    if(dataplan==1)
    cout <<"active data plan";
    else
    cout <<"no active dataplan";
}
};
int main() 
{
int i;
simcard c;
cout <<"enter the simcard details:";
c.getcompany();
c.getnumber();
c.balancecheck();
c.showdetails();
c.isplanactive();
}


#include<iostream>
#include<conio.h>
using namespace std;
class atm
{
    public:
    int a=1000;
    int b;
    int c;
    int d,e;
showmenu()
    {
cout<<"\nEnter Option ";
cin>>d;
    }
menu()
{
    cout<<"**********MENU**********";
    cout<<"\n1. Check Balance";
    cout<<"\n2. Deposit";
    cout<<"\n3. Withdraw";
    cout<<"\n4. Exit";
    cout<<"\n************************";
}
bal()
{
    cout<<"\nThe Balance is "<<a<<"Rs.";
}
dep()
{
    cout<<"\nEnter Deposit Amount ";
    cin>>b;
    a=a+b;;
    cout<<"\nTotal Balance is "<<a<<"Rs.";
}
with()
{
    cout<<"\nEnter Withdraw Amount ";
    cin>>c;
    if(c<=a)
    {
        a=a-c;
         cout<<"\nRemaining Balance is "<<a<<"Rs.";
    }
    else
    {
        cout<<"\nInsufficient Balance";
    }

}
program()
{
do
{
showmenu();
    switch(d)
    {
    case 1:
        {
        bal();
        break;
        }
    case 2:
        {
            dep();
            break;
        }
    case 3:
        {
            with();
            break;
        }
    }
    }
while(d<=3);
}
};
main()
{
atm obj;
    obj.menu();
    obj.program();
    system("pause");
}

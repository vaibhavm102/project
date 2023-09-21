#include<cstdlib>
#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
	public:
	string name;
	string address;
	string mono;
	double initialdp=0;
	double deposite;
	double withdraw;
	double currentbalance;
	string userid;
	int pass;
	long acco;
	int random;
void CreateAccount()
	{
		cout<<"please enter your personal information"<<endl;
		cout<<"Enter your account number"<<endl;
		cin>>acco;
		cout<<"Enter your name"<<endl;
		cin>>name;
		cout<<"Enter your address"<<endl;
		cin>>address;
		cout<<"Enter your mono"<<endl;
		cin>>mono;
		cout<<"Enter your Initial deposit"<<endl;
		cin>>initialdp;
		cout<<"This is your one time password"<<endl;
		random=rand() % 10;
		cout<<random<<endl;
		menu1();	
	}
void Login()
{
if(initialdp>0)
{
  cout<<"Enter your Mobile number"<<endl;
  cin>>userid;
  cout<<"enter your password"<<endl;
  cin>>pass;
  if(userid == mono && pass == random)	
  {
  	menu();
  }
  else
  {
  	cout<<"please enter valid details"<<endl;
  	menu1();
  }
}
else
{
	cout<<"Create account First"<<endl;
	menu1();
}
	
}
	void CashDeposit()
	{
			if(initialdp>0)
		{
		cout<<"enter the Amount you want to deposit="<<endl;
		cin>>deposite;
		currentbalance = initialdp+deposite;
		cout<<"Your Current Account Balance is="<<currentbalance<<endl;
		menu();
	}
	else
	{
		cout<<"Create account First"<<endl;	
	}
		
	}
	void CashWithdrawal()
	{
		if(initialdp>0)
		{
			
		cout<<"enter amount you want to withdraw="<<endl;
		 cin>>withdraw;
		 currentbalance = initialdp+deposite-withdraw;
		cout<<"Your Current Account Balance is="<<currentbalance<<endl;
		menu();
	}
	else
	{
		cout<<"Account is empty";
		menu();
	}
		 
		
	 } 
	 void DisplayAccountInformation()
	 {
	 	cout<<"************************************************************"<<endl;
	 	cout<<"This is your Account information"<<endl;
	 	cout<<"Account no:-"<<acco<<endl;
		cout<<"Name:-"<<name<<endl;
		cout<<"Address:-"<<address<<endl;
		cout<<"Mobile no:-"<<mono<<endl;
		cout<<"Initial deposite:-"<<initialdp<<endl;
		cout<<"Account Balance:-"<<initialdp+deposite-withdraw<<endl;
		cout<<"************************************************************"<<endl;
		menu();	
	 	
	  } 
	void menu1()
	{
		int ch1;
		cout<<"************************************************************"<<endl;
		cout<<"1. Create your Account"<<endl;
		cout<<"2. Login"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"please select option"<<endl;
		cin>>ch1;
		switch(ch1)
		{
			case 1:
				CreateAccount();
				break;
			case 2:
				Login();
				break;
			default:
				cout<<"Wrong choice"<<endl;
				break;
				
		}
		
	}
	void menu()
	{
		int ch;
		cout<<"************************************************************"<<endl;
		cout<<"1. Deposite your cash"<<endl;
		cout<<"2. Withdrawal your cash"<<endl;
		cout<<"3. Dispaly Account Information"<<endl;
		cout<<"4. Log Out"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"please select option"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				CashDeposit();
				break;
			case 2:
				CashWithdrawal();
				break;
			case 3:
				DisplayAccountInformation();
				break;
			case 4:
				LogOut();
				break;
			default:
				cout<<"please select valid option";
				break;
				
		}
	}
	 void LogOut()
	  {
	    system("cls");
	    menu1();
	   } 
};
int main()
{
	
	Bank b;
	b.menu1();
	
	
	return 0;

}
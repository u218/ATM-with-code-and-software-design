/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


using namespace std;
class atm
{
public:
  string a;
  int b = 0;
  int pin = 1234;
  int accountnumber = 1233;
  int pin2 = 0;
  int an = 0;
  int withdraw = 0;
  int deposit = 0;
  int nacc;
  int pin3;
  int pin4;
  bool balance=0;


  void starterMessage();
  void input ();
  void display2();
  void manu();
 void option();
};



void atm :: option()
{   level2:
int t;
starterMessage();
cin>>t;
  switch (t)
    {
     
    case 1:
      {
	cout << "please enter account number" << endl;
	cin >> an;
	cout << "please enter pin " << endl;
	cin >> pin2;

	if (pin == pin2 && accountnumber == an)
	  {
	    display2 ();
	  level1:
	    int p;
	    cout << "please choose from the following option" << endl;
	    cin >> p;
	    
	    switch (p)
	      {
	      case 1:
		{
		  cout << "the balance is" << balance << endl;
		  break;
		}
	      case 2:
		{
		  cout << "plz enter the amount you want to withdraw" << endl;
		  cin >> withdraw;
		  balance -= withdraw;
		  cout << "you have withdrawn the ammount" << withdraw <<
		    endl;
		  cout << "you balance now is " << balance << endl;
		  break;
		}
	      case 3:
		{
		  cout << "plz enter the amount you want to deposit" << endl;
		  cin >> deposit;
		  balance += deposit;
		  cout << "you have withdrawn the ammount" << deposit << endl;
		  cout << "you balance now is " << balance << endl;
		  break;
		}
	      case 4:
		{

		  int change;
		  cin >> change;
		  pin = change;
		  cout << "the new pin is" << pin << endl;
		  break;
		}
	      default:
		{
		  cout <<
		    "sorry to selected the wrong option do you want to do again"
		    << endl;
		  cout << "press Y to contine and n to Exit!! " << endl;
		  char c;
		  cin>>c;
		  if (c == 'Y' || c == 'Y')
		    {
		      goto level1;
		    }
		  else
		    {
		      exit (0);
		    }
		  break;

		}
	      }
	  }
	else
	  {
	    cout << " try again your password is not correct please try again"
	      << endl;
	    goto level2;
	    break;

	  }
	  break;
      }

    case 2:

      {

	cout << "please choose the account number of 4 digits" << endl;
	cin >> pin3;

	cout << "please confirm  the pin" << endl;
	cin >> pin4;
	if (pin3 == pin4)
	  {
	    cout << "pin matched your account created succesfully" << endl;
	  }
	else

	  {
	    cout << "pin didnt matched" << endl;
	  }
	break;
      }
    default:
      
	{
	  cout << "sorry11 to selected the wrong option do you want to do again"
	    << endl;
	  cout << "press Y to contine and n to Exit!! " << endl;
	  char c;
	  cin>>c;
	  if (c == 'Y' || c == 'Y')
	    {
	      goto level2;
	    }
	  else
	   
	  break;

	}
      }
    }







int main()
{
    atm bank;
   
    while (true) // This is the while loop that repeats the program until the user exits the program.
	{
//		Menu(); // This is where the menu function is called inside the main function.
		
		 bank.option(); // This calls functions from the class
	}
	return 0; // This is a standard predefined return value.
}
    

 





void atm::starterMessage ( )
    {
  cout << "-------------------------------WELCOME-------------------------" <<
    endl;
  cout << "this this is atm machine " << endl;
  cout << "1 if you are existing user" << endl;
  cout << "2 to create the new account" << endl;
}

void atm ::display2()
{
  cout << "press the following for the following" << endl;
  cout << "1 to check balance " << endl;
  cout << "2 to  check withdraw money" << endl;
  cout << "3 to  deposit money" << endl;
  cout << "4 to change pin" << endl;
}



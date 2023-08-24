#include <iostream>

using namespace std;
class emp
{
  int id;
  int salary;

    public:void setId ()
  {
    cout << "Enter the Id  of the employee : " << endl;
    cin >> id;
    cout << "Enter the salary of the employee : " << endl;
    cin >> salary;

  }
  void getId ()
  {
    cout << "The Id of the Employee is : " << endl;
    cout << id << endl;
    cout << "The of salary of the Employee " << id << " is : " << salary <<
      endl;

  }


};

int
main ()
{

  int ent;
  cout << "How many entries you want to submit : " << endl;
  cin >> ent;
  emp str[ent];
  for (int i = 0; i < ent; i++)
    {
      str[i].setId ();

    }
  int dat;
  cout << "Press 1 to show salary with Id of the Employee | Press 2 to exit :"
    << endl;
  cin >> dat;
  if (dat == 1)
    {
      for (int i = 0; i < ent; i++)
	{
	  str[i].getId();
	  

	}
	if(dat==2)
	{
	    cout<<"Thank You "<<endl;
	    
	}
	else{
	    cout<<"incorrect input"<<endl;
	}

    }


  return 0;
}


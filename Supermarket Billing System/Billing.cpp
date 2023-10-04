#include <iostream>
#include <fstream>

using namespace std;

class shopping 
{
    private : 
      int pcode;
      float price;
      float dis;
      string pname;

    public : 
        void menu();
        void adminstrator();
        void customer();
        void add();
        void edit();
        void rem();
        void list();
        void receipt(); 
};

void shopping :: menu() 
{
    m:
    int choice;
    string email;
    string password;


    cout <<"\t\t\t\t_____________________________________________________\n";
    cout <<"\t\t\t\t                                                     \n";
    cout <<"\t\t\t\t                    SuperMarket Main Menu            \n"; 
    cout << "\t\t\t\t                                                    \n";
    cout << "\t\t\t\t____________________________________________________\n";
    cout << "\t\t\t\t                                                    \n";
    cout << "\t\t\t\t|   1) Administrator     |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\t\t\t\t|   2) Buyer             |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\t\t\t\t|   3) Exit              |\n";
    cout << "\t\t\t\t|                        |\n";
    cout << "\n\t\t\t\t Please Select!";
    cin >> choice;

     
     switch(choice) {
       
       case 1: cout << "\t\t\t Please Login \n";
       cout << "\t\t\t Enter your Email \n";
       cin >> email;
       cout << "\t\t\t Enter your Password \n";
       cin >> password;

       if(email="sksharma@gmail.com" && password = "sunil#1454" )
       {
          adminstrator(); 
       } 
       else
       {
          cout << "Invalid user email/password";
       }
       break;

       case 2 : 
       {
        customer();
       }
       break;

       case 3 : 
       {
        exit();
       }

       default: 
       {
          cout << "Please select from the given options";
       }

     }

     goto m;

}

void shopping :: adminstrator()
{
    m :
    int choice;
    cout << "\n\n\n\t\t\t  Administrator Menu";
    cout << "\n\t\t\t|_____1) Add the product_____|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____2)Modify the product___|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____3)Delete the product___|";
    cout << "\n\t\t\t|____________________________|";
    cout << "\n\t\t\t|_____4)Back to main menu____|";
    cout << "\n\t\t\t|____________________________|";

    
    cout << "\n\n\t Please enter your choice " ;
    cin >> choice;

    switch(choice) 
    {
        case 1:
          add();
          break;

        case 2: 
          edit();
          break;

        case 3: 
          rem();
          break;

        case 4: 
          menu();
          break;

        default : 
          cout << "Invalid Choice!";    
        
    }

  goto m;
}



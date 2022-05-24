#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<string, int>> manue = {{"", 0}, {"Shawarma", 50}, {"Pasta", 10}, {"Burger", 600}, {"Pizza", 1500}, {"Fries", 120}, {"Pepsi", 1500}};
vector<pair<int, int>> star;

void Name_of_Hotel();
void manu();
void order();
void bill();
int main()
{
    Name_of_Hotel();
    manu();
    order();
    bill();
}
void Name_of_Hotel()
{

    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 ||                                                                 ||" << endl;
    cout << "                                                 ||                   WELCOME TO TAG RESTRAUTANT                    ||" << endl;
    cout << "                                                 ||                                                                 ||" << endl;
    cout << "                                                 =====================================================================" << endl;
    cout << "                                                 =====================================================================" << endl;
}

void manu()
{   
    cout<<"\n\n\n\n\n\n";
    cout <<"**********************************************************************" << endl;
    cout <<"|                           MANUE                                    |" << endl;
    cout <<"**********************************************************************" << endl
         << endl;
    for (size_t i = 1; i < manue.size(); i++)
    {
        cout << "*   " << i << " : " << manue[i].first << "--------------------------------------/" << manue[i].second << endl
             << endl;
    }
    cout <<endl<< "*                 PRESS 0 FOR BILL" << endl;
    cout << "**********************************************************************" << endl;
}
void order()
{
    int quantity;
    int dish;

    do
    {
        cout << "\nWhat would you like to order : ";
        cin >> dish;
        if (dish == 0)
        {
            continue;
        }
        if (0 > dish || dish > 6)
        {
            cout << "invalid input  select the dish again\n";
            continue;
        }
        cout << "Please enter the quantity of desired meal : ";
        cin >> quantity;
        star.push_back(make_pair(dish, quantity));    
    } while (dish != 0);
}
void bill()
{

    int j;
    int per_dish_bill = 0;
    int total_bill = 0;
     cout << "*****************************************************************************************************************************" << endl;
    cout << "|                                                         || BILL||                                                          |" << endl;
    cout << "******************************************************************************************************************************" << endl;
    cout << "|     Dish name               |              Price             |             quantity             |            bill_per_dish |" << endl;
    cout << "******************************************************************************************************************************" << endl;
    for (size_t i = 0; i < star.size(); i++)
    {
        j = star[i].first;
        per_dish_bill = star[i].second * manue[j].second;
        cout << "*    " << manue[j].first << "                                  " << manue[j].second << "                               " << star[i].second << "                               " << per_dish_bill << endl
             << endl;
        total_bill = total_bill + per_dish_bill;
    }
    cout << "*****************************************************************************************************************************" << endl;
    cout << "*    Total Bill                                                                                                " << total_bill << "         |" << endl;
    cout << "*****************************************************************************************************************************" << endl;
}
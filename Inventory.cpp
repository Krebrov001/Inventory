#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cerr;
using std::endl;
  
/**
 * This is the constructor for the class Inventory.
 *
 * @param string name - The name of that item  ex: "Extra beans taco"
 *
 * @param float price - The price of that item in the store.
 *
 * @param int count - The number of items that are in stock.
 *                    If it is < 1, then selling an item would fail.
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/**
 * This method attempts to sell an item.
 * If there are > 0 such items, the purchase is made successfully.
 * If there are < 1 such items, then the purchase fails because the item is out of stock,
 * and an error message is printed to the user to let them know that.
 */
void Inventory::sell()
{
    if (m_in_stock > 0)
        m_in_stock--;
    else
        cerr << "This item is out of stock!" << endl;
}

/**
 * This overloaded operator facilitates to print the item easily just like a built in data type.
 * It displays the item's name and that item's price.
 *
 * @param ostream& stream - A standard ostream, can be cout, cerr, or a file.
 *
 * @param const Inventory& item - The item that is to be printed.
 *
 * @return ostream& - Printing the item modifies the osteam.
 *                    The ostream is returned for chaining them.
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}


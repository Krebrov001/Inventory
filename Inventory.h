#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/**
 * This is a helper class in the store.
 * This class represents one type of item that can be sold in the store.
 * An item has a name, a price, and the numer of items in stock.
 */
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};


#endif


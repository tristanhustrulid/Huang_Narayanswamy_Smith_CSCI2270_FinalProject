#ifndef CATALOG_H
#define CATALOG_H
#include <iostream>

#include<vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <queue>
#include <stack>

using namespace std;

struct item{
	string name;
	string category;
	int price;
	int quantity;
	item *next;
    item *previous;

	item(){};
	item(string in_category, string in_name, int in_price, int in_quantity)
	{
		name = in_name;
		quantity = in_quantity;
		category = in_category;
		price = in_year;
		next = NULL;
		previous = NULL;
	}
};


class Catalog
{
	public:
		Catalog();
		~Catalog();
		void readInItems();
		void printCatalog();
		void printCatalogByPriceRange(int priceRange);
		void printCatalogByCategory(string category);
		void printCategories();
		void insertItem(string name, int year);
		void deleteItem(string name);
		void findItem(string name);
		void printShoppingCart();
		void checkOut();

	private:
		int hashSum(string x, int s);
		int tableSize = 10;
		item* itemCatalog[10];

};

#endif // CATALOG_H
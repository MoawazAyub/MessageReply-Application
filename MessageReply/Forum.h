# ifndef FORUM_H
# define FORUM_H
# include <iostream>
//# include <string>
# include "Category.h"


using namespace std;

class Forum
{
	string ForumName;
	vector<Category*> Categories;

public:

	Forum();
	string GetName();
	void SetName(string);
	void SEARCH(string);
	void ADDcategory(Category*);
	Category* Getcategory(int);

};

# endif
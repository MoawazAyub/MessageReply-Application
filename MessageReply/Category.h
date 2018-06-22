# ifndef CATEGORY_H
# define CATEGORY_H
//# include <vector>
//# include <string>
# include "Topic.h"

using namespace std;

class Category
{
	string CategoryName;
	vector<Category*> SubCategories;
	vector<Topic*> Topics;

public:
	Category();
	string GetName();
	void SetName(string);
	void ADDsubcategory(Category*);
	void ADDtopic(Topic*);

	Category* GetSubCategory(int);
	Topic*    GetTopic(int);

	int gettotaltopics();
	int gettotalsubs();
};

# endif
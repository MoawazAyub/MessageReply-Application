# include "Category.h"

Category::Category()
{

}

string Category::GetName()
{
	return CategoryName;
}

void  Category::SetName(string s)
{
	CategoryName = s;
}


void Category::ADDsubcategory(Category* c)
{
	SubCategories.push_back(c);

}


void Category::ADDtopic(Topic * t)
{
	Topics.push_back(t);

}

Category* Category::GetSubCategory(int i)
{
	return SubCategories[i];
}

Topic* Category::GetTopic(int i)
{
	return Topics[i];

}

int Category::gettotaltopics()
{
	return Topics.size();

}

int Category::gettotalsubs()
{
	return SubCategories.size();

}


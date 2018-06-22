# include "Forum.h"

Forum::Forum()
{

}

string Forum::GetName()
{
	return ForumName;

}

void Forum::SetName(string name)
{
	ForumName = name;

}

void Forum::ADDcategory(Category* c)
{

	Categories.push_back(c);
}

Category* Forum::Getcategory(int i)
{
	return Categories[i];

}

//














void Forum::SEARCH(string str)
{
	string s;
	for (int i = 0 ; i < Categories.size() ; i++)
	{
		if(Categories[i]->GetName().size() > str.size())
		{
			
	 string str1 = Categories[i]->GetName();
     string str2 = str;
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "Category = "+ Categories[i]->GetName() + "\n"; 
        }
		
		}

		else if(Categories[i]->GetName().size() <= str.size())
		{
	string str1 = str;
    string str2 = Categories[i]->GetName();
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "Category = "+ Categories[i]->GetName() + "\n"; 
        }
		
		}

		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

		for(int count = 0 ; count < Categories[i]->gettotalsubs() ; count++)
		{
			Categories.push_back(Categories[i]->GetSubCategory(count));
		
		}


		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		

		//------------------------------------------------------//Topic
		for(int q = 0 ; q < Categories[i]->gettotaltopics();q++)
		{

			//------------------
			if(Categories[i]->GetTopic(q)->GetName().size() > str.size())
		{
			
	 string str1 = Categories[i]->GetTopic(q)->GetName();
     string str2 = str;
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "Topic = "+ Categories[i]->GetTopic(q)->GetName() + "\n"; 
        }
		
		}

		else if(Categories[i]->GetTopic(q)->GetName().size() <= str.size())
		{
	string str1 = str;
    string str2 = Categories[i]->GetTopic(q)->GetName();
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "Topic = "+ Categories[i]->GetTopic(q)->GetName() + "\n"; 
        }
		
		}

			//-------------------------

			for(int r = 0 ; r < Categories[i]->GetTopic(q)->gettotalmsg();r++)
		{

			if((Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject())[0] != 'R' && (Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject())[1] != 'E')
			{
				if(Categories[i]->GetTopic(q)->GetMessage(r)->GetBody().size() > str.size())
		{
			
			string str1 = Categories[i]->GetTopic(q)->GetMessage(r)->GetBody();
     string str2 = str;
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "body of Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetAuthor() + "\n"; 
		s = s + "body of Subject = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject() + "\n"; 
		s = s + "body of message = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetBody() + "\n"; 
        }
		
		}

				else if(Categories[i]->GetTopic(q)->GetMessage(r)->GetBody().size() <= str.size())
		{
	string str1 = str;
	string str2 = Categories[i]->GetTopic(q)->GetMessage(r)->GetBody();
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
	    s = s + "body of Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetAuthor() + "\n"; 
		s = s + "body of Subject = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject() + "\n"; 
		s = s + "body of message = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetBody() + "\n"; 
        }
		
		}
			
			}






			//----------------------------------------------------------------------------------REPLY
			else
			{
				string sub ;
				for(int v = 2 ; v < Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject().size(); v++)
				{
					sub = sub + (Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject())[v];
				
				}
				if(Categories[i]->GetTopic(q)->GetMessage(r)->GetBody().size() > str.size())
		{
			
	string str1 = Categories[i]->GetTopic(q)->GetMessage(r)->GetBody();
    string str2 = str;
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "body of main Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->getReplyof()->GetAuthor() + "\n";
		s = s + "body of main body = "+ Categories[i]->GetTopic(q)->GetMessage(r)->getReplyof()->GetBody() + "\n";

		s = s + "body of Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetAuthor() + "\n"; 
		s = s + "body of Subject = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject() + "\n"; 
		s = s + "body of message = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetBody() + "\n"; 
        }
		
		}

				else if(Categories[i]->GetTopic(q)->GetMessage(r)->GetBody().size() <= str.size())
		{
	string str1 = str;
	string str2 = Categories[i]->GetTopic(q)->GetMessage(r)->GetBody();
	int size1 = str.size();
	int size2 = str2.size();
	
	

    size_t found = str1.find(str2);
    if(found!=string::npos){ 
		s = s + "body of main Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->getReplyof()->GetAuthor() + "\n";
		s = s + "body of main body = "+ Categories[i]->GetTopic(q)->GetMessage(r)->getReplyof()->GetBody() + "\n";

	    s = s + "body of Author = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetAuthor() + "\n"; 
		s = s + "body of Subject = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetSubject() + "\n"; 
		s = s + "body of message = "+ Categories[i]->GetTopic(q)->GetMessage(r)->GetBody() + "\n"; 
        }
		
		}
			
			}
			//-----------------------------------------------------------------------------------
			

			//-------------------------
	
		}
	
		}

		//------------------------------------------------------

		//------------------------------------------------/////////////////////////////////////////////-------Messages

		

		//---------------------------------------------------------

		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

		for(int count = 0 ; count < Categories[i]->gettotalsubs() ; count++)
		{
			//Categories.pop_back();
		
		}


		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	}



	std::cout<<s;
}
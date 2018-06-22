# ifndef MESSAGE_H
# define MESSAGE_H
# include <string>

using namespace std;

class Message
{
	string Author;
	string Body;
	string Subject;

public:
	Message();
	string GetAuthor();
	string GetBody();
	virtual string GetSubject();
	void SetMessage(string,string,string);

	virtual Message* getReplyof();
};

# endif
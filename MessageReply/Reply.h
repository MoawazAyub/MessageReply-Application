# ifndef REPLY_H
# define REPLY_H
# include "Message.h"

class Reply:public Message
{
	
public:
	Message * Replyof;
	Reply();
	string GetSubject();
	Message* getReplyof();
	void SetMessage(string,string,string);

};

# endif
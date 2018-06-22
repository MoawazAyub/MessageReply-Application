# include  "Reply.h"

Reply::Reply()
{

}

string Reply::GetSubject()
{
	return ("RE" + Message::GetSubject());

}

Message * Reply::getReplyof()
{
	return Replyof;

}

void Reply::SetMessage(string a, string b , string c)
{
	Message::SetMessage(a,b,c);

}
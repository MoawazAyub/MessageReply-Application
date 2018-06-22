# include "Message.h"

Message::Message()
{

}

string Message::GetAuthor()
{
	return Author;

}

string Message::GetBody()
{
	return Body;

}

string Message::GetSubject()
{
	return Subject;

}

void Message::SetMessage(string a, string b, string c)
{
	Author  = a;
	Body    = b;
	Subject = c;

}

Message * Message::getReplyof()
{
	return nullptr;
}

# include "Topic.h"

Topic::Topic()
{

}

string Topic::GetName()
{
	return TopicName;

}

void Topic::SetName(string name)
{
	TopicName = name;

}

void Topic::ADDmessage(Message* m)
{
	Messages.push_back(m);

}

Message * Topic::GetMessage(int i)
{
	return Messages[i];

}

int Topic::gettotalmsg()
{
	return Messages.size();

}
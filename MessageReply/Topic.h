# ifndef TOPIC_H
# define TOPIC_H 

# include <vector>
//# include <string>
# include"Message.h"

using namespace std;

class Topic
{
	string TopicName;
	vector<Message*> Messages;

public:
	Topic();
	string GetName();

	void SetName(string);
	void ADDmessage(Message*);

	Message* GetMessage(int);

	int gettotalmsg();
};

# endif

# pragma once
# include <iostream>
# include "Forum.h"
# include "Reply.h"

using namespace std;

void main()
{

	Forum * f1 = new Forum;
	Category * c1 = new Category;
	Category * c2 = new Category;
	Topic * t1 = new Topic;
	Topic * t2 = new Topic;
	Topic * t3 = new Topic;
	Message * m1 = new Message;
	Message * m2 = new Message;
	Reply * r2 = new Reply;
	Reply * r3 = new Reply;

	r2->SetMessage("food","Paksitan is good","soda");
	r3->SetMessage("foaoaad","sitan aiiiiii good","saaaoda");
	
	r2->Replyof = m1;
	r3->Replyof = m1;

	c1->SetName("Pakistan");
	c2->SetName("Panjulu");
	c1->ADDsubcategory(c2);

	t1->SetName("TerrorPakism");
	t2->SetName("penPaksion");
	m1->SetMessage("ali","i am very sad tomarPakrow anothor killing has occured every one is terrified","killing");
	m2->SetMessage("aliyas","Pakistan is awesome","doomsday");

	f1->SetName("stack over flow");
	t1->ADDmessage(m1);
	t1->ADDmessage(r2);
	t1->ADDmessage(r3);
	t1->ADDmessage(m2);
	t2->ADDmessage(m2);
	c1->ADDtopic(t1);
	c2->ADDtopic(t2);
	f1->ADDcategory(c1);
	f1->ADDcategory(c2);

	f1->SEARCH("Pa");

	int x = 9;
	cin >> x;


}
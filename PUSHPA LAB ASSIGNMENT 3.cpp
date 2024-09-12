#define MAXSIZE 3
using namespace std;
int cirqueue[MAXSIZE],front=-1,rear=-1;//we considering that queue is empty
int insert()
{
	int ele;
	if((rear+1)%MAXSIZE == front)//checking queue is empty or full
	{
		cout<<" queue is full";
	}
	else 
	{
		rear=(rear+1)%MAXSIZE;
		if(front ==-1)
		{
			front=0;// we want to increament the value of front
		}
		cout<<"enter the element you want to insert";
		cin>>ele;
		cirqueue[rear]=ele;
		cout<<ele<<"is insrted at"<<rear;
	}
}
int del()
{
	int ele;
	if(front == rear)//checking the queue is empty
	{
		cout<<"Queue is empty";	
	}
	else
	{
		ele=cirqueue[front];
		(front+1)%MAXSIZE;
		cout<<endl<<ele<<"is deleted";
	}
}
int display()
{
	int f= front,r=rear;
	if(front == -1)
	{
		cout<<" Queue is empty"<<endl;	
	}
	cout<<"Queue Elements are :\n";
	for(int i=front;i<=rear;i++)
	{
		cout<<cirqueue[i];
	}
}

int main()
{
	int i;
	while(true)//for continue asking operation
	{
		cout<<endl<<"for inserting press 1"<<endl;
		cout<<" for display press 2"<<endl;
		cout<<"for deleting press 3"<<endl;
		cout<<" for exit press 4"<<endl;
		cin>>i;//taking input from user
		switch(i)
		{
			case 1:
				insert();
				break; //to execute one by one 
			case 2:
				display();
				break;
			case 3:
				del();
				break;
			case 4:
				cout<<" exit the program"<<endl;
		}
	}
	return 0;	
}
















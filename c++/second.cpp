#include<iostream>
#define SIZE 2
using namespace std;
class Stack{
	int n[SIZE];
	int top;
	public :
			Stack(){
				top=-1;//Initialization with stack empty
			}
			class Full{};
			class Empty{};
			void push(int);
			int pop();
			int peek();
			void display();
};
void Stack::push(int k){
	if(top==SIZE-1)
	{	
		throw Full();
	}
	n[++top]=k;
}
int Stack::pop(){
	if(top==-1)
	{	
		throw Empty();
	}
	return n[top--];
}
int Stack::peek(){
	if(top==-1)
	{	
		throw Empty();
	}
	return n[top];
}
void Stack::display(){
	int c;
	if(top!=-1)
	for(c=top;c>=0;c--)
		cout<<"\n"<<n[c];
	else
		throw Empty();
}

int main(){
	Stack o;
	int ch,k;
	try{
	do{
		cout<<"\nEnter choice for stack operation";
		cout<<"\n1. Push";
		cout<<"\n2. Pop";
		cout<<"\n3. Peek";
		cout<<"\n4. Display";
		cout<<"\n5. Exit";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter Key";
				cin>>k;
				o.push(k);
				break;
			case 2:
				k=o.pop();
				if(k!=-9999)
				cout<<"\nThe Value popped is:"<<k;
				break;
			case 3:
				k=o.peek();
				if(k!=-9999)
				cout<<"\nThe Value peek is:"<<k;
				break;
			case 4:
				o.display();
				break;
			case 5:
				cout<<"\nBye for Now";
				break;
			default:
				cout<<"\nWrong choice";
				break;
		}
				
	}
    while(ch!=5);
	}
    catch(Stack::Full f){
		cout<<"\nException caught with full";
	}
	catch(Stack::Empty e){
		cout<<"\nException caught with Empty";
	}
}
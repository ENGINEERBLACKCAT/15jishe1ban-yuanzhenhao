#include <iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if((x%7==0)||(x%3==0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
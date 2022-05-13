#include <iostream>
using namespace std;
class complexnum
{
	int x,y;
	
	int real,imaginary;
	public:
		complexnum()
	{
		real=0;imaginary=0;
	}
	complexnum(int x,int y)
	{
		real=x;imaginary=y;
	}
	void read()
	{
		cout<<"Enter real part:"<<endl;
		cin>>real;
		cout<<"Enter imaginary part:"<<endl;
		cin>>imaginary;
	}
	void display()
	{
		if(imaginary<0)
		cout<<real<<imaginary<<"i"<<endl;
		else 
		cout<<real<<"+"<<imaginary<<"i"<<endl;
	}
	complexnum addcomplex(complexnum c2)
	{
		complexnum c3;
		c3.real=real+c2.real;
		c3.imaginary=imaginary+c2.imaginary;
		return c3;
	}
	complexnum subcomplex(complexnum c2)
	{
		complexnum c4;
		c4.real=real-c2.real;
		c4.imaginary=imaginary-c2.imaginary;
		return c4;
	}
	complexnum conjugate()
	{
		complexnum c5;
		c5.real=real;
		c5.imaginary=0-imaginary;
		return c5;
	}
	
};
	int main()
	{
		complexnum c1,c2,c3,c4,c5;
		c1.read();
		c2.read();
	    c1.display();
	    c2.display();
	    
		c3=c1.addcomplex(c2);
		c4=c1.subcomplex(c2);
		c3.display();
		c4.display();
		c5.read();
		c5=c5.conjugate();
		c5.display();

        return 0;
			
	}
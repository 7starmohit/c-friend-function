#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	public:
		void set_data(int w1,int w2)
		{
			a=w1;
			b=w2;
		}
		friend complex sumof_complex(complex q1,complex q2);
		void printdata(void)
		{
			cout<<"the complex number is :"<<a<<" + "<<b<<"i"<<endl;
		}
};

complex sumof_complex(complex q1,complex q2)
{
	complex q3;
	q3.set_data((q1.a+q2.a),(q1.b+q2.b));
	return q3;
}
int main()
{
	complex n1,n2,sum;
	n1.set_data(2,3);
	n1.printdata();
	
	n2.set_data(4,7);
	n2.printdata();
	
	sum=sumof_complex(n1,n2);
	sum.printdata();
	
	return 0;
	
}

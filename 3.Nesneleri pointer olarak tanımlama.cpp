#include <iostream>

using namespace std;

class nokta
{
	public:
	
	int x,y;
	
	void degerata(int _x,int _y)
	{
		x=_x;
		
		y=_y;
	}
	
	void ekranayaz()
	{
		cout<<x<<","<<y<<endl;
	}
};

int main ()
{
	nokta n1,n2,*n3;
	
	n3=&n2;
	
	n1.degerata(10,20);
	
	n1.ekranayaz();
	
	n2.degerata(24,47);
	
	n2.ekranayaz();
	
	cout<<"n3 pointeri ile yazılan deger:";
	
	n3->ekranayaz();
	
	return 0;
}

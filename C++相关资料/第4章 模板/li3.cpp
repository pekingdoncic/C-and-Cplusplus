#include <iostream>
using namespace std;

template <class T, int N> 
class ABC{
private:
	T array[N];
public:
	void set(T base);
	void get();
	
};

template <class T, int N>
void ABC<T,N>::set(T base)
	{
		for(int i = 0;i<N;i++)
			array[i] = base + i;
	}

template <class T, int N>
void ABC<T,N>::get(){
		cout<<"����Ԫ������Ϊ��"<<N<<"\n";
		for(int i = 0; i<N;i++)
			cout<<array[i]<<" ";
		cout<<endl;
	}

int main()
{
	ABC <int,10> abc1;
	abc1.set(0);
	abc1.get();
	ABC <double, 20> abc2;
	abc2.set(100);
	abc2.get();
	
	return 0;
}
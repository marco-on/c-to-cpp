#include <iostream>
#include <array>

using namespace std;

const int N = 40;

template <class TIPO>
void sum(TIPO& p, const int n, array<TIPO, N> d)
{
	p=0;
	for(int i = 0; i < n; ++i)
		p = p + d[i];
}

int main()
{
	int accum = 0;
	array<int,3> myarray {10,20,30}; //int myarray[3] = {10,20,30};
	array<int, N> data;
	//int data[N];
	
	
	for(int i = 0; i < N; ++i)
		data[i] = i;
	
	sum(accum, N, data);
	cout << "sum is " << accum << endl;
	return 0;
}
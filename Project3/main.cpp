#include <iostream>
using namespace std;

class Numbers
{
	int size;
	long* arr;
public:
	Numbers(int size)
	{
		this->size = size;
		this->arr = new long[size];
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 1) arr[i] = i - 2;
			else  arr[i] = i + 5;
		}
	}
	Numbers(const Numbers &other)
	{
		this->size = other.size;
		this->arr = new long[other.size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}
		long result = 0;
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 1) result += this->arr[i];
		}
        cout << " Result= " << result;
	}
	~Numbers()
	{
		delete[] arr;
	}
};

int main()
{
      Numbers a(9);
      Numbers b(a);
}





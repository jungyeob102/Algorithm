#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <string>
using namespace std;

template<typename T>
class Stack
{
public:
	void push(const T& value)
	{
		_container.push_back(value);
	}

	void pop()
	{
		_container.pop_back();
	}

	T& top()
	{
		return _container.back();
	}

	bool empty() { return _container.empty(); }
	int size() { return _container.size(); }

private:
	vector<T> _container;
};

int main()
{
	
}
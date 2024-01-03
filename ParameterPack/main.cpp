#include <iostream>

using namespace std;

template <class... T>
auto add(T... args)
{
	//return (1 + ... + args);
	//return (args + ... + 1);
	//return ((3 + args) + ...);
	return (... + args);
}

template <class... T>
auto printArgs(T... args)
{
	((std::cout << args << ' '), ...);
}

int main()
{
	auto result = add(1, 2, 3.5);
	cout << result << '\n';

	printArgs(1, 2, 3);

	return 0;
}
#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <algorithm>

static void	subjectTest(void);
static void	sortTest(void);

int	main(void)
{
	std::cout << "Subject Main:\n";
	subjectTest();
	std::cout << "\n\nAlgorithm test\n";
	sortTest();
	return (0);
}

static void	subjectTest(void)
{
	std::cout << "Mutant Stack:\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "List:\n";
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << "Vector:\n";
	{
		std::vector<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::vector<int>::iterator it = mstack.begin();
		std::vector<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::vector<int> s(mstack);
	}
}

static void	sortTest(void)
{
	{
		MutantStack<int>	mstack;

		for (int i = 5; i > 0; i--)
			mstack.push(i);
		std::sort(mstack.begin(), mstack.end());
		std::cout << "Sorted vector:\n";
		MutantStack<int>::iterator it = mstack.begin();
		while (it != mstack.end())
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		MutantStack<std::string>	mstack;

		mstack.push("Hello World!");
		mstack.push("I AM ROBOT!");
		mstack.push("We ate the penguin!");
		mstack.push("123 Test 123");
		mstack.push("Countdown till apocalypse: 5, 4, ERROR, Apocalypse NOW!");
		std::sort(mstack.begin(), mstack.end());
		std::cout << "Sorted stack:\n";
		MutantStack<std::string>::iterator it = mstack.begin();
		while (it != mstack.end())
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
}

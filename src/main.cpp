#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <queue>


#include "sort.h"
#include "queue.h"
#include "stack.h"
#include "array.h"


void test_containers();
void test_sort_algorithms();


int main()
{
	test_containers();
	test_sort_algorithms();
	return 0;
}

void test_containers()
{
	std::cout << "\n\n-----ARRAY TESTING-----" << std::endl;
	custom::array<int, 3> a1 = { 1, 2, 3}, a3 = {7, 8, 9};
	std::array<int, 3> a2 = { 4, 5, 6};

	a1 = a3;
	for (std::size_t i = 0; i < a1.size(); ++i)
	{
		std::cout << "custom item[" << i << "]:" << a1.at(i) << std::endl;
		std::cout << "std item[" << i << "]:" << a2.at(i) << std::endl;
	}
	a1.fill(666);	
	int i = 0;
	for (auto &it : a1)
	{
		std::cout << "custom item[" << i << "]:" << it << std::endl;
		i++;
	}
	std::cout << "\n\n-----QUEUE TESTING-----" << std::endl;
	custom::queue<int> q1, q3;
	std::queue<int> q2;

	q3.push(10);
	q3.push(15);
	q2.push(10);
	q2.push(15);

	q1 = q3;
	std::cout << "total elements:" << q1.size() << std::endl;
	while (!q1.empty())
	{
		std::cout << "custom queue:" << q1.front() << std::endl;
		std::cout << "std queue:" << q2.front() << std::endl;
		q1.pop();
		q2.pop();
	}




	std::cout << "\n\n-----STACK TESTING-----" << std::endl;
	custom::stack<int> s1, s3;
	std::stack<int> s2;

	s3.push(10);
	s3.push(15);
	s2.push(10);
	s2.push(15);

	s1 = s3;
	std::cout << "total elements:" << s1.size() << std::endl;
	while (!s1.empty())
	{
		std::cout << "custom stack:" << s1.top() << std::endl;
		std::cout << "std stack:" << s2.top() << std::endl;
		s1.pop();
		s2.pop();
	}

}

void test_sort_algorithms()
{
	std::cout << "\n\n-----SORTING ALGORITHMS TESTING-----" << std::endl;
	int values[] = {55, 10, 44, 99, 34};

	std::vector<int> v;
	v.insert(v.end(), values, values + 5);
	custom::bubble_sort<int>(v.begin(), v.end());
	std::cout << "Bubble Sort:";
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		std::cout << (i ? " " : "") << v[i];
	}
	std::cout << std::endl;
	v.clear();
	v.insert(v.end(), values, values + 5);
	custom::insertion_sort<int>(v.begin(), v.end());
	std::cout << "Insetion Sort:";
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		std::cout << (i ? " " : "") << v[i];
	}
	std::cout << std::endl;
	v.clear();
	v.insert(v.end(), values, values + 5);
	custom::selection_sort<int>(v.begin(), v.end());
	std::cout << "Selection Sort:";
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		std::cout << (i ? " " : "") << v[i];
	}
	std::cout << std::endl;
	v.clear();
	v.insert(v.end(), values, values + 5);
	custom::quick_sort<int>(v.begin(), v.end());
	std::cout << "Quick Sort:";
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		std::cout << (i ? " " : "") << v[i];
	}
	std::cout << std::endl;
	v.clear();
	v.insert(v.end(), values, values + 5);
	custom::merge_sort<int>(v.begin(), v.end());
	std::cout << "Merge Sort:";
	for (std::size_t i = 0; i < v.size(); ++i)
	{
		std::cout << (i ? " " : "") << v[i];
	}
	std::cout << std::endl;

}
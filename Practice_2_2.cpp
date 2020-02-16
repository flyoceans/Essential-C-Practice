#include <iostream>
#include <string>
#include <vector>

using namespace std; 
const vector<int>* penta_seq(int);
void display(const vector<int> &);


int main()
{
	cout << "please enter";
	int size;
	cin >> size;
	const vector<int> * pseq = penta_seq(size);
	display(*pseq);
	return 0;
}

void display(const vector<int> &vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
}

const vector<int>* penta_seq(int size)
{
	static vector<int> seq;
	for (int i = seq.size(); i < size; i++)
	{
		if (i == 0)
			seq.push_back(1);
		else
			seq.push_back(i * (3 * i - 1) / 2);

	}
	return &seq;
}
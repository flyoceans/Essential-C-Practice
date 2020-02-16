#include <iostream>
#include <string>
#include <vector>

using namespace std; 
bool penta_seq(int size, vector<int> &seq);
void display(vector<int> &vec, const string &words);


int main()
{
	cout << "please enter ";
	int size;
	cin >> size;
	vector<int> seq;
	if (penta_seq(size, seq))
		display(seq, "haha");
	return 0;
}

void display(vector<int> &vec, const string &words)
{
	cout << words  << "\n";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
}

bool penta_seq(int size, vector<int> &seq)
{
	if (size < 0 || size > 64)
	{
		cout << "Invalid" << "\n";
		return false;
	}
	for (int i = seq.size() + 1; i <= size; i++)
	{
		seq.push_back(i * (3 * i - 1) / 2);

	}
	return true;
}
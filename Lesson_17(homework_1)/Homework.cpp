#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort_by_Letter(const std::string& str_1, const std::string& str_2)
{
	return str_1 < str_2;
}

void Show(vector<string> const obj)
{
	for (auto& element : obj)
	{
		cout << element << ' ';
	}
}

int main()
{
	vector<string> obj{ "Asd", "Adr", "Ioa", "A", "Uoa", "Ta"};
	sort(obj.begin(), obj.end(), Sort_by_Letter);
	Show(obj);

	return 0;
}
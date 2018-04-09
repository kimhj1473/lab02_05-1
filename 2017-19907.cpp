#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool greater(int a, int b) { return a > b; }

void main() {
	vector<int> nums;

	int input;
	while (cin >> input) {
		nums.push_back(input);
	}
	
	sort(nums.begin(), nums.end(), greater);

	cout << "ordered array" << endl;
	for (auto num : nums) {
		cout << num << " ";
	}
	cout << endl;

	system("pause");

}

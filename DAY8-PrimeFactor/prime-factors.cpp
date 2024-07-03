#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int n) {
		vector<int> result = {};
		if (n == 2)
			result.push_back(2);
		if (n == 3)
			result.push_back(3);

		return result;
	}
};
#include <iostream>
#include <string>

using namespace std;
class String
{
private:
	string val;
public:
	String(string i) :val(i) {};
	void Out() {
		cout << val << "\n";
	}
	const int operator > (const String& right) { //���������
		int j = 0;
		int l = (int)((val.length() < right.val.length()) ? val.length() : right.val.length()); //��������� ���� �����
		for (int i = 0; i < l; i++) {
			j = (int)(val[i]) - right.val[i];
			if (j != 0) break; //���� ����� �� �����, �� ������.
		}
		if ((j == 0) && (val.length() != right.val.length())) {

			j = (int)(((val.length() > right.val.length()) ? val : right.val)[l]);
		}
		return j;
	}

};




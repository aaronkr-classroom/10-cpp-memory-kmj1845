// concat_files.cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int fail_count = 0; // �� ���� ���� ����

	// ��� ������ ���� ����
	for (int i = 1; i < argc; ++i) {
		ifstream in(argv[i]);

		// ������ �����ϸ� ������ ����, �ƴϸ� ���� �޼��� ǥ��
		if (in) {
			string s;
			while (getline(cin, s))
				cout << s << endl;
		}
		else {
			cerr << "Cannot open file!" << argv[i] << "!" << endl;
			++fail_count;
		}
	}
	return fail_count;
}
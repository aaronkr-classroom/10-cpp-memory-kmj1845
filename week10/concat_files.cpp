// concat_files.cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int fail_count = 0; // 못 여는 파일 개수

	// 모든 파일을 열고 합쳐
	for (int i = 1; i < argc; ++i) {
		ifstream in(argv[i]);

		// 파일이 존재하면 내용을 쓰기, 아니면 오류 메세지 표시
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
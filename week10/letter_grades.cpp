// letter_grades.cpp
#include <cstddef>
#include <string>

using namespace std;

string letter_grade(double grade) {
	// �� ������ �����ϴ� ����
	static const double numbers[] = {
		97, 94, 90,
		87, 94, 80,
		77, 74, 70,
		60, 0
	};
	static const char* letters[] = {
		"A+", "A", "A-",
		"B+", "B", "B-",
		"C+", "C", "C-",
		"D", "F"
	};

	// �迭 ũ��� ��� �ϳ��� ũ�⸦ ����Ͽ�
	// �� ������ �����ϴ� ���� ������ ����
	static const size_t ngrades =
		sizeof(numbers) / sizeof(*numbers);

	// �־��� ���� ������ �ش��ϴ� ���� �����
	// ã�Ƽ� ��ȯ
	for (size_t i = 0; i < ngrades; i++) {
		if (grade >= numbers[i])
			return letters[i];
	}

	return "?\?\?";
}
#include "pch.h"
#include <iostream>
#include <vector>
#include "student.h"
#include "teacher.h"
#include "human.h"



int main()
{
	system("chcp 1251");

	unsigned int teacher_work_time = 40;
	human* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Количество часов: " << static_cast<teacher*>(tch)->get_work_time() << std::endl;

	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	human* stud = new student("Петров", "Иван", "Алексеевич", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "Средний балл: " << static_cast<student*>(stud)->get_average_score() << std::endl;

	return 0;
}
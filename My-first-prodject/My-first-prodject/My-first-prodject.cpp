

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void saveTasksToFile(const std::vector<std::string>& tasks, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& task : tasks) {
            file << task << std::endl;
        }
        file.close();
        std::cout << "Задачи успешно сохранены в файл " << filename << std::endl;
    }
    else {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    
    std::vector<std::string> tasks = {
        "Бег и тренировка на тренажерах",
        "Ответить подруге",
        "Сделать ДЗ ТОП академия",
        "Сходить на учебу",
        "Встреча с подругой"
    };

   
    std::cout << "Список дел: \n";
    for (const auto& task : tasks) {
        std::cout << task << std::endl;
    }

    
    std::string filename = "tasks.txt"; 
    saveTasksToFile(tasks, filename);

    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

struct Lecture {
    string title;
    int duration;
    string author;
};

struct LectureTitle {
    string specialization;
    string course;
    string week;
};

struct DetailedLecture {
    LectureTitle title;
    int duration;
};

void PrintLecture(const string& title, int duration) {
    cout << "Title: " << title << ", duration" << duration << "\n";
}

void PrintLecture(const Lecture& lecture) {
    cout << "Title: " << lecture.title 
    << ", duration: " << lecture.duration
    << ", author: " << lecture.author << endl;
}

void PrintCourse(
    const vector<string>& titles,
    const vector<int>& durations) {

    int i = 0;
    while (i < titles.size()) {
        PrintLecture(titles[i], durations[i]);
         ++i;
    }
}

void PrintCourse(const vector<Lecture>& lectures) {
    for (const Lecture& lecture : lectures) {
        PrintLecture(lecture);
    }
}

Lecture GetCurrentLecture() {
    return {"OOP", 5400, "Kashei Besmertnyi"};
};

int main() {
    Lecture lecture1;
    lecture1.title = "OOP";
    lecture1.duration = 5400;
    lecture1.author = "Ivan-durak";

    Lecture lecture2 = {"OOP", 5400, "Van'ka-vstan'ka"};

    PrintLecture(lecture1);
    PrintLecture(lecture2);

    PrintLecture({"OOP", 5400, "Alenushka"});

    Lecture current_lecture = GetCurrentLecture();

    LectureTitle title = {"C++", "Polimorphizm, Incapsulation, Inheritance", "OOP"};
    DetailedLecture lecture = {title, 5400};
}
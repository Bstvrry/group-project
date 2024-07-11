#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Student {
    string firstname;
    string surname;
    char gender;
    int age;
    int bbitGroup;
    vector<string> activities; // to store the activities chosen by the student
};

vector<Student> students; // to store all the students
vector<string> clubs = {"Journalism Club", "Red Cross Society", "AISEC", "Business Club", "Computer Science Club"}; // list of club/societies
vector<string> sports = {"Rugby", "Athletics", "Swimming", "Soccer"}; // list of sports

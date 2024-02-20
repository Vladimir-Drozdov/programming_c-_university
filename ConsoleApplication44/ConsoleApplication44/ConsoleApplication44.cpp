

#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    Student() {
        cout << this;
    };
    ~Student() {};
    void set_name(string name) {
        this->name = name;
    }
    string get_name() {
        return name;
    }
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }
    string get_last_name() {
        return last_name;
    }
    void set_age(int age) {
        if (age >= 17 && age < 100) {
            this->age = age;
        }
    }
    int get_age() {
        return age;
    }
    void set_course(int course) {
        if (course <= 4 && course >= 1) {
            this->course = course;
        }
    }
    int get_course() {
        return course;
    }
    void set_math_score(int math_score) {
        if (math_score <= 5 && math_score >= 1) {
            this->math_score = math_score;
        }
    }
    int get_math_score() {
        return math_score;
    }
    void set_geometry_score(int geometry_score) {
        if (geometry_score <= 5 && geometry_score >= 1) {
            this->geometry_score = geometry_score;
        }
    }
    int get_geometry_score() {
        return geometry_score;
    }
    void set_biology_score(int  biology_score) {
        if (biology_score <= 5 && biology_score >= 1) {
            this->biology_score = biology_score;
        }
    }
    int get_biology_score() {
        return  biology_score;
    }
    void set_physical_education_score(int  physical_education_score) {
        if (physical_education_score <= 5 && physical_education_score >= 1) {
            this->physical_education_score = physical_education_score;
        }
    }
    int get_physical_education_score() {
        return  physical_education_score;
    }
    void set_physics_score(int physics_score) {
        if (physics_score <= 5 && physics_score >= 1) {
            this->physics_score = physics_score;
        }
    }
    int get_physics_score() {
        return  physics_score;
    }
    
    int scores[5];
    void scores2() {
        scores[0] = math_score;
        scores[1] = geometry_score;
        scores[2] = biology_score;
        scores[3] = physical_education_score;
        scores[4] = physics_score;
    }
    void calculate_average_score() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        average_score = sum / 5;
    }
    void Print_average_score() {
        cout << average_score;
    }
    void Print_personal_data() {
        cout << "Имя" << name << endl << "Фамилия" << last_name << endl << "Возраст" << age << endl << "Вес" << weight << endl;
    }
    void set_weight(int weight) {
        if (weight <= 120 && weight >= 40) {
            this->weight = weight;
        }
    }
    int get_weight() {
        return weight;
    }
    string who_is_student() {
        string c;
        if (course == 1) {
            c = "Abiturient";
        }else
        if (course == 4) {
            c = "Bakalavr";
        }else
        if (course == 6) {
            c = "Magistr";
        }
        return c;
    }
    string Does_student_have_scholarship() {
        for (int i = 0; i < 5; i++) {
            if (scores[i] <= 3) {
                return "No";
                
            }
        }
        return "Yes";
    }
    int next_course_of_student() {
        if (course <= 3) {
            return course++;
        }
        
    }
    int previous_course_of_student() {
        if (course >1) {
            return course--;
        }

    }
    int max_score_of_student() {
        int maxx = 0;
        for (int i = 0; i < 5; i++) {
            if (scores[i] >maxx) {
                maxx = scores[i];

            }
        }
        return maxx;
    }
    void pubF()
    {
        privF();
    }
    void weight2() {
        weight_of_student();
    }
private:
    void privF()
    {
        cout << this << endl;
    }
    void weight_of_student() {
        cout << weight;
    }
    float average_score;
    string name;
    string last_name;
    int age;
    int course;
    int math_score;
    int geometry_score;
    int biology_score;
    int physical_education_score;
    int physics_score;
    int weight;
    
};
int main()
{

}



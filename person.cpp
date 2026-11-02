#include "iostream"
#include "string"
using namespace std;
class Person
{
    protected:
        string name;
   public:
        Person(const string& n) : name(n) {}
        void showName() const
        {
            cout << "Name: " << name << endl;
        }
        void setName(const string& n)
        {
            name = n;
        }
};
class student : public Person
{
    private:
        int grade;
    public:
        student(const string& n, int g) : Person(n), grade(g) {}
        void showStudentInfo() const
        {
            showName();
            cout << "Grade: " << grade << endl;
        }
        void setGrade(int g)
        {
            grade = g;
        }
};

int main()
{
    student s("Andi", 90);
    s.showStudentInfo();
    cout << "\n After update:" << endl;
    s.setName("Budi");
    s.setGrade(85);
    s.showStudentInfo();
    return 0;
}
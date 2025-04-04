#include <iostream>
#include <string>

using namespace std;

class Student 
{
private:
    string fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string groupNumber;
public:
    Student() 
    {
        fullName = "";
        birthDate = "";
        phoneNumber = "";
        city = "";
        country = "";
        university = "";
        universityCity = "";
        universityCountry = "";
        groupNumber = "";
    }
    void inputData() 
    {
        cout << "Enter full name: ";
        getline(cin, fullName);
        cout << "Enter birth date: ";
        getline(cin, birthDate);
        cout << "Enter phone number: ";
        getline(cin, phoneNumber);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter country: ";
        getline(cin, country);
        cout << "Enter university name: ";
        getline(cin, university);
        cout << "Enter university city: ";
        getline(cin, universityCity);
        cout << "Enter university country: ";
        getline(cin, universityCountry);
        cout << "Enter group number: ";
        getline(cin, groupNumber);
    }
    void displayData() const 
    {
        cout << "\nStudent Information:\n";
        cout << "Full Name: " << fullName << "\n";
        cout << "Birth Date: " << birthDate << "\n";
        cout << "Phone Number: " << phoneNumber << "\n";
        cout << "City: " << city << "\n";
        cout << "Country: " << country << "\n";
        cout << "University: " << university << "\n";
        cout << "University City: " << universityCity << "\n";
        cout << "University Country: " << universityCountry << "\n";
        cout << "Group Number: " << groupNumber << "\n";
    }
    string getFullName() const { return fullName; }
    string getBirthDate() const { return birthDate; }
    string getPhoneNumber() const { return phoneNumber; }
    string getCity() const { return city; }
    string getCountry() const { return country; }
    string getUniversity() const { return university; }
    string getUniversityCity() const { return universityCity; }
    string getUniversityCountry() const { return universityCountry; }
    string getGroupNumber() const { return groupNumber; }

    void setFullName(const string& name) { fullName = name; }
    void setBirthDate(const string& date) { birthDate = date; }
    void setPhoneNumber(const string& phone) { phoneNumber = phone; }
    void setCity(const string& c) { city = c; }
    void setCountry(const string& c) { country = c; }
    void setUniversity(const string& uni) { university = uni; }
    void setUniversityCity(const string& uniCity) { universityCity = uniCity; }
    void setUniversityCountry(const string& uniCountry) { universityCountry = uniCountry; }
    void setGroupNumber(const string& group) { groupNumber = group; }
};

int main() 
{
    Student student;
    student.inputData();
    student.displayData();
    
    return 0;
}
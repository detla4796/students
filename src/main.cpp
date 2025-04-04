#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Student 
{
private:
    char* fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string university;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    inline Student() : fullName(nullptr), birthDate(""), phoneNumber(""), city(""), country(""), university(""), universityCity(""), universityCountry(""), groupNumber("") {}
    Student(const char* name, string birth, string group) : birthDate(birth), phoneNumber(""), city(""), country(""), university(""), universityCity(""), universityCountry(""), groupNumber(group)
    {
        if (name)
        {
            fullName = new char[strlen(name) + 1];
            strcpy(fullName, name);
        }
        else
        {
            fullName = nullptr;
        }
    }

    ~Student()
    {
        delete[] fullName;
    }

    Student(const Student& other) : birthDate(other.birthDate), phoneNumber(other.phoneNumber), city(other.city), country(other.country), university(other.university), universityCity(other.universityCity), universityCountry(other.universityCountry), groupNumber(other.groupNumber) 
    {
        fullName = new char[strlen(other.fullName) + 1];
        strcpy(fullName, other.fullName);
    }

    Student& operator=(const Student& other) 
    {
        if (this != &other) {
            delete[] fullName;
            fullName = new char[strlen(other.fullName) + 1];
            strcpy(fullName, other.fullName);
            
            birthDate = other.birthDate;
            phoneNumber = other.phoneNumber;
            city = other.city;
            country = other.country;
            university = other.university;
            universityCity = other.universityCity;
            universityCountry = other.universityCountry;
            groupNumber = other.groupNumber;
        }
        return *this;
    }
    void inputData() 
    {
        char temp[100];
        cout << "Enter full name: ";
        cin.getline(temp, 100);
        
        delete[] fullName;
        fullName = new char[strlen(temp) + 1];
        strcpy(fullName, temp);

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
        cout << "Full Name: " << (fullName ? fullName : "Not set") << "\n";
        cout << "Birth Date: " << birthDate << "\n";
        cout << "Phone Number: " << phoneNumber << "\n";
        cout << "City: " << city << "\n";
        cout << "Country: " << country << "\n";
        cout << "University: " << university << "\n";
        cout << "University City: " << universityCity << "\n";
        cout << "University Country: " << universityCountry << "\n";
        cout << "Group Number: " << groupNumber << "\n";
    }

    inline const char* getFullName() const { return fullName; }
    inline string getBirthDate() const { return birthDate; }
    inline string getPhoneNumber() const { return phoneNumber; }
    inline string getCity() const { return city; }
    inline string getCountry() const { return country; }
    inline string getUniversity() const { return university; }
    inline string getUniversityCity() const { return universityCity; }
    inline string getUniversityCountry() const { return universityCountry; }
    inline string getGroupNumber() const { return groupNumber; }

    void setFullName(const char* name) 
    {
        delete[] fullName;
        if (name)
        {
            fullName = new char[strlen(name) + 1];
            strcpy(fullName, name);
        }
        else
        {
            fullName = nullptr;
        }
    }

    inline void setBirthDate(const string& date) { birthDate = date; }
    inline void setPhoneNumber(const string& phone) { phoneNumber = phone; }
    inline void setCity(const string& c) { city = c; }
    inline void setCountry(const string& c) { country = c; }
    inline void setUniversity(const string& uni) { university = uni; }
    inline void setUniversityCity(const string& uniCity) { universityCity = uniCity; }
    inline void setUniversityCountry(const string& uniCountry) { universityCountry = uniCountry; }
    inline void setGroupNumber(const string& group) { groupNumber = group; }
};

int main() 
{
    Student student1;
    student1.inputData();
    student1.displayData();

    Student student2("Danil U. I.", "2000-01-01", "RPO");
    student2.setPhoneNumber("1234567890");
    student2.setCity("Tyumen");
    student2.setCountry("Russia");
    student2.setUniversity("IT Top");
    student2.setUniversityCity("Tyumen");
    student2.setUniversityCountry("Russia");
    student2.displayData();
    
    return 0;
}
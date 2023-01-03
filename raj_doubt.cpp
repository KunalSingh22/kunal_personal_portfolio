#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class student 
{
    private:
    int  a;
    char firstname[50];
    char lastname[50];
    int stand;
    public:
    int set_age(int age)
    {
         
        a = age;
        return a;
    }
    char [] set_first_name(char *first_name)
    {
        for(int i=0; i<50; ++i)
        {
            firstname[i] = first_name[50];
        }
        return firstname[];
    }
    char [] set_last_name(char *last_name)
    {
        for(int i=0; i<50; ++i)

        {
            lastname[i] = last_name[50];
        }
        return lastname[50];
    }
    int  set_standard(int standard)
    {
        stand = standard;
        return stand;
    }
    
};

int main() {
    int age, standard;
    char first_name[50], last_name[50];
    
    cin >> age >> first_name >> last_name >> standard;
    
    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(&first_name[50]);
    st.set_last_name(&last_name[50]);
    
    cout << st.set_age() << "\n";
    cout << st.set_last_name() << ", " << st.set_first_name() << "\n";
    cout << st.set_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
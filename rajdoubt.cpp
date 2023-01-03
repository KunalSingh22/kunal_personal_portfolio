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
    string firstname;
    string lastname;
    int stand;
    public:
    int set_age(int age)
    {
         
        a = age;
        return a;
    }
     int  set_standard(int standard)
    {
        stand = standard;
        return stand;
    }
    string set_first_name(string &first_name)
    {
        for(int i=0; i<50; ++i)
        {
            firstname[i] = first_name[i];
        }
        return firstname;
    }
    string set_last_name(string &last_name)
    {
        for(int i=0; i<50; ++i)

        {
            lastname[i] = last_name[i];
        }
        return lastname;
    }
   
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age ;
    cin>> first_name;
    cin >> last_name ;
    cin>> standard;
    
    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.set_age(age) << "\n";
    cout << st.set_last_name(last_name) << ", " << st.set_first_name(first_name) << "\n";
    cout << st.set_standard(standard) << "\n";
    cout << "\n";
    // cout << st.to_string();
    
    return 0;
}
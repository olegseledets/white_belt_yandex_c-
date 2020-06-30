/*Реализуйте класс для человека, поддерживающий историю изменений
человеком своих фамилии и имени.

Считайте, что в каждый год может произойти не более одного изменения
фамилии и не более одного изменения имени. При этом с течением времени
могут открываться всё новые факты из прошлого человека, поэтому года́
в последовательных вызовах методов ChangeLastName и ChangeFirstName
не обязаны возрастать.

Гарантируется, что все имена и фамилии непусты.

Строка, возвращаемая методом GetFullName, должна содержать разделённые
одним пробелом имя и фамилию человека по состоянию на конец данного года.

Если к данному году не случилось ни одного изменения фамилии и имени,
верните строку "Incognito".
Если к данному году случилось изменение фамилии, но не было ни одного
изменения имени, верните "last_name with unknown first name".
Если к данному году случилось изменение имени, но не было ни одного
изменения фамилии, верните "first_name with unknown last name".
*/

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

using namespace std;

struct FullName {
    string firstName;
    string lastName;
};

class Person {
public:
    Person(const string& firstN, const string& lastN, const int& br) {
        people[br] = {firstN, lastN};
        brd = br;
        for (auto& i : people) {
            if (i.first < br) {
                people.erase(i.first);
            }
        }
    }
    void ChangeFirstName(int year, const string& first_name) {
        // добавить факт изменения имени на first_name в год year
        if (people.count(year) == 0) {
            people[year].lastName = "";
        }
        people[year].firstName = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
        if (people.count(year) == 0) {
            people[year].firstName = "";
        }
        people[year].lastName = last_name;
    }
    string GetFullName(int year) const {
        // получить имя и фамилию по состоянию на конец года year
        if (brd != 0 && year < brd) {
            return "No person";
        }
        if (people.size() == 0) { //если размер = 0
            return "Incognito"; //выводим Инкогнито
        }
        else {
            for (const auto& x : people) {
                if (year < x.first) {
                    return "Incognito";
                }
                break;
            }
        }
        string fn = "";
        string ln = "";

        for (const auto& e : people) {
            if ( e.first <= year && e.second.firstName != "") {
                fn = e.second.firstName;
            }
            if ( e.first <= year && e.second.lastName != "") {
                ln = e.second.lastName;
            }
        }
        if (fn == "") {
            return ln + " with unknown first name";
        }
        else if (ln == "") {
            return fn + " with unknown last name";
        }
        else {
            return fn + " " + ln;
        }

    }
    string GetFullNameWithHistory(int year) const {
        if (brd != 0 && year < brd) {
            return "No person";
        }
        // получить имя и фамилию по состоянию на конец года year
        if (people.size() == 0) { //если размер = 0
            return "Incognito"; //выводим Инкогнито
        }
        else {
            for (const auto& x : people) {
                if (year < x.first) {
                    return "Incognito";
                }
                break;
            }
        }
        string fn = "";
        string ln = "";
        vector <string> all_fn;
        vector <string> all_ln;

        for (const auto& e : people) {
            if ( e.first <= year && e.second.firstName != "") {
                if ( e.second.firstName != fn && fn != ""){
                    all_fn.push_back(fn);
                }
                fn = e.second.firstName;
            }
            if ( e.first <= year && e.second.lastName != "") {
                if ( e.second.lastName != ln && ln != ""){
                    all_ln.push_back(ln);
                }
                ln = e.second.lastName;
            }
        }

        string fn_string = "";
        string ln_string = "";

        if (all_ln.size() > 0) {
            ln_string += " (" + all_ln[all_ln.size() - 1];
            if (all_ln.size() > 1) {
                for (int i = all_ln.size() - 1 ; i > 0 ; --i) {
                    ln_string += ", " + all_ln[i-1];
                }
            }
            ln_string += ")";
        }

        if (all_fn.size() > 0) {
            fn_string += " (" + all_fn[all_fn.size() - 1];
            if (all_fn.size() > 1) {
                for (int i = all_fn.size() - 1 ; i > 0 ; --i) {
                    fn_string += ", " + all_fn[i-1];
                }
            }
            fn_string += ")";
        }


        if (fn == "") {
            return ln + ln_string + " with unknown first name";
        }
        else if (ln == "") {
            return fn + fn_string + " with unknown last name";
        }
        else {
            return fn + fn_string + " " + ln + ln_string;
        }

    }
private:
    map<int, FullName> people;
    int brd;
};

int main() {
  Person person("Polina", "Sergeeva", 1960);
  for (int year : {1959, 1960}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeFirstName(1965, "Appolinaria");
  person.ChangeLastName(1967, "Ivanova");
  for (int year : {1965, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  return 0;
}

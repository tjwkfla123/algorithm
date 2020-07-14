/* given list of 'phone numbers'
return false if any of the numbers 
are prefi xof another and return 
true if there is no such number */

#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {   
    for (int i = 0; i < phone_book.size(); i++) {
        for (int j = i + 1; j < phone_book.size(); j++) {
            string x = phone_book[i];
            string y = phone_book[j];
            int size;
            int check = 0;
            if (x.size() > y.size()) size = y.size();
            else size = x.size();
            for (int z = 0; z < size; z++) {
                if (x[z] == y[z]) check++;
            }
            if (check == size) return false;
        }
    }
    return true;
}

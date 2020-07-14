/* given participant array and completion array
return a participant who did not finish the race.
(There is only one person per race who does not finish) */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (int i  = 0; i < participant.size(); i++) {
        if (participant[i] != completion[i]) return participant[i];
    }
    return participant[participant.size() - 1];
}

#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> day;
    for (int i = 0; i < progresses.size(); ++i) {
        day.push_back((100 - progresses[i]) / speeds[i]);
    }
    int k = 0;
    int max_day = 0;
    for (int i = 0; i < day.size(); ++i) {
        if (i == day.size())
            break;
        if (day[i] >= max_day) {
            if (max_day != 0) {
                answer.push_back(++k);
                k = 0;
                max_day = 0;
            }


        }
        k++;
    }
    return answer;
}
int main() {
    vector<int> progresses = {93, 30, 55};
    vector<int> speeds = {1, 30, 5};
    vector<int> result = solution(progresses, speeds);
    return 0;
}
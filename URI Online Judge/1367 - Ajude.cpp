
#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main(void) {
    int n, time, solved, wa;
    string problem, v;
    map<string, int> submissions, last_submission_time;
    map<string, int>::iterator submissions_it, last_submission_time_it;
    map<string, bool> verdict;
    map<string, bool>::iterator verdict_it;
    
    while (cin >> n && n) {
        submissions.clear();
        last_submission_time.clear();
        verdict.clear();
        
        for (int i = 0; i < n; i++) {
            cin >> problem >> time >> v;
            submissions_it = submissions.find(problem);
            last_submission_time_it = last_submission_time.find(problem);
            verdict_it = verdict.find(problem);
            
            if (submissions_it != submissions.end()) {
                submissions_it->second++;
                if (v == "correct") {
                   last_submission_time_it->second = time;
                   verdict_it->second = true;
                }
            } else {
                submissions[problem] = 1;
                last_submission_time[problem] = time;
                verdict[problem] = (v == "correct") ? true : false;
            }
        }
        
        solved = 0;
        time = 0;
        wa = 0;
        
        for (verdict_it = verdict.begin(); verdict_it != verdict.end(); verdict_it++) {
            if (verdict_it->second) {
                solved++;
                wa += (submissions.find(verdict_it->first)->second - 1);
                time += last_submission_time.find(verdict_it->first)->second;
            }
        }
        
        time += wa * 20;
        
        cout << solved << " " << time << endl;
    }
    
    return 0;
}

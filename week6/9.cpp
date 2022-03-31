#include <iostream>
#include <vector>

using namespace std;

vector<string> generateParenthesis(int n)
{
    vector<string> two;
    vector<string> ans;
    if (n == 1) {
        two.push_back("{}");
        return two;
    } 
    if (n == 2) {
        two.push_back("{{}}");
        two.push_back("{}{}");
        return two;
    } 
 
    two = generateParenthesis(n - 1);
        
    for (int i = 0; i < two.size(); i++) {
        string buf = "{", bug = "{", bus = "{";
        buf = buf + two[i] + "}";
        bug = bug + "}" + two[i];
        bus = two[i] + bus + "}";
        ans.push_back(buf);
        ans.push_back(bus);
        ans.push_back(bug);
    }
 
    ans.pop_back();
    return ans;
}

int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        vector<string>ff; 
        ff = generateParenthesis(i); 
        for (int j = 0; j < ff.size(); ++j) {
            cout << ff[j] << endl;
            }
        }
    return 0;
   }
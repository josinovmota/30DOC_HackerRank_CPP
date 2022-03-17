#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);
    map<string,string> map;
    string dom = "@gmail.com";

    int N = stoi(ltrim(rtrim(N_temp)));

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];
        string emailID = first_multiple_input[1];
        
        map.insert(pair<string,string>(emailID,firstName));
    }
    //FILTRAR
    vector<string> nomes;
    for_each(map.begin(),map.end(),[dom, &nomes](pair<string,string>uau){
        size_t k = uau.first.rfind(dom);
        if(k != string::npos){
            nomes.push_back(uau.second);
        }
    });
    //ORDENAR
    sort(nomes.begin(),nomes.end());
    //APRESENTAR
    for_each(nomes.begin(), nomes.end(), [](string batatas){ cout << batatas << endl; });

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

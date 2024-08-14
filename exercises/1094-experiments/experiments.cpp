#include <iostream>

using namespace std;

int main() {
    int n, quantity;
    int total = 0;
    int t_rabbit = 0;
    int t_frog = 0;
    int t_rat = 0;
    double p_rabbit = 0;
    double p_frog = 0;
    double p_rat = 0;
    string animal;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> quantity >> animal;
        total += quantity;
        if (animal == "C") {
            t_rabbit += quantity;
        } else if (animal == "R") {
            t_rat += quantity;
        } else if (animal == "S") {
            t_frog += quantity;
        }
    }
    p_rabbit = (100.0*t_rabbit/total);
    p_rat = (100.0*t_rat/total);
    p_frog = (100.0*t_frog/total);
    cout.precision(2);
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << t_rabbit << endl;
    cout << "Total de ratos: " << t_rat << endl;
    cout << "Total de sapos: " << t_frog << endl;
    cout << "Percentual de coelhos: " << fixed << p_rabbit << " %" << endl;
    cout << "Percentual de ratos: " << fixed << p_rat << " %" << endl;
    cout << "Percentual de sapos: " << fixed << p_frog << " %" << endl;
    return 0;
}
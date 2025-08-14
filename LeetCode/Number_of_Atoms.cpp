#include <bits/stdc++.h>
using namespace std;

string countOfAtoms(string formula) {

    
}

int main(){
    string formula = "H2O";
    cout << countOfAtoms(formula) << endl; // Expected output: "H2O"

    formula = "Mg(OH)2";
    cout << countOfAtoms(formula) << endl; // Expected output: "H2MgO2"

    formula = "K4(ON(SO3)2)2";
    cout << countOfAtoms(formula) << endl; // Expected output: "K4N2O14S4"

    return 0;
}
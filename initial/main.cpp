/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "study_in_pink1.h"

using namespace std;

void sa_tc_01() {
    cout << "----- Sample Testcase 01 -----" << endl;
    string input_file("sa_tc_01_input");
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

    // cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", E1: " << E1 << endl;
    // int result = firstMeet(EXP1, EXP2, E1);
    // cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", result: " << result << endl;

    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", E2: " << E2 << endl;
    // int result = traceLuggage(HP1, EXP1, M1, E2);
    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", result: " << result << endl;

    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", HP2: " << HP2 << ", EXP2: " << EXP2 << ", E3: " << E3 << endl;
    // int result = chaseTaxi(HP1, EXP1, HP2, EXP2, E3);
    // cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", HP2: " << HP2 << ", EXP2: " << EXP2 << ", result: " << result << endl;
    
    // cout << "----- Sample Testcase 05 -----" << endl;
    // int E3 = 59, HP1 = 400, EXP1 = 600, HP2 = 350, EXP2 = 500;
    // cout << "E3: " << E3 << ", HP1: " << HP1 << ", EXP1: " << EXP1
    //     << ", HP2: " << HP2 << ", EXP2: " << EXP2 << endl;
    // int result = chaseTaxi(HP1, EXP1, HP2, EXP2, E3);
    // cout << "E3: " << E3 << ", HP1: " << HP1 << ", EXP1: " << EXP1
    //     << ", HP2: " << HP2 << ", EXP2: " << EXP2
    //     << ", result: " << result
    //     << endl;

    // cout << "----- Sample Testcase 06 -----" << endl;
    // char email[] = "egc@dgf";
    // char s[] = "c$BcAA!!a";
    // cout << "email: " << email << ", s: " << s << endl;
    // int result = checkPassword(s, email);
    // cout << "email: " << email << ", s: " << s << ", result: " << result << endl;

    cout << "----- Sample Testcase 08 -----" << endl;
    const char * arr_pwds[] = {"votienXX", "votien10", "votien", "votien10", "votien", "votienXX", "votien", "votienEEE", "votienEEE", "votienEEE"};
    int num_pwds = 10;
    cout << "num_pwds: " << num_pwds << endl;
    int result = findCorrectPassword(arr_pwds, num_pwds);
    cout << "num_pwds: " << num_pwds << ", result: " << result << endl;
}
int main(int argc, const char * argv[]) {
    sa_tc_01();

    return 0;
}
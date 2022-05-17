//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sp4.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <chrono>
using namespace std;
//using namespace std::chrono;

static void test_15() {
    vector<double> vec50000{istream_iterator<double>(cin), istream_iterator<double>()};
    vector<double> vec5000{begin(vec50000), next(begin(vec50000), 5000)};
    vector<double> vec500{begin(vec50000), next(begin(vec50000), 500)};
    vector<double> vec50{begin(vec50000), next(begin(vec50000), 50)};
    auto start = chrono::high_resolution_clock::now();
    auto [f1, l1] = get_par_lejano(vec50000);
    auto end = chrono::high_resolution_clock::now();
    cout << fabs(f1 - l1) << " -> " << f1 << " " << l1 << endl;
    chrono::duration<double, std::milli> m1 = (end - start) / 50000.0;
    start = chrono::high_resolution_clock::now();
    auto [f2, l2] = get_par_lejano(vec5000);
    end = chrono::high_resolution_clock::now();
    cout << fabs(f2 - l2) << " -> " << f2 << " " << l2 << endl;
    chrono::duration<double, std::milli> m2 = (end - start) / 5000.0;
    start = chrono::high_resolution_clock::now();
    auto [f3, l3] = get_par_lejano(vec500);
    end = chrono::high_resolution_clock::now();
    cout << fabs(f3 - l3) << " -> " << f3 << " " << l3 << endl;
    chrono::duration<double, milli> m3 = (end - start) / 500.0;
    start = chrono::high_resolution_clock::now();
    auto [f4, l4] = get_par_lejano(vec50);
    end = chrono::high_resolution_clock::now();
    cout << fabs(f4 - l4) << " -> " << f4 << " " << l4 << endl;
    chrono::duration<double, milli> m4 = (end - start) / 50.0;
    auto result = (m1/m2 + m1/m3 + m1/m4 + m2/m3 + m2/m4 + m3/m4) / 6.0;
    if (fabs(result - 1) < 0.25)
        cout << boolalpha << true << endl;
    else
        cout << fabs(result - 1);
}

TEST_CASE("Question #15") {
    execute_test("test_15.in", test_15);
}

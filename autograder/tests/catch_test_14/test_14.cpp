//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "sp4.h"
using namespace std;

static void test_14() {
    string word, file_name;
    cin >> word >> file_name;
    auto result = get_anagrams(word, file_name);
    for (const auto& item: result)
        cout << item << endl;
}

TEST_CASE("Question #14") {
    execute_test("test_14.in", test_14);
}

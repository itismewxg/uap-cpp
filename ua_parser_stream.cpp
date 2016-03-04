/*
# Copyright 2016 Xingang Wang
#
# Licensed under the Apache License, Version 2.0 (the 'License')
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#         http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
*/
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <gtest/gtest.h>
#include "ua_parser.h"
#include <sys/time.h>

using namespace std;

int
main(int argc, char* argv[]) {
    ua_parser::Parser user_agent_parser("../regexes.yaml");
    string line;
    while(getline(cin, line)) {
        if (line.empty()) {
            printf("empty line\n");
            continue;
        }
        ua_parser::UserAgent result = user_agent_parser.Parse(line);
        cout << result;
    }
}

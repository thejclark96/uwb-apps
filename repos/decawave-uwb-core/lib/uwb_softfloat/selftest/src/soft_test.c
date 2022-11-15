/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <stdio.h>
#include <string.h>

#include "os/mynewt.h"
#include "testutil/testutil.h"
#include "softfloat/softfloat.h"

TEST_CASE_DECL(test_asin)
TEST_CASE_DECL(test_atan)
TEST_CASE_DECL(test_atan2)
TEST_CASE_DECL(test_log)
TEST_CASE_DECL(test_log10)
TEST_CASE_DECL(test_fmod)
TEST_CASE_DECL(test_strtod)

TEST_SUITE(soft_test_all)
{
	test_asin();
	test_atan();
	test_atan2();
	test_log();
	test_log10();
	test_fmod();
    test_strtod();
}

int
main(int argc, char **argv)
{
    soft_test_all();
    return tu_any_failed;
}

# With interleave
See https://travis-ci.org/agutenkunst/art_interleave_option/builds/581142259
```
(...)
Subprocess  > art_interleave_option:make `cd /root/target_ws/build/art_interleave_option; catkin build --get-env art_interleave_option | catkin env -si  /usr/bin/make run_tests --jobserver-fds=6,7 -j; cd -`
[art_interleave_option:make] /usr/bin/cmake -H/root/target_ws/src/art_interleave_option -B/root/target_ws/build/art_interleave_option --check-build-system CMakeFiles/Makefile.cmake 0
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/Makefile2 run_tests
[art_interleave_option:make] make[1]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/cmake -H/root/target_ws/src/art_interleave_option -B/root/target_ws/build/art_interleave_option --check-build-system CMakeFiles/Makefile.cmake 0
[art_interleave_option:make] /usr/bin/cmake -E cmake_progress_start /root/target_ws/build/art_interleave_option/CMakeFiles 4
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/Makefile2 CMakeFiles/run_tests.dir/all
[art_interleave_option:make] make[2]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f gtest/googlemock/gtest/CMakeFiles/gtest.dir/build.make gtest/googlemock/gtest/CMakeFiles/gtest.dir/depend
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/clean_test_results_art_interleave_option.dir/build.make CMakeFiles/clean_test_results_art_interleave_option.dir/depend
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /root/target_ws/src/art_interleave_option /root/target_ws/src/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option/CMakeFiles/clean_test_results_art_interleave_option.dir/DependInfo.cmake --color=
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /root/target_ws/src/art_interleave_option /usr/src/googletest/googletest /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option/gtest/googlemock/gtest /root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/CMakeFiles/gtest.dir/DependInfo.cmake --color=
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/clean_test_results_art_interleave_option.dir/DependInfo.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/clean_test_results_art_interleave_option.dir/depend.internal".
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/clean_test_results_art_interleave_option.dir/depend.internal".
[art_interleave_option:make] Scanning dependencies of target clean_test_results_art_interleave_option
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/clean_test_results_art_interleave_option.dir/build.make CMakeFiles/clean_test_results_art_interleave_option.dir/build
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/remove_test_results.py /root/target_ws/build/art_interleave_option/test_results/art_interleave_option
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/CMakeFiles/gtest.dir/DependInfo.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/CMakeFiles/gtest.dir/depend.internal".
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/CMakeFiles/gtest.dir/depend.internal".
[art_interleave_option:make] Scanning dependencies of target gtest
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f gtest/googlemock/gtest/CMakeFiles/gtest.dir/build.make gtest/googlemock/gtest/CMakeFiles/gtest.dir/build
[art_interleave_option:make] Removing test result files from '/root/target_ws/build/art_interleave_option/test_results/art_interleave_option'
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] [ 25%] Built target clean_test_results_art_interleave_option
[art_interleave_option:make] [ 25%] Building CXX object gtest/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option/gtest/googlemock/gtest && /usr/bin/c++  -DGTEST_CREATE_SHARED_LIBRARY=1 -Dgtest_EXPORTS -I/usr/src/googletest/googletest/include -I/usr/src/googletest/googletest  -fPIC    -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /usr/src/googletest/googletest/src/gtest-all.cc
[art_interleave_option:make] [ 50%] Linking CXX shared library libgtest.so
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option/gtest/googlemock/gtest && /usr/bin/cmake -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=1
[art_interleave_option:make] /usr/bin/c++ -fPIC   -shared -Wl,-soname,libgtest.so -o libgtest.so CMakeFiles/gtest.dir/src/gtest-all.cc.o  -L/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/src -Wl,-rpath,/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest/src -lpthread
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] [ 50%] Built target gtest
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/stuck_test.dir/build.make CMakeFiles/stuck_test.dir/depend
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /root/target_ws/src/art_interleave_option /root/target_ws/src/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option/CMakeFiles/stuck_test.dir/DependInfo.cmake --color=
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/stuck_test.dir/DependInfo.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/stuck_test.dir/depend.internal".
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/stuck_test.dir/depend.internal".
[art_interleave_option:make] Scanning dependencies of target stuck_test
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/stuck_test.dir/build.make CMakeFiles/stuck_test.dir/build
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] [ 75%] Building CXX object CMakeFiles/stuck_test.dir/test/stuck_test.cpp.o
[art_interleave_option:make] /usr/bin/c++  -DROSCONSOLE_BACKEND_LOG4CXX -DROS_BUILD_SHARED_LIBS=1 -DROS_PACKAGE_NAME=\"art_interleave_option\" -I/opt/ros/melodic/include -I/opt/ros/melodic/share/xmlrpcpp/cmake/../../../include/xmlrpcpp -I/usr/src/googletest/googletest/include   -o CMakeFiles/stuck_test.dir/test/stuck_test.cpp.o -c /root/target_ws/src/art_interleave_option/test/stuck_test.cpp
[art_interleave_option:make] [100%] Linking CXX executable /root/target_ws/devel/.private/art_interleave_option/lib/art_interleave_option/stuck_test
[art_interleave_option:make] /usr/bin/cmake -E cmake_link_script CMakeFiles/stuck_test.dir/link.txt --verbose=1
[art_interleave_option:make] /usr/bin/c++    -rdynamic CMakeFiles/stuck_test.dir/test/stuck_test.cpp.o  -o /root/target_ws/devel/.private/art_interleave_option/lib/art_interleave_option/stuck_test  -L/root/target_ws/build/art_interleave_option/gtest -Wl,-rpath,/root/target_ws/build/art_interleave_option/gtest:/root/target_ws/build/art_interleave_option/gtest/googlemock/gtest:/opt/ros/melodic/lib gtest/googlemock/gtest/libgtest.so /opt/ros/melodic/lib/libroscpp.so -lboost_filesystem -lboost_signals /opt/ros/melodic/lib/librosconsole.so /opt/ros/melodic/lib/librosconsole_log4cxx.so /opt/ros/melodic/lib/librosconsole_backend_interface.so -llog4cxx -lboost_regex /opt/ros/melodic/lib/libroscpp_serialization.so /opt/ros/melodic/lib/libxmlrpcpp.so /opt/ros/melodic/lib/librostime.so /opt/ros/melodic/lib/libcpp_common.so /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4 -lboost_system -lboost_thread -lboost_chrono -lboost_date_time -lboost_atomic -lpthread -lpthread
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] [100%] Built target stuck_test
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/depend
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /root/target_ws/src/art_interleave_option /root/target_ws/src/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option/CMakeFiles/tests.dir/DependInfo.cmake --color=
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/tests.dir/DependInfo.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/tests.dir/depend.internal".
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/tests.dir/depend.internal".
[art_interleave_option:make] Scanning dependencies of target tests
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/build
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] make[3]: Nothing to be done for 'CMakeFiles/tests.dir/build'.
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] [100%] Built target tests
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/build.make CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/depend
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] cd /root/target_ws/build/art_interleave_option && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /root/target_ws/src/art_interleave_option /root/target_ws/src/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option /root/target_ws/build/art_interleave_option/CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/DependInfo.cmake --color=
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/DependInfo.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/depend.internal".
[art_interleave_option:make] Dependee "/root/target_ws/build/art_interleave_option/CMakeFiles/CMakeDirectoryInformation.cmake" is newer than depender "/root/target_ws/build/art_interleave_option/CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/depend.internal".
[art_interleave_option:make] Scanning dependencies of target _run_tests_art_interleave_option_gtest_stuck_test
[art_interleave_option:make] make[3]: Leaving directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] /usr/bin/make -f CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/build.make CMakeFiles/_run_tests_art_interleave_option_gtest_stuck_test.dir/build
[art_interleave_option:make] make[3]: Entering directory '/root/target_ws/build/art_interleave_option'
[art_interleave_option:make] catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/run_tests.py /root/target_ws/build/art_interleave_option/test_results/art_interleave_option/gtest-stuck_test.xml "/root/target_ws/devel/.private/art_interleave_option/lib/art_interleave_option/stuck_test --gtest_output=xml:/root/target_ws/build/art_interleave_option/test_results/art_interleave_option/gtest-stuck_test.xml"
[art_interleave_option:make] -- run_tests.py: execute commands
[art_interleave_option:make]   /root/target_ws/devel/.private/art_interleave_option/lib/art_interleave_option/stuck_test --gtest_output=xml:/root/target_ws/build/art_interleave_option/test_results/art_interleave_option/gtest-stuck_test.xml
[art_interleave_option:make] [==========] Running 1 test from 1 test case.
[art_interleave_option:make] [----------] Global test environment set-up.
[art_interleave_option:make] [----------] 1 test from TestSuite
[art_interleave_option:make] [ RUN      ] TestSuite.testCase
[art_interleave_option:make] Output before stuck
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
The job exceeded the maximum time limit for jobs, and has been terminated.
```
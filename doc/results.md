# With default settings

see https://travis-ci.org/agutenkunst/art_interleave_option/builds/581120950

```
(...)
Subprocess  > art_interleave_option:check `cd /root/target_ws/build/art_interleave_option; catkin build --get-env art_interleave_option | catkin env -si  /usr/bin/make cmake_check_build_system; cd -`
Output     << art_interleave_option:check /root/target_ws/logs/art_interleave_option/build.check.000.log
/usr/bin/cmake -H/root/target_ws/src/art_interleave_option -B/root/target_ws/build/art_interleave_option --check-build-system CMakeFiles/Makefile.cmake 0
cd /root/target_ws/build/art_interleave_option; catkin build --get-env art_interleave_option | catkin env -si  /usr/bin/make cmake_check_build_system; cd -
Finished   << art_interleave_option:check
Starting   >> art_interleave_option:make
Subprocess  > art_interleave_option:make `cd /root/target_ws/build/art_interleave_option; catkin build --get-env art_interleave_option | catkin env -si  /usr/bin/make run_tests --jobserver-fds=6,7 -j; cd -`
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
...industrial_ci is still running...
The job exceeded the maximum time limit for jobs, and has been terminated.
```


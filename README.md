Bazel Code Coverage
===================

Sample Project to play with generation of code coverage info from Bazel.

The `docker` folder contains a Dockerfile that prepares the build environment (ubuntu 18.04 + Bazel 2.0.0).
To start the container call"
```
   docker/run.sh
```

It will build and start the container. The code is mounted in the folder `/code`.

To build:
```
cd /code
bazel build //...
```

To run the unit test:
```
bazel test //...
```

To create the coverage report:
```
bazel coverage --instrument_test_targets --experimental_cc_coverage --combined_report=lcov --coverage_report_generator=@bazel_tools//tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator:Main //...
genhtml bazel-out/_coverage/_coverage_report.dat -o report
```
the report will be generated in the `report` folder

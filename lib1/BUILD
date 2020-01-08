cc_library(
    name = 'lib1',
    hdrs = ['lib1.h',
           ],
    srcs = ['lib1.cpp',
           ],
    linkstatic = True,
    visibility = ["//visibility:public"],
)

cc_test(
    name = 'lib1_unit_tests',
    srcs = ['test_lib1.cpp'],
    deps = ['lib1',
            '@googletest//:gtest_main']
)

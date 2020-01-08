workspace(name = "coverage_test")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


http_archive(
    name = "googletest",
    urls = ["https://github.com/google/googletest/archive/release-1.10.0.tar.gz"],
    sha256 = "9dc9157a9a1551ec7a7e43daea9a694a0bb5fb8bec81235d8a1e6ef64c716dcb",
    strip_prefix = "googletest-release-1.10.0",
)

http_archive(
    name = "eigen",
    urls = ["https://bitbucket.org/eigen/eigen/get/3.3.7.tar.gz"],
    sha256 = "7e84ef87a07702b54ab3306e77cea474f56a40afa1c0ab245bb11725d006d0da",
    build_file = "//autonomy/external_deps:BUILD.eigen",
)


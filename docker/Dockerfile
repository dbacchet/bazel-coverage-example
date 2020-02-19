FROM ubuntu:16.04
MAINTAINER Davide

RUN apt-get update
RUN apt-get install -y build-essential
RUN apt-get install -y gdb
RUN apt-get install -y lcov
RUN apt-get install -y git
RUN apt-get install -y vim
RUN apt-get install -y wget
RUN apt-get install -y htop
RUN apt-get install -y unzip
# install gcc 7 - this is necessary as the default gcc in the above image is 5.4, which has a bug that prevents us from getting accurate code coverage (https://gcovr.com/en/stable/faq.html#why-are-uncovered-files-not-reported)
RUN apt-get update && \
    apt-get install build-essential software-properties-common -y && \
    add-apt-repository ppa:ubuntu-toolchain-r/test -y && \
    apt-get update && \
    apt-get install gcc-snapshot -y && \
    apt-get update && \
    apt-get install gcc-7 g++-7 -y && \
    update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 60 --slave /usr/bin/g++ g++ /usr/bin/g++-7 --slave /usr/bin/gcov gcov /usr/bin/gcov-7
# openjdk is needed for bazel coverage
RUN apt-get install -y default-jdk
# bazel
RUN wget https://github.com/bazelbuild/bazel/releases/download/2.1.0/bazel-2.1.0-installer-linux-x86_64.sh \
    && chmod +x bazel-2.1.0-installer-linux-x86_64.sh \
    && ./bazel-2.1.0-installer-linux-x86_64.sh


#!/bin/bash
######################################################################
# DESCRIPTION: Fuzzer setup to be run as a normal user
######################################################################

# This is the portion of the setup for fuzzing that does not require root access.

set -e

# Build instrumented version of verilator
pushd ../..
autoconf
AFL_HARDEN=1 CC=/AFLplusplus/afl-gcc-fast CXX=/AFLplusplus/afl-g++-fast CFLAGS="$CFLAGS -fprofile-arcs -ftest-coverage" CXXFLAGS="$CXXFLAGS -fprofile-arcs -ftest-coverage" LFLAGS="$LFLAGS -lgcov" ./configure $(cd ..; pwd)

make clean
make -j $(ncpus)
popd

# Create a listing of likely snippets for the fuzzer to use.
# Not essential, but makes things likely to be found faster.
./generate_dictionary

# Compile wrapper program
AFL_HARDEN=1 CXX=/AFLplusplus/afl-g++-fast CXXFLAGS="$CXXFLAGS -fprofile-arcs -ftest-coverage" LFLAGS="$LFLAGS -lgcov" make wrapper

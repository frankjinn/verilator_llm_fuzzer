#!/bin/bash
######################################################################
# DESCRIPTION: Fuzzer run script
######################################################################

# Actually do the fuzzing.  Note that this will not terminate in any reasonable
# amount of time.  However, it will give updates on its progress.
afl-fuzz -i in1 -o out1 -x dictionary ./wrapper --cc --timing --quiet --Wno-lint --Wno-fatal @@

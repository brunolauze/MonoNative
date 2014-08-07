#!/bin/sh

cd bin/Debug
LD_LIBRARY_PATH=../../../MonoNative/bin/Debug:/usr/local/llvm-devel/lib:/usr/local/lib:/lib ./MonoNative $@

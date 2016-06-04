#!/bin/bash

TEST=${1:-ferris};

cd /ferris;
runtest -v -v --tool $TEST  ROOTDIR=`pwd` EXBASE=`pwd`/ GUTEN=/Develop/ferristestsuite/testsuite/guten  SDATA=`pwd`/testsuite/sampledata --xml=ferris.xml  --srcdir `pwd`/testsuite

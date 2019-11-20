#!/bin/bash
date >> /tmp/run.log
echo "Hello, world"
wc -l /tmp/run.log >&2


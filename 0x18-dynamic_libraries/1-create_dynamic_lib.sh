#!/bin/bash

gcc -shared -o liball.so *.c
sudo cp libdynamic.so /usr/lib/

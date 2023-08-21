#!/bin/bash

gcc -shared -o liball.so *.c
sudo cp liball.so /usr/lib/

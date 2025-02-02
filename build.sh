#!/bin/sh

gcc src/main.c \
    -o prism.out \
    -lSDL3 \
    -ltesseract \
    -lm -lpthread

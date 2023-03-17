#!/usr/bin/env python3
import sys
fname='input.txt'
try:
    f = open(fname, 'r')
except OSError as e:
    print(f"OS error ({e.errno}): '{e.strerror}' open file: {fname} ")
    sys.exit()

with f:
    try:
        print(f.read())
    except IOError as e:
        print("Error ({0}): '{1}' while reading file: {2}".format(e.errno, e.strerror,fname))
    finally:
        f.close()

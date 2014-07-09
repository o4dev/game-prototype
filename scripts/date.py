#!/usr/bin/env python

"""
Simply outputs the time/date.

NOTE: does not check __name__ == '__main__'
"""

from time import time,ctime

print 'Today is',ctime(time())



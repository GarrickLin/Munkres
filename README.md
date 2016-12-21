Munkres implementation for C++
---------------------------------

## Introduction

The Munkres module provides an implementation of the Munkres algorithm
(also called the [Hungarian algorithm][] or the Kuhn-Munkres algorithm).
The algorithm models an assignment problem as an NxM cost matrix, where
each element represents the cost of assigning the ith worker to the jth
job, and it figures out the least-cost solution, choosing a single item
from each row and column in the matrix, such that no row and no column are
used more than once.

This code is transplanted from Python version of [bmc/munkres][].


## Dependency

The only dependency is the Matrix data structure of OpenCV，any versions 
of OpenCV2 or OpenCV3 should be worked.

And this code could be run in any platform with preinstalled OpenCV librarys.

## Usage

Run the following commond: 

```
cd ${Munkres_root}
mkdir build
cd build
cmake ..
```

and compile a `main` demo to run.

## Copyright

&copy; 2016 G.K.

## License

Licensed under the Apache License, Version 2.0.

[Hungarian algorithm]: http://en.wikipedia.org/wiki/Hungarian_algorithm
[bmc/munkres]: https://github.com/bmc/munkres
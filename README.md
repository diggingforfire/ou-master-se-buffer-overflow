# OU Master SE - Software Security buffer overflow examples

This repository contains two examples for buffer overflows in C:
* [CWE-787: Out-of-bounds Write](https://cwe.mitre.org/data/definitions/787.html) 
* [CWE-125: Out-of-bounds Read](https://cwe.mitre.org/data/definitions/125.html)

Running the provided Dockerfile will compile and run them with gcc on debian.

## How to run

* Make sure you have Docker installed
* Clone this repository
* Navigate to the repository directory and build/run the image to see the output (i.e. `docker run --rm -it $(docker build -q .)`)

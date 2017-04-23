# filterpipe
Note: [grep already does this](https://unix.stackexchange.com/a/26293 "Nothing better than reinventing the wheel")

Filterpipe is a tool for testing command line programs with commented input files. The comments are ignored, or filtered, through filterpipe. It takes files from stdin and filters out comments, then outputs to stdout. Comments are on their own line, python style, i.e. start a comment with `#`, end with newline

# Usage
Running filterpipe in shell with `bin` executable and `test_input` as test file
>`$ ./filterpipe < test_input | ./bin`

# Installation
Just `make` and copy the executable `filterpipe` to your program's binary directory. Will probably support `make install` in the future
